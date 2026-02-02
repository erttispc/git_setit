#pragma once
#include <string>

class Follower{
    std::string nimi;
public:
    Follower* next=nullptr;
    Follower(std::string);
    std::string getNimi();
    void paivitys(std::string);
};