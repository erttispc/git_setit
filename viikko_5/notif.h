#pragma once
#include <string>
#include "follower.h"

class Notificator{
    Follower *follower=nullptr;
public:
    Notificator(){};
    void lisaa(Follower*);
    void poista(Follower*);
    void tulosta();
    void postita(std::string);
};