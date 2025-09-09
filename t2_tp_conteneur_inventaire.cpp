// t2_tp_conteneur_inventaire.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <map>
#include <vector>

using namespace std;

struct Operation
{
	int numeroProduit = 0;
	int quantite = 0;
};

void calaculerStock(map<int, int>& _stock, const vector<Operation>& _livreDeCompte)
{
	for (vector<Operation>::const_iterator it = _livreDeCompte.begin(); it != _livreDeCompte.end(); ++it)
		_stock[it->numeroProduit] += it->quantite;
}

void afficherStock(map<int, int>_stock)
{
	for (map<int, int>::iterator it = _stock.begin(); it != _stock.end(); ++it)
		cout << it->second << endl;
}

void afficherLivre(vector<Operation> _livreDeCompte)
{
	for (vector<Operation>::iterator it = _livreDeCompte.begin(); it != _livreDeCompte.end(); ++it)
		cout << it->numeroProduit << endl << it->quantite << endl;
}

int main()
{
	map<int, int> stock;
	vector<Operation> livreDeCompte;
	struct Operation operation;

	for (int i = 1; i <= 10; i++)
		stock[i] = 0;

	
	int nbOperation = 0;
	cout << "Veuillez saisir le nombre d operation : ";
	cin >> nbOperation;
	for (int i = 0; i < nbOperation; i++)
	{
		cout << "Veuilllez selectioner le numero du produit : ";
		cin >> operation.numeroProduit;
		cout << "Veuillez selectioner la quantite vendu ou acheter : ";
		cin >> operation.quantite;
		livreDeCompte.push_back(operation);
	}

	afficherLivre(livreDeCompte);
	calaculerStock(stock, livreDeCompte);
	afficherStock(stock);
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
