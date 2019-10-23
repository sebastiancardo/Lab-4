#include "vegeta.h"
#include"tes_vegeta.h"
#include "cgp_vegeta.h"
#include "cp_vegeta.h"
void Vegeta::saludo()
{
    cout<<"Que tanto me miras insecto!!,soy vegeta el principe de los sayayin  "<<endl;
}

Vegeta::Vegeta()
{
    prt=new TES_Vegeta;
    prt2=new CGP_Vegeta;
    prt3=new CP_Vegeta;

}

Vegeta::~Vegeta()
{
    delete prt;
    delete prt2;
    delete prt3;

}
