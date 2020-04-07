#ifndef MAFENETRE05_H
#define MAFENETRE05_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>

class MaFenetre05 : public QWidget
{
public:
    MaFenetre05();

private:
    QPushButton *m_button;
    QLCDNumber *m_lcd;
    QSlider *m_slider;
    QProgressBar *m_progressb;

};

#endif // MAFENETRE05_H
