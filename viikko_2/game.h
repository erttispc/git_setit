#pragma once

class Game{
  private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
  public:
    Game(int);
    ~Game();
    void play();
};