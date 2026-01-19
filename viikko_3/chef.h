#pragma once
#include <iostream>

class Chef{
  public:
    Chef(std::string yo): chefName{yo}{
        std::cout << "constructor" << std::endl;
    }
    Chef(){}
    ~Chef(){
      std::cout << "destroy" << std::endl;
    }
    std::string getName();
    int makeSalad(int);
    int makeSoup(int);
  protected:
    std::string chefName;
};