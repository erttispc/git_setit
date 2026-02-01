#include "luottotili.h"

Luottotili::Luottotili(std::string str,double x){
   omistaja=str; 
   luottoRaja=x;
   std::cout << "Credit account created for user  " << omistaja << ". Max credit is " << luottoRaja << std::endl;
}

bool Luottotili::deposit(double x){
    if(x<0)return false;
    else saldo+=x;
    if(saldo>0)saldo=0;
    std::cout << "Deposited " << x << " to " << omistaja << " credit account." << std::endl;
    return true;
}

bool Luottotili::withdraw(double x){
    if(x<0)return false;
    if(x>luottoRaja)return false;
    else luottoRaja-=x;
    std::cout << omistaja << " credit account: withdrew " << x << ". Credit remaining: " << luottoRaja << std::endl;
    return true;
}

double Luottotili::getCredit(){
    return luottoRaja;
}