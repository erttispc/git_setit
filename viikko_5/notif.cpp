#include "notif.h"
#include <iostream>

Notificator::Notificator(){
    std::cout << "Notificator default constructor" << std::endl;
}

void Notificator::add(Follower* x){
    x->next=follower;
    follower=x;
}

void Notificator::remove(Follower* x){
    std::cout << "Notificator is removing follower " << x->getName() << std::endl;
    if(follower==x){
        follower=x->next;
        return;
    }
    Follower* temp=follower;
    while(follower!=nullptr){
        if(follower->next==x){
            follower->next=follower->next->next;
        }
        follower=follower->next;
    }
    follower=temp;
}

void Notificator::print(){
    std::cout << "Notificator followers: " << '\n';
    Follower* temp=follower;
    while(follower!=nullptr){
        std::cout << follower->getName() << std::endl;
        follower=follower->next;
    }
    follower=temp;
}

void Notificator::post(std::string str){
    std::cout << "Notificator is posting message " << str << std::endl;
    Follower* temp=follower;
    while(follower!=nullptr){
        follower->update(str);
        follower=follower->next;
    }
    follower=temp;
}