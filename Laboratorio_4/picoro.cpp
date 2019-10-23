#include "picoro.h"
#include "tes_picoro.h"
#include"cp_picoro.h"
#include"cgp_picoro.h"

void Picoro::saludo()
{
    cout<<"acaso nunca habias visto un extraterreste sabandija, soy picoro  daimaku"<<endl;
}

Picoro::Picoro()
{
    prt=new TES_Picoro;
    prt2=new CGP_Picoro;
    prt3=new CP_Picoro;
}

Picoro::~Picoro()
{
    delete prt;
    delete prt2;
    delete prt3;
}
