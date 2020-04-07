#include "mafenetre07.h"

MaFenetre07::MaFenetre07() : QWidget()
{
    setFixedSize(400, 400);

    m_boutonDialogue = new QPushButton("Ouvrir la boîte de dialogue", this);
    m_boutonDialogue->move(100, 200);

    connect(m_boutonDialogue, SIGNAL(clicked()), this, SLOT(ouvrirDialogue()));
}

void MaFenetre07::ouvrirDialogue()
{
    bool ok = false;

    //QMessageBox::information(this, "MaFenetreTly" , "Hello World !");
     QString prenom = QInputDialog::getText(this, "Prénom", "Quel est ton prénom ?",
                                            QLineEdit::Normal, QString(), &ok);

     if (ok && !prenom.isEmpty())
     {
         QMessageBox::information(this, "Prénom", "Bonjour " + prenom + ", ça va ?");
     }
     else
     {
         QMessageBox::critical(this, "Prénom", "Vous n'avez pas... snif.");
     }
}
