#pragma once
#include <iostream>

class Pankkitili{
    protected:
    std::string omistaja;
    double saldo=0;
    public:
    Pankkitili(std::string);
    Pankkitili(){};
    double getBalance();
    virtual bool deposit(double);
    virtual bool withdraw(double);
};