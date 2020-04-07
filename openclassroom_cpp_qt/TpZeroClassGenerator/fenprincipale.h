#ifndef FENPRINCIPALE_H
#define FENPRINCIPALE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QInputDialog>
#include <QDialog>
#include <QGroupBox>
#include <QDateEdit>
#include <QTextEdit>
#include <QVBoxLayout>

class FenPrincipale : public QWidget
{
    Q_OBJECT

public:
    FenPrincipale();

private:
    QPushButton *m_boutonGenerer;
    QPushButton *m_boutonQuit;

    QGroupBox *groubox;
    QVBoxLayout *layout;


    QLineEdit *nom;
    QLineEdit *classeMere;
    QCheckBox *protections;
    QCheckBox *genererConstructeur;
    QCheckBox *genererDestructeur;
    QGroupBox *groupCommentaires;
    QLineEdit *auteur;
    QDateEdit *date;
    QTextEdit *role;

private slots:
    void ouvrefenetregenerer();
    void quitter();
};

#endif // FENPRINCIPALE_H
