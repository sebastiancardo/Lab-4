#ifndef LUCHADOR_H
#define LUCHADOR_H
#include"comptecnicaespecial.h"
#include"compgolpepatada.h"
#include"comppoder.h"

class Luchador
{
protected:
    compTecnicaEspecial *prt ;
    compGolpePatada *prt2;
    compPoder *prt3;

public:
    virtual void saludo();
    Luchador();
    virtual ~Luchador();
    void ejecutar_Especial();
    void ejecutar_Patada();
    void ejecutar_Poder();

};

#endif // LUCHADOR_H
