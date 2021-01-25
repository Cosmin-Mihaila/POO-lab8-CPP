#include <iostream>
#include <typeinfo>
using namespace std;
#include "baza.hpp"
class Piesa: public Baza{
protected:
	int pret;
public:
	Piesa(int);
	Piesa();
	int getPret();
	void setPret(int);
	virtual void afisare();
	virtual int pretTotal();
};
