/* 
 * File:   Dibujador.cpp
 * Author: Juan
 * 
 * Created on 6 de junio de 2015, 09:32 PM
 */

#include "Dibujador.h"
#include <iostream>
#include <allegro.h>
#pragma comment(lib, "alleg.lib")
#include <winalleg.h>
#define TAM 50

using namespace std;

Dibujador::Dibujador(int valA,int valB) {
    this->SetA(valA);
    this->SetB(valB);
}

void Dibujador::SetB(int B) {
    this->B = B;
}

int Dibujador::GetB() const {
    return B;
}

void Dibujador::SetA(int A) {
    this->A = A;
}

int Dibujador::GetA() const {
    return A;
}

Dibujador::Dibujador(const Dibujador& orig) {
    this->A = orig.A;
    this->B = orig.B;
}

Dibujador::~Dibujador() {
    this->A = 0;
    this->B = 0;
}

void Dibujador::Dibuja(int posX, int posY,int limFil,int limCol,Celda **laberinto){
    int iniFil = posX - this->B, iniCol = posY - this->A,  finFil = posX + this->B, finCol = posY + this->A;
    
    //BITMAP* backBuffer = create_bitmap(SCREEN_W, SCREEN_H);
    BITMAP* avatar = load_bitmap("avatar2.bmp",NULL);
    BITMAP* pared = load_bitmap("pared.bmp",NULL);
    BITMAP* inicio = load_bitmap("inicio.bmp",NULL);
    BITMAP* fin = load_bitmap("salida.bmp",NULL);
    BITMAP* piso = load_bitmap("piso.bmp",NULL);
   
    
    if ((posX - this->B) < 0) iniFil = 0;
    if ((posX + this->B) > limFil) finFil = limFil;
    if ((posY - this->A) < 0) iniCol = 0;
    if ((posY + this->A) > limCol) finCol = limCol;
    for(int i = iniFil; i <= finFil; i++){
        for(int j = iniCol; j <= finCol; j++){
            int valor = laberinto[i][j].GetTipo();
//            if (valor == 0){cout << ' ';}
//            if (valor == 1){cout << '#';}
//            if (valor == 2){cout << 'H';}
//            if (valor == 3){cout << 'I';}
//            if (valor == 4){cout << 'F';} 
//            if (valor == 5){cout << 'A';}
//            if (valor == 6){cout << 'M';}
            if (valor == 0){blit(piso,screen,0,0,(i-iniFil)*TAM,(j-iniCol)*TAM,avatar->w,avatar->h);}
            if (valor == 1){blit(pared,screen,0,0,(i-iniFil)*TAM,(j-iniCol)*TAM,avatar->w,avatar->h);}
            if (valor == 2){blit(avatar,screen,0,0,(i-iniFil)*TAM,(j-iniCol)*TAM,avatar->w,avatar->h);}
            if (valor == 3){blit(inicio,screen,0,0,(i-iniFil)*TAM,(j-iniCol)*TAM,avatar->w,avatar->h);}
            if (valor == 4){blit(fin,screen,0,0,(i-iniFil)*TAM,(j-iniCol)*TAM,avatar->w,avatar->h);}           
        }
        cout << endl;
    }
//    destroy_bitmap(piso);
//    destroy_bitmap(pared);
//    destroy_bitmap(avatar);
//    destroy_bitmap(inicio);
//    destroy_bitmap(fin);
}

