#include "cutie_piese_galbene.hpp"

Cutie_piese_galbene::Cutie_piese_galbene(int dimensiune, Piesa_galbena* v){
	this->dim = dimensiune;
	this->v = v;
}

void Cutie_piese_galbene::afisare(){
	cout<<"Cutie_piese_galbene: -> pretTotal = " << this->pretTotal()<<"\n";
	int i;
	for (i = 0; i < dim; i ++){
		this->v[i].afisare();
	}
}

int Cutie_piese_galbene::pretTotal(){
	int pretTotal = 0;
	for(int i = 0; i < dim; i ++){
		pretTotal += this->v[i].pretTotal();
	}

	return pretTotal;
}