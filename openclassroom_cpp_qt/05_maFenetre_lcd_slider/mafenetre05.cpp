#include "mafenetre05.h"

MaFenetre05::MaFenetre05()
{
    setFixedSize(200, 100);

   //    m_lcd = new QLCDNumber(this);
   //    m_lcd->setSegmentStyle(QLCDNumber::Flat);
   //    m_lcd->move(50, 20);

    m_progressb = new QProgressBar(this);
    m_progressb->setGeometry(40,600,100,40);
    m_progressb->move(50,20);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(10, 60, 150, 20);

    //connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int)));
    connect(m_slider, SIGNAL(valueChanged(int)), m_progressb, SLOT(setValue(int)));

}
