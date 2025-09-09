// t2_tp_conteneur_visite_de_la_mine.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <list>
using namespace std;

typedef enum
{
	AUCUN = 0,
	GAUCHE = 1,
	DROITE,
	DEVANT,
	HAUT,
	BAS,
}Deplacements;

istream& operator >> (istream& is, Deplacements& d)
{
	int tmp;
	if (is >> tmp)
		d = static_cast<Deplacements>(tmp);
	return is;
}

void afficherChemin(list<Deplacements>& _chemin)
{
	for (list<Deplacements>::iterator it = _chemin.begin(); it != _chemin.end(); ++it)
		cout << *it << endl;
}

int main()
{
	Deplacements deplacement;
	list<Deplacements> chemin;

	cout << "Veuillez saisir vos deplacement : " << endl;

	while (cin >> deplacement && deplacement != 0)
	{
		chemin.push_back(deplacement);
		
	}	
	chemin.reverse();

	cout << "Chemin retour : " << endl;

	afficherChemin(chemin);
		
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
