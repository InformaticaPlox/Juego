/* 
 * File:   DataBase.h
 * Author: JuanI
 *
 * Created on 21 de junio de 2015, 05:54 AM
 */

#ifndef DATABASE_H
#define	DATABASE_H
#include <vector>
#include "Monstruo.h"
#include "Armadura.h"
#include "Arma.h"
#include "PocionCuracion.h"
#include "PocionMana.h"

class DataBase {
public:
    DataBase();
    virtual ~DataBase();
    Artefacto *devuelve_artefacto();
    Monstruo devuelve_monstruo();
private:
    std::vector<Artefacto*> artefactos;
    std::vector<Monstruo> monstruos;
};

#endif	/* DATABASE_H */

