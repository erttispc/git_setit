#include "game.h"
#include <time.h>
#include <cstdlib>
#include <iostream>

Game::Game(int x){
  srand(time(NULL));
  maxNumber=x;
  randomNumber=rand() % x + 1;
  std::cout << "init successful, max value for number is : " << x << std::endl;
}


void Game::play(){
  numOfGuesses=0;
  while(playerGuess!=randomNumber){
    std::cout << "Guess number" << std::endl;
    std::cin >> playerGuess;
    if(playerGuess>randomNumber){ std::cout << "Random number is lower than guess" << std::endl;}
    else if (playerGuess<randomNumber) std::cout << "Random number is higher than guess" << std::endl;
    numOfGuesses++;
  }
  printGameResult();
}

void Game::printGameResult(){
  std::cout << "Correct! Answer was : " << randomNumber << std::endl;
  std::cout << "Guesses: " << numOfGuesses << std::endl;
}

Game::~Game(){
  std::cout << "object cleared from memory" << std::endl;
}