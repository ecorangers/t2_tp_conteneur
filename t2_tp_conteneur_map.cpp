// t2_tp_conteneur_map.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <map>

using namespace std;

void affiche(map<string, int> facture)
{
	for (map<string, int>::iterator it = facture.begin(); it != facture.end(); ++it)
		cout << it->first << " -> " << it->second << endl;
}

int main()
{
	map<string, int> factureRestaurant;

	factureRestaurant["burger"] = 10;
	factureRestaurant["pizza"] = 15;
	affiche(factureRestaurant);
	
	int somme = 0;
	for (map<string, int>::iterator it = factureRestaurant.begin(); it != factureRestaurant.end(); ++it)
		somme = somme + it->second;
	cout << "Total : " << somme << endl;
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
