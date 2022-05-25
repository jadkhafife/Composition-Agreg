#include "Moteur.h"

Moteur::Moteur() : model(" ")
{
	std::cout << "constructeur sans parametres (Moteur)" << endl;
}

Moteur::Moteur(string mo): model(mo)
{
	std::cout << "constructeur avec parametres (Moteur)" << endl;
}

Moteur::~Moteur()
{

	std::cout << "destructeur (Moteur)" << endl;
}

