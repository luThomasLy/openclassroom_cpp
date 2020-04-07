#ifndef MAFENETRE04_H
#define MAFENETRE04_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MaFenetre04 : public QWidget
{
public:
    MaFenetre04();

private:
    QPushButton *m_button;

private slots:
    void quit();

};

#endif // MAFENETRE04_H
