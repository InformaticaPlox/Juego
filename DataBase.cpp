/* 
 * File:   DataBase.cpp
 * Author: JuanI
 * 
 * Created on 21 de junio de 2015, 05:54 AM
 */

#include "DataBase.h"
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

DataBase::DataBase() {
    ifstream input("data_base.txt",ios::in);
    if(input){
        char buffLinea[500];
        input.getline(buffLinea,500,'\n'); //==Monstruos==
        while(1){
            input.getline(buffLinea,500,'\n');
            if(strcmp(buffLinea,"===Armas===")==0) break;
            this->SetMonstruo(buffLinea); 
        }
        while(1){
            input.getline(buffLinea,500,'\n');
            if(strcmp(buffLinea,"===Pociones===")==0)break;
            this->SetArmas(buffLinea);
        }
        while(1){
            input.getline(buffLinea,500,'\n');
            if(strcmp(buffLinea,"===Armaduras===")==0)break;
            this->SetPocimas(buffLinea);
        }
        while(input.getline(buffLinea,500,'\n')){
            this->SetArmaduras(buffLinea);
        }   
    }
    input.close();
}

DataBase::~DataBase() {
}

/*Artefacto *DataBase::devuelve_artefacto(){
    int size =this->artefactos.size();
    int index = rand()%size;
    Artefacto * art = this->artefactos[index];
    return art;
}
 * */
Monstruo DataBase::devuelve_monstruo(){
    int size = this->monstruos.size();
    int index =rand()% size;
    Monstruo mon =this->monstruos[index];
    return mon;
}
void DataBase::SetMonstruo(char* buffLinea){
    Monstruo mon;
    string nombre = strtok(buffLinea," \t");
    int ataque =atoi(strtok(NULL," \t"));
    int defensa =atoi(strtok(NULL," \t"));
    mon.SetNombre(nombre);mon.SetAtaque(ataque);mon.SetDefensa(defensa);
    this->monstruos.push_back(mon);
}
void DataBase::SetArmas   (char* buffLinea){
    string nombre= strtok(buffLinea,"/");
    int ataqMax =atoi(strtok(NULL,"/"));
    int ataqMin=atoi (strtok(NULL,"/"));
    string nombAt1=strtok(NULL,"/");
    int danio1=atoi(strtok(NULL,"/"));
    int mana1 =atoi(strtok(NULL,"/"));
    string nombAt2=strtok(NULL,"/");
    int danio2=atoi(strtok(NULL,"/"));
    int mana2 =atoi(strtok(NULL,"/"));
    Ataque ata1(nombAt1,danio1,mana1);
    Ataque ata2(nombAt2,danio2,mana2);
    Arma weapon(ataqMin,ataqMax,nombre,ata1,ata2);
    this->armas.push_back(weapon);    
}
void DataBase::SetPocimas (char* buffLinea){
    int tipo=atoi(strtok(buffLinea,"/"));
    string nombre =strtok(NULL,"/");
    int cantidad =atoi(strtok(NULL,"/"));
    Pocion potion(tipo,nombre,cantidad);
    this->pociones.push_back(potion);
}
void DataBase::SetArmaduras(char* buffLinea){
    string nombre =strtok(buffLinea," \t");
    int defensa=atoi(strtok(NULL," \t"));
    Armadura arm(defensa,nombre);
    this->armaduras.push_back(arm);
}
