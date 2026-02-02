#include <iostream>
#include "follower.h"

Follower::Follower(std::string str){
    std::cout << "Follower " << str << " constructor" << std::endl;
    nimi=str;
}

std::string Follower::getName(){
    return nimi;
}

void Follower::update(std::string str) {
    std::cout << "Follower " << getName() << " got message: " << str << std::endl;
}