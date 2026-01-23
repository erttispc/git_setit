#include "italianChef.h"
#include <string>
#include <iostream>

ItalianChef::ItalianChef(std::string str){
 chefName=str; 
 std::cout << "ItalianChef " << chefName << " constructor" << std::endl;
}

ItalianChef::~ItalianChef(){
 std::cout << "ItalianChef " << chefName << " destructor" << std::endl;
}

int ItalianChef::makePizza(){
  std::cout << "ItalianChef " << chefName << " with " << flour << " flour and " << water << " can make " << std::min(water,flour)/5 << " pizzas" << std::endl;
  return 0;
}

bool ItalianChef::askSecret(std::string str, int x, int z){
  flour=x;
  water=z;
  if(!str.compare(password)){
    std::cout << "Password ok!" << std::endl;
    makePizza();
    return true;
  }
  else return false;
}