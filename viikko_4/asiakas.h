#pragma once
#include <iostream>
#include "luottotili.h"

class Asiakas{
    std::string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
    public:
    bool tiliSiirto(double,Asiakas&);
    Asiakas(std::string,double);
    std::string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
};