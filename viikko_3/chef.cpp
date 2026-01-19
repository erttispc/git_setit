#include "chef.h"
#include <iostream>

int Chef::makeSalad(int x){
  std::cout << "salad function" << std::endl;
  return x/5;
}

int Chef::makeSoup(int x){
  std::cout << "soup function" << std::endl;
  return x/3;
}