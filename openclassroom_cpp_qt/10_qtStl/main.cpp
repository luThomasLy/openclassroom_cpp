#include <QCoreApplication>
#include <cmath>
#include <string>
#include <iostream>
#include <cctype>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
//exemple avec cmath
//    double a(4.3), b(5.2);
//    cout << pow(a,b) << endl;    //Calcul de a^b
//    cout << sqrt(a) << endl;     //Calcul de la racine carrée de a
//    cout << cos(b) << endl;      //Calcul du cosinus de b


//exemple avec cctype
//    cout << "Entrez un caractere : ";
//    char symbole;
//    cin >> symbole;

//    if(isdigit(symbole))
//        cout << "C'est un chiffre." << endl;
//    else
//        cout << "Ce n'est pas un chiffre." << endl;


//exemple avec cctype > mise en majuscule
//    cout << "Entrez une phrase : " << endl;
//    string phrase;
//    getline(cin, phrase);

//    //On parcourt la chaîne pour la convertir en majuscules
//    for(int i(0); i<phrase.size(); ++i)
//    {
//        phrase[i] = toupper(phrase[i]);
//    }

//    cout << "Votre phrase en majuscules est : " << phrase << endl;

//nombres de secondes depuis le 01/01/1970
//    int secondes = time(0);
//    cout << "Il s'est ecoule " << secondes << " secondes depuis le 01/01/1970." << endl;

//    int nb;
//    nb = rand() % 100; //nb prendra une valeur au hasard entre 0 et 9 compris.
//    cout << "nombres aux hasards " << nb << endl;


//tirage hasardeux d'un nombre 10 fois
    srand(time(0));    //On initialise la suite de nombres aléatoires

    for(int i(0); i<10; ++i)
        cout << rand() % 10 << endl;  //On génère des nombres au hasard

    return 0;
}
