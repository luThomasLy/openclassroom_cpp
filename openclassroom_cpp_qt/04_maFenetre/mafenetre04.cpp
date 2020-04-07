#include "mafenetre04.h"

MaFenetre04::MaFenetre04()
{
    setFixedSize(300, 150);

    // Construction du bouton
    m_button = new QPushButton("Design my button !", this);

    m_button->setFont(QFont("Arial", 20));
    m_button->setCursor(Qt::PointingHandCursor);
    //m_button->setIcon(QIcon("smile.png"));
    m_button->move(60, 50);

    connect(m_button, SIGNAL(clicked()), qApp, SLOT(quit()));
}

void MaFenetre04::quit()
{
    close();
}
