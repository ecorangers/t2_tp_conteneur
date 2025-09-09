// t2_tp_conteneur_jour_de_marche.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

void afficherOrdreNum(vector<pair<int, string>>& _repartitionEmplacement)
{
	for (vector<pair<int, string>>::iterator it = _repartitionEmplacement.begin(); it != _repartitionEmplacement.end(); ++it)
	{
		cout << it->second << endl;
	}
}

void afficherOrdreAlpha(vector<pair<int, string>>& _repartitionEmplacement)
{
	for (vector<pair<int, string>>::iterator it = _repartitionEmplacement.begin(); it != _repartitionEmplacement.end(); ++it)
	{
		cout << it->second << " -> " << it->first <<endl;
	}
}

void trier(vector<pair<int, string>>& _repartitionEmplacement)
{
	sort(_repartitionEmplacement.begin(), _repartitionEmplacement.end(), [](pair<int, string>& a, pair<int, string>& b) {
		return a.second < b.second;
		});
}

int main()
{
	vector<pair<int, string>> repartitionEmplacement;
	int nbEmplacement = 0;
	string nomMarchand = "";
	cout << "Saisir le nombre d emplecement : " ;
	cin >> nbEmplacement;
	for (int i = 0; i < nbEmplacement; i++)
	{
		cout << "Nom du marchand : ";
		cin >> nomMarchand;
		repartitionEmplacement.push_back({ i, nomMarchand });
	}
    
	afficherOrdreNum(repartitionEmplacement);
	trier(repartitionEmplacement);
	afficherOrdreAlpha(repartitionEmplacement);
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
