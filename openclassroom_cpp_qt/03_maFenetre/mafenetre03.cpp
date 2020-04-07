#include "mafenetre03.h"

MaFenetre03::MaFenetre03()
{
    setFixedSize(300, 150);

    // Construction du bouton
    m_button = new QPushButton("Design my button !", this);

    m_button->setFont(QFont("Arial", 20));
    m_button->setCursor(Qt::PointingHandCursor);
    m_button->move(60, 50);
}
