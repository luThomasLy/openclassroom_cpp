#ifndef MAFENETRE07_H
#define MAFENETRE07_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QInputDialog>

class MaFenetre07 : public QWidget
{
    Q_OBJECT
public:
    MaFenetre07();

private:
    QPushButton *m_boutonDialogue;

private slots:
    void ouvrirDialogue();
};

#endif // MAFENETRE07_H
