#ifndef MAFENETRE06_H
#define MAFENETRE06_H

#include <QWidget>
#include <QApplication>
#include <QSlider>

class MaFenetre06 : public QWidget
{
    Q_OBJECT
public:
    MaFenetre06();

private slots:
    void changerLargeur(int largeur);
    void changerLongeur(int longeur);
    void quit();

private:
    QSlider *m_slider;
    QSlider *m_slider_long;

signals:
    void agrandissementMax();
};

#endif // MAFENETRE06_H
