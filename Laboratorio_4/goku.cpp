#include "goku.h"
#include"comptecnicaespecial.h"
#include"tes_goku.h"
#include"cgp_goku.h"
#include"cp_goku.h"
void Goku::saludo()
{
    cout<<"mucho gusto en conocerlo me presento mi nombre es son goku,es un honor conocerlo."<<endl;
}

Goku::Goku()
{
    prt=new TES_Goku;
    prt2=new CGP_goku;
    prt3=new CP_Goku;


}

Goku::~Goku()
{
    delete prt;
    delete prt2;
    delete prt3;

}
