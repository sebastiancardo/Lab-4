#include "luchador.h"

void Luchador::saludo()
{
    cout<<"hola generico"<<endl;
}

Luchador::Luchador()
{

}

Luchador::~Luchador()
{

}

void Luchador::ejecutar_Especial()
{
    prt->TecnicaEspecial();

}

void Luchador::ejecutar_Patada()
{
    prt2->patada();

}

void Luchador::ejecutar_Poder()
{
    prt3->poder();

}
