#include "Voiture.h"

Voiture::Voiture():M(new Moteur()), a(new Accesoire())
{
	std::cout << "constructeur sans parametres (Voiture)" << endl;
}

/* Voiture::Voiture()
{
	std::cout << "constructeur sans parametres (Voiture)" << endl;
}*/

Voiture::Voiture(Moteur M, Accesoire &a):M(&M),a(&a)
{
	std::cout << "constructeur avec parametres (Voiture)" << endl;
}

Voiture::~Voiture()
{
	//si Moteur *M on ajoute le Delete this->M et le this->M=0;
	//Sinon ca se supprime automatiquement quand c'est statique et en reference
	std::cout << "destructeur  (Voiture)" << endl;
}