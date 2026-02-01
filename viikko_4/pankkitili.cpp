#include "pankkitili.h"
Pankkitili::Pankkitili(std::string str){
    omistaja=str;
    std::cout << "Bank account created for user  " << omistaja << std::endl;
}


double Pankkitili::getBalance(){
    return saldo;
}

bool Pankkitili::deposit(double x){
    saldo+=x;
    std::cout << "Deposited " << x << " to " << omistaja << " account." << std::endl;
    return true;
}

bool Pankkitili::withdraw(double x){
    if(saldo-x<0)return false;
    else saldo-=x;
    std::cout << "Withdrew " << x << " from " << omistaja << " account." << std::endl;
    return true;
}