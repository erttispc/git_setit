#pragma once
#include <string>
#include "follower.h"

class Notificator{
    Follower *follower=nullptr;
public:
    Notificator();
    void add(Follower*);
    void remove(Follower*);
    void print();
    void post(std::string);
};