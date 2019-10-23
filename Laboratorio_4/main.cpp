#include <iostream>
#include "luchador.h"
#include "Goku.h"
#include "picoro.h"
#include"vegeta.h"
using namespace std;

int main()
{
    Luchador *p1=new Goku;
   p1->saludo();
   p1->ejecutar_Poder();
   p1->ejecutar_Patada();
   p1->ejecutar_Especial();

    p1=new Picoro;
    p1->saludo();
    p1->ejecutar_Poder();
    p1->ejecutar_Patada();
    p1->ejecutar_Especial();

    p1=new Vegeta;
    p1->saludo();
    p1->ejecutar_Poder();
    p1->ejecutar_Patada();
    p1->ejecutar_Especial();




    return 0;
}
