#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<double> a; //Une liste de double

    if(a.empty())
        cout << "La liste est vide." << endl;
    else
        cout << "La liste n'est pas vide." << endl;
    return 0;
}
