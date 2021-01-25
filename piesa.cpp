#include "piesa.hpp"

Piesa::Piesa(int pret){
	this->pret = pret;
}

int Piesa::getPret(){
	return pret;
}

void Piesa::setPret(int pret){
	this->pret = pret;
}

Piesa::Piesa():pret(0){}

void Piesa::afisare(){
	cout<<"Piesa: { pret = " << this->pret << " } -> pretTotal = " << this->pretTotal()<<"\n";
}

int Piesa::pretTotal(){
	return this->pret;
}