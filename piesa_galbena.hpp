#include "piesa.hpp"

class Piesa_galbena: public Piesa{
	int multiplicator; // pretul final pentru piesa galbena este pret*multiplicator
public:
	Piesa_galbena();
	Piesa_galbena(int, int);
	void afisare();
	int pretTotal();
};