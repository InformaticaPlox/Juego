/* 
 * File:   PocionMana.h
 * Author: Propietario
 *
 * Created on 13 de junio de 2015, 03:10 AM6
 */

#ifndef POCIONMANA_H
#define	POCIONMANA_H
#include "Pocion.h"
class PocionMana {
public:
    PocionMana(int=0,std::string="");
    PocionMana(const PocionMana& orig);
    virtual ~PocionMana();
    void SetPuntosMana(int puntosMana);
    int GetPuntosMana() const;
    
//    PocionMana operator=(const PocionMana& poc);
private:
    int puntosMana;

};

#endif	/* POCIONMANA_H */

