#include "chef.h"
#include "italianChef.h"

int main(){
  Chef Gordon("Gordon");
  Gordon.makeSalad(11);
  Gordon.makeSoup(14);
  ItalianChef Mario("Mario");
  Mario.makeSalad(9);
  Mario.askSecret("pizza",12,12);
  return 0;
}