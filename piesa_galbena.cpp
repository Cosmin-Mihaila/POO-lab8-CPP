#include "piesa_galbena.hpp"
Piesa_galbena::Piesa_galbena():Piesa(0),multiplicator(0){}
Piesa_galbena::Piesa_galbena(int pret, int multiplicator):Piesa(pret),multiplicator(multiplicator){}

void Piesa_galbena::afisare(){
	cout<<"Piesa_galbena: { pret = "<< this->pret << "; multiplicator = "<<this->multiplicator<<" } -> pretTotal = " << this->pretTotal()<<"\n";

}

int Piesa_galbena::pretTotal(){
	return this->pret * this->multiplicator;
}