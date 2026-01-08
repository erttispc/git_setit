#include <iostream>
#include <cstdlib>
#include <time.h>

int game(int maxnum){
  int rndNumber=rand() % maxnum +1;
  int guess=0;
  int guessCount=0;
  while(guess!=rndNumber){
    std::cout << "Guess number" << std::endl;
    std::cin >> guess;
    if(guess>rndNumber)std::cout << "Number is lower than guess" << std::endl;
    else if (guess<rndNumber)std::cout << "Number is higher than guess" << std::endl;
   guessCount++; 
  }
  std::cout << "Correct" << std::endl;
  return guessCount;
}

int main(){
  std::srand(time(NULL));
  int yo=game(40);
  std::cout << "Number of guesses " << yo << std::endl;
}