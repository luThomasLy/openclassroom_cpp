#include <QApplication>
#include "mafenetre08.h"

#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QFormLayout>

int main(int argc, char *argv[])
{QApplication app(argc, argv);

    QWidget fenetre;

//    QPushButton *bouton01 = new QPushButton("bouton01");
//    QPushButton *bouton02 = new QPushButton("bouton02");
//    QPushButton *bouton03 = new QPushButton("bouton03");

//    QHBoxLayout *layout = new QHBoxLayout;
//    QVBoxLayout *layout = new QVBoxLayout;
//    layout->addWidget(bouton01);
//    layout->addWidget(bouton02);
//    layout->addWidget(bouton03);

//    QGridLayout *layout = new QGridLayout;
//    layout->addWidget(bouton01, 0, 0);
//    layout->addWidget(bouton02, 0, 1);
//    layout->addWidget(bouton03, 1, 0);

    QLineEdit *nom = new QLineEdit;
    QLineEdit *prenom = new QLineEdit;
    QLineEdit *age = new QLineEdit;

    QFormLayout *layout = new QFormLayout;
    layout->addRow("Votre nom", nom);
    layout->addRow("Votre prénom", prenom);
    layout->addRow("Votre âge", age);

    fenetre.setLayout(layout);

    fenetre.show();

    return app.exec();
}
