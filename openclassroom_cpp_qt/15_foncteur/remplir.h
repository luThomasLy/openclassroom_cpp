#ifndef REMPLIR_H
#define REMPLIR_H


class Remplir
{
public:
    Remplir();

    Remplir(int i)
        :m_valeur(i)
    {}

    int operator()()
    {
        ++m_valeur;
        return m_valeur;
    }

private:
    int m_valeur;
};

#endif // REMPLIR_H
