#pragma once
#include <iostream>
#include "chef.h"

class ItalianChef: public Chef{
    std::string password{"pizza"};
    int flour;
    int water;
    int makePizza();
  public:
    ItalianChef(std::string);
    ~ItalianChef();
    bool askSecret(std::string, int, int);
};