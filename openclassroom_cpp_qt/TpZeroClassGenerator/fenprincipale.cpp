#include "fenprincipale.h"

FenPrincipale::FenPrincipale() : QWidget()
{
    setFixedSize(400,600);



    QGroupBox *groupbox = new QGroupBox;

    //Layout
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(groupbox);



    m_boutonGenerer = new QPushButton("Générer", this);
    m_boutonGenerer->move(100,550);

    m_boutonQuit = new QPushButton("Quitter", this);
    m_boutonQuit->move(200,550);

    connect(m_boutonGenerer, SIGNAL(clicked()), this, SLOT(ouvrefenetregenerer()));
    connect(m_boutonQuit, SIGNAL(clicked()), this, SLOT(quitter()));
}

void FenPrincipale::ouvrefenetregenerer()
{

}

void FenPrincipale::quitter()
{
    close();
}
