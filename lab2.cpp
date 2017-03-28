#include<cmath>
#include"lab2.h"
void Elo::setK (double k) {K=k;}
void Elo::setRa (double ra) {Ra=ra;}
void Elo::setRb (double rb) {Rb=rb;}
double Elo::getK() {return K;}
double Elo::getRa() {return Ra;}
double Elo::getRb() {return Rb;}

int Elo::a (double Sa){	return round(getRa()+getK()*(Sa-1/(1+pow(10,(getRb()-getRa())/400))));}
int Elo::b (double Sb){	return round(getRb()+getK()*(Sb-1/(1+pow(10,(getRa()-getRb())/400))));}
