#include <QCoreApplication>
#include <iostream>

#include <addition.h>
#include <ajout.h>
#include <remplir.h>

using namespace std;

int main()
{

//    Addition foncteur;
//    int a(2), b(3);
//    cout << a << " + " << b << " = " << foncteur(a,b) << endl; //On utilise le foncteur comme s'il s'agissait d'une fonction

    vector<int> tab(100,0); //Un tableau de 100 cases valant toutes 0

    Remplir f(0);

    for(vector<int>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {
        *it = f(); //On appelle simplement le foncteur sur chacun des éléments du tableau
    }

    return 0;

}
