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

graficos::graficos() {
}

graficos::graficos(const graficos& orig) {
}

graficos::~graficos() {
}

int graficos::Movimiento(int& x,int& y)const{
    allegro_init();
    install_timer();
    install_keyboard();
    
    int key;
    key= readkey();
    while((key !=KEY_ENTER && key != KEY_DOWN && key!= KEY_UP && key!=KEY_LEFT && key !=KEY_RIGHT)){
        key=readkey();
    }
    if(key==KEY_ENTER) return 1;
    else if (key==KEY_UP)    x-=1;
    else if (key==KEY_DOWN)  x+=1;
    else if (key ==KEY_LEFT) y-=1;
    else                     y+=1;
    return 0;
}
int  graficos::Recibe_tecla()const{
    
}
void graficos::Dibujar(int,int,int,int,int**)const{
    
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
