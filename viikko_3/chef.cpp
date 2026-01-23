#include "chef.h"
// #include <iostream>

int Chef::makeSalad(int x){
  std::cout << "Chef " << chefName << " with " << x << " ingredients can make " << x/5 << " salad portions" << std::endl;
  return x/5;
}

int Chef::makeSoup(int x){
  std::cout << "Chef " << chefName << " with " << x << " ingredients can make " << x/3 << " soup portions" << std::endl;
  return x/3;
}

Chef::Chef(std::string str){
 chefName=str; 
 std::cout << "Chef " << chefName << " constructor" << std::endl;
}

Chef::~Chef(){
 std::cout << "Chef " << chefName << " destructor" << std::endl;
}