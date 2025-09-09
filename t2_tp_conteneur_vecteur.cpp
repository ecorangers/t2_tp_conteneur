// t2_tp_conteneur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void affiche(vector<string>vecteur)
{
	for (vector<string>::iterator it = vecteur.begin(); it != vecteur.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';
}

void concatener(vector<string>vecteur)
{
	string vecteurConcatener = "";
	for (vector<string>::iterator it = vecteur.begin(); it != vecteur.end(); ++it)
		vecteurConcatener += *it;
	cout << vecteurConcatener << endl;
}

int main()
{
	vector<string> monVecteur;

	monVecteur.push_back("bonjour"); 
	monVecteur.push_back("comment");
	monVecteur.push_back("allez");
	monVecteur.push_back("vous");
	monVecteur.push_back("?");

	cout << "Mon vecteur et de taille " << monVecteur.size() <<" et de capacite "<< monVecteur.capacity() << endl; 
	
	for (int i = 0; i < monVecteur.size(); i++)
	{
		cout << monVecteur[i] << endl;
	}

	affiche(monVecteur);

	swap(monVecteur[1], monVecteur[3]);

	affiche(monVecteur);

	concatener(monVecteur);

	monVecteur.insert(monVecteur.begin() + 1, "a tous");

	affiche(monVecteur);

	monVecteur[5] = "!";

	affiche(monVecteur);
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
