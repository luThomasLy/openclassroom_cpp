#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> a(8,3.14);  //Un vector contenant 8 fois le nombre 3.14
    vector<double> b(5,2.71);  //Un autre vector contenant 5 fois le nombre 2.71

    a.swap(b); //On échange le contenu des deux tableaux.
    //b a maintenant une taille de 8 et a une taille de 5.

    for(int i(0); i<a.size(); ++i) //On utilise size() pour connaître le nombre d'éléments dans le vector
        cout << a[i] << endl;

    for(int i(0); i<b.size(); ++i) //On utilise size() pour connaître le nombre d'éléments dans le vector
        cout << b[i] << endl;

    return 0;
}
