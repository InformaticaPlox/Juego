/* 
 * File:   PocionCuracion.h
 * Author: alulab14
 *
 * Created on 12 de junio de 2015, 11:49 AM
 */

#ifndef POCIONCURACION_H
#define	POCIONCURACION_H

#include "Pocion.h"

class PocionCuracion{
public:
    PocionCuracion(int,std::string);
    PocionCuracion();  
    PocionCuracion(const PocionCuracion& orig);   
    virtual ~PocionCuracion();
    
    void SetPuntosVida(int puntosVida);
    int GetPuntosVida() const;
    
//    PocionCuracion operator=(const PocionCuracion& poc);
private:
    int puntosVida;
};

#endif	/* POCIONCURACION_H */