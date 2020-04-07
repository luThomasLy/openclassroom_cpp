#include <utility>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
//    pair<int, double> p(2, 3.14);    //Une paire contenant un entier valant 2 et un nombre à virgule valant 3.14
//    cout << "La paire vaut (" << p.first << ", " << p.second << ")" << endl;

    map<string, double> poids; //Une table qui associe le nom d'un animal à son poids

    //On ajoute les poids de quelques animaux
    poids["souris"] = 0.05;
    poids["tigre"] = 200;
    poids["chat"] = 3;
    poids["elephant"] = 10000;
    poids["saumon"] = 10;
    poids["serpent"] = 5;
    poids["batman"] = 2;
//    poids["chien"] = 20;

    //Et on parcourt la table en affichant le nom et le poids
//    for(map<string, double>::iterator it=poids.begin(); it!=poids.end(); ++it)
//    {
//        cout << it->first << " pese " << it->second << " kg." << endl;
//    }

    map<string, double>::iterator trouve = poids.find("chien");

    if(trouve == poids.end())
    {
        cout << "Le poids du chien n'est pas dans la table" << endl;
    }
    else
    {
        cout << "Le chien pese " << trouve->second << " kg." << endl;
    }

    return 0;
}
