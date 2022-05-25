#include "Accesoire.h"

Accesoire::Accesoire()
{
	cout << "constructeur sans parametres (Accessoire)" << endl;
}

Accesoire::Accesoire(string n):nom(n)
{
	cout << "constructeur avec parametres (Accessoire)" << endl;
}
