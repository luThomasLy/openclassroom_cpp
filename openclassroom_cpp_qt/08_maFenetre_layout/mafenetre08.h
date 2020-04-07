#ifndef MAFENETRE08_H
#define MAFENETRE08_H

#include <QWidget>
#include <QPushButton>

class MaFenetre08 : public QWidget
{
    Q_OBJECT
public:
    MaFenetre08();

private:
    QPushButton *bouton01;
    QPushButton *bouton02;
    QPushButton *bouton03;

};

#endif // MAFENETRE08_H
