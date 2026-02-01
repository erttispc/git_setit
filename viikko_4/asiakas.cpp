#include "asiakas.h"


std::string Asiakas::getNimi(){
    return nimi;

}

void Asiakas::showSaldo(){
    std::cout << nimi << std::endl;
    std::cout << "Bank account balance : " << kayttotili.getBalance() << std::endl;
    std::cout << "Remaining credit : " << luottotili.getCredit() << std::endl;
}

Asiakas::Asiakas(std::string str,double x) : luottotili(str,x),kayttotili(str){
    nimi=str;
    std::cout << "Created " << nimi << " account" << '\n';
    std::cout << "Bank account balance : " << kayttotili.getBalance() << std::endl;
    std::cout << "Remaining credit : " << luottotili.getCredit() << std::endl;
}

bool Asiakas::talletus(double x){
   kayttotili.deposit(x);
   return true;
}

bool Asiakas::nosto(double x){
    kayttotili.withdraw(x);
    return true;
}

bool Asiakas::luotonMaksu(double x){
    luottotili.deposit(x);
    return true;
}

bool Asiakas::luotonNosto(double x){
    luottotili.withdraw(x);
    return true;
}

bool Asiakas::tiliSiirto(double x,Asiakas& yo){
    std::cout << getNimi() << " is transferring " << x << " to " << yo.getNimi() << " account." << std::endl;
    if(kayttotili.getBalance()>x){
        kayttotili.withdraw(x);
        yo.kayttotili.deposit(x);
        return true;
    }
    else return false;
}