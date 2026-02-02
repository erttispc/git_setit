#pragma once
#include <string>

class Follower{
    std::string nimi;
public:
    Follower* next=nullptr;
    Follower(std::string);
    std::string getName();
    void update(std::string);
};