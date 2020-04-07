#ifndef ADDITION_H
#define ADDITION_H


class Addition
{
public:
    Addition();

    int operator()(int a, int b)   //La surcharge de l'opérateur ()
    {
        return a+b;
    }
};

#endif // ADDITION_H
