#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    vector<string> tab;    //Un tableau de mots

    tab.push_back("tu"); //On ajoute deux mots dans le tableau
    tab.push_back("m'entends");

    tab.insert(tab.begin(), "Allo"); //On insère le mot "Salut" au début

    //Affiche les mots donc la chaîne "Allo tu m'entends"
    for(vector<string>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {
        cout << *it << " " << endl;
    }

    tab.erase(tab.begin()); //On supprime le premier mot

    //Affiche les mots donc la chaîne "tu m'entends"
    for(vector<string>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}
