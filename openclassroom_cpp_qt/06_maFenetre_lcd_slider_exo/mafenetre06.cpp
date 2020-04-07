#include "mafenetre06.h"

MaFenetre06::MaFenetre06() : QWidget()
{
    setFixedSize(300, 300);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setRange(200, 600);
    m_slider->setGeometry(10, 60, 150, 20);

    m_slider_long = new QSlider(Qt::Vertical, this);
    m_slider_long->setRange(200, 600);
    m_slider_long->setGeometry(60, 10, 20, 150);

    connect(m_slider, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int)));
    connect(this, SIGNAL(agrandissementMax()), qApp, SLOT(quit()));
    connect(m_slider_long, SIGNAL(valueChanged(int)), this, SLOT(changerLongeur(int)));
}

void MaFenetre06::changerLargeur(int largeur)
{
    setFixedSize(largeur, height());
//    setFixedSize(largeur, 100);

    if(largeur == 600)
    {
        emit agrandissementMax();
    }
}

void MaFenetre06::changerLongeur(int longeur)
{
    setFixedSize(width(), longeur);
}

void MaFenetre06::quit()
{
    close();
}
