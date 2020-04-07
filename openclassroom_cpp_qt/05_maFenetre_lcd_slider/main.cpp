#include <QApplication>
#include <QPushButton>

#include "mafenetre05.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MaFenetre05 mafenetre;


    mafenetre.show();

    return app.exec();
}
