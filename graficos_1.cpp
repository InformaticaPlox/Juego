/* 
 * File:   graficos.cpp
 * Author: JuanI
 * 
 * Created on 22 de junio de 2015, 01:43 AM
 */
#include "allegro.h"
#include "winalleg.h"
#include <allegro.h>
#pragma comment(lib, "alleg.lib")
#include <winalleg.h>
#include <conio.h>



#include "graficos.h"

#define TAM 50

graficos::graficos() {
    allegro_init();
    install_timer();
    install_keyboard();
    set_color_depth(24);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0);
    
}

graficos::graficos(const graficos& orig) {
}

graficos::~graficos() {
}

int graficos::Movimiento(int& x,int& y)const{

    
    readkey();
//    allegro_message("presionado");
 while((key[KEY_ENTER] && key[KEY_UP] && key[KEY_DOWN] && key[KEY_LEFT] && key[KEY_RIGHT])){
        readkey();
    }
    if      (key[KEY_ENTER]){ return 1;}
    else if (key[KEY_UP])   {y-=1;}
    else if (key[KEY_DOWN]) {y+=1;}
    else if (key[KEY_LEFT]) {x-=1;}
    else if (key[KEY_RIGHT]){x+=1;}
    return 0;
}
int  graficos::Recibe_tecla()const{
    allegro_init();
    install_timer();
    install_keyboard();
    
    int key;
    key= readkey();
    
}  
void graficos::Dibujar(int posX,int B,int posY,int A,int limFil,int limCol,int **matriz)const{
    int iniFil = posX - B, iniCol = posY - A,  finFil = posX + B, finCol = posY + A;
    
    //BITMAP* backBuffer = create_bitmap(SCREEN_W, SCREEN_H);
    BITMAP* avatar = load_bitmap("avatar2.bmp",NULL);
    BITMAP* pared = load_bitmap("pared.bmp",NULL);
    BITMAP* inicio = load_bitmap("inicio.bmp",NULL);
    BITMAP* fin = load_bitmap("salida.bmp",NULL);
    BITMAP* piso = load_bitmap("piso.bmp",NULL);
   
    
    if ((posX - B) < 0) iniFil = 0;
    if ((posX + B) > limFil) finFil = limFil;
    if ((posY - A) < 0) iniCol = 0;
    if ((posY + A) > limCol) finCol = limCol;
    for(int i = iniFil; i < finFil; i++){
        for(int j = iniCol; j < finCol; j++){
            int valor = matriz[i][j];
            if (valor == 0){blit(piso,screen,0,0,(i-iniFil)*TAM,(j-iniCol)*TAM,avatar->w,avatar->h);}
            if (valor == 1){blit(pared,screen,0,0,(i-iniFil)*TAM,(j-iniCol)*TAM,avatar->w,avatar->h);}
            if (valor == 2){blit(avatar,screen,0,0,(i-iniFil)*TAM,(j-iniCol)*TAM,avatar->w,avatar->h);}
            if (valor == 3){blit(inicio,screen,0,0,(i-iniFil)*TAM,(j-iniCol)*TAM,avatar->w,avatar->h);}
            if (valor == 4){blit(fin,screen,0,0,(i-iniFil)*TAM,(j-iniCol)*TAM,avatar->w,avatar->h);}           
        }

    }
//    destroy_bitmap(piso);
//    destroy_bitmap(pared);
//    destroy_bitmap(avatar);
//    destroy_bitmap(inicio);
//    destroy_bitmap(fin);
}
int  graficos::Inicio()const{
    
}

int  graficos::Inventario()const{ /*Dentro debe ir las descripciones */
    
} 
int graficos::Equipamiento()const{ /*Dentro debe ir las descripciones */
    
} 
void graficos::MostrarArtefacto()const{ /*Descripcion */
    
} 
int  graficos::RecogerArtefacto()const{ /*Descripcion */
    
} 
void graficos::PantallaVictoria()const{
    
}
void graficos::PantallaPerder()const{
    
}
    
    
    /* EL HARD:*/
int graficos::InterfazCombate()const{
    
} /*Descripcion*/
