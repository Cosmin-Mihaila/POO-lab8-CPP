#include "piesa_galbena.hpp"

class Cutie_piese_galbene: public Baza{
	int dim;
	Piesa_galbena* v; //pretul pentru o cutie_piese_galbene este suma pieselor din vector

public:
	Cutie_piese_galbene(int dimensiune, Piesa_galbena* v);
	void afisare();
	int pretTotal();
};