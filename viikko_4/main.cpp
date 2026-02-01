#include "asiakas.h"

int main(){
    Asiakas bar("bar",1000);
    bar.talletus(250);
    bar.luotonNosto(150);
    bar.showSaldo();
    Asiakas foo("foo",1000);
    bar.showSaldo();
    bar.tiliSiirto(50,foo);
    foo.showSaldo();
    return 0;
}