#include "cutie_piese_galbene.hpp"

int main() {
	Baza** v = new Baza*[10];
	v[0] = new Piesa(200);
	v[1] = new Piesa_galbena(300, 4);
	v[2] = new Piesa_galbena(500, 2);
	v[3] = new Piesa_galbena(1000, 5);
	Piesa_galbena* w = new Piesa_galbena[3];
	w[0] = Piesa_galbena(10, 5);
	w[1] = Piesa_galbena(20, 5);
	w[2] = Piesa_galbena(30, 5);
	v[4] = new Cutie_piese_galbene(3, w);
	for(int i = 0; i < 5; i ++){
		v[i]->afisare();
	}

	for(int i = 0; i < 4; i ++){
		for(int j = i + 1; j < 5; j ++){
			if(v[i]->pretTotal() > v[j]->pretTotal()){
				Baza* aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}

	for(int i = 0; i < 5; i ++){
		v[i]->afisare();
	}
	cout<<endl;


	Baza* x = new Piesa_galbena();
	Piesa* y = dynamic_cast <Piesa*> (x);
	//y->afisare();

	Baza* m = new Piesa();
	Cutie_piese_galbene* n = dynamic_cast <Cutie_piese_galbene*>(m);
	//m->afisare();

	Piesa_galbena key;
	for(int i = 0; i < 5; i ++){

		if(typeid(key) == typeid(*v[i])){
			v[i]->afisare();
		}
	}

	Piesa key2;

	for(int i = 0; i < 5; i ++){
		if(v[i]->pretTotal() > key2.pretTotal() && typeid(key2) == typeid(*v[i])){
			key2.setPret(dynamic_cast<Piesa*>(v[i])->getPret());
		}
	}

	cout<<endl;
	key2.afisare();

}