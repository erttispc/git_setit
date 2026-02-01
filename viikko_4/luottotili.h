#pragma once
#include "pankkitili.h"

class Luottotili:public Pankkitili{
    protected:
    double luottoRaja=0;
    public:
    Luottotili(std::string,double);
    Luottotili(){}
    bool deposit(double) override;
    bool withdraw(double) override;
    double getCredit();
};