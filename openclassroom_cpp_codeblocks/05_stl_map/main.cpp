#include <map>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream fichier("/home/ninko/Documents/git/openclassroom_cpp_codeblocks/texte.txt");
    string mot;
    map<string, int> occurrences;
    while(fichier >> mot)   //On lit le fichier mot par mot
    {
         ++occurrences[mot]; //On incrémente le compteur pour le mot lu
    }
    cout << "Le mot 'narcissique' existe " << occurrences["narcissique"] << " fois dans le fichier" << endl;
    return 0;
}
