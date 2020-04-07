#ifndef AJOUT_H
#define AJOUT_H


class Ajout
{
public:
    Ajout();

    int operator()(int a)   //La surcharge de l'opérateur ()
    {
        if(a%2 == 0)
            return a+5;
        else
            return a;
    }
};

#endif // AJOUT_H
