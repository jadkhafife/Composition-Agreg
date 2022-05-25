#pragma once
#include"Moteur.h"
#include"Accesoire.h"
class Voiture
{
public:
	Voiture();
	Voiture(Moteur M,Accesoire &a);
	~Voiture();
private: 
	//Moteur M; // static
	//Moteur* M; // dynamic 
	Moteur* M;
	Accesoire* a; 
};

