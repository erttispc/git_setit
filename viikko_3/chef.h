#pragma once
#include <iostream>

class Chef{
  public:
    Chef(std::string);
    Chef(){}
    ~Chef();
    std::string getName();
    int makeSalad(int);
    int makeSoup(int);
  protected:
    std::string chefName;
};