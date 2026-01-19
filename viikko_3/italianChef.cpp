#include "italianChef.h"
#include <string>
#include <iostream>

int ItalianChef::makePizza(){
  std::cout << "mke piza" << std::endl;
  return 0;
}

bool ItalianChef::askSecret(std::string str, int x, int z){
  if(!str.compare(password)){
    makePizza();
    std::cout << "secret correct" << std::endl;
    return true;
  }
  else return false;
}