/* 
 * File:   DataBase.cpp
 * Author: JuanI
 * 
 * Created on 21 de junio de 2015, 05:54 AM
 */

#include "DataBase.h"


#include <iostream>
#include <fstream>
using namespace std;

DataBase::DataBase() {
    ifstream input("data_base",ios::in);
    if(input){
        /* Lecutra psss*/
    }
}

DataBase::~DataBase() {
}

Artefacto *DataBase::devuelve_artefacto(){
    int size =this->artefactos.size();
    int index = rand()%size;
    Artefacto * art = this->artefactos[index];
    return art;
}
Monstruo DataBase::devuelve_monstruo(){
    int size = this->monstruos.size();
    int index =rand()% size;
    Monstruo mon =this->monstruos[index];
    return mon;
}


