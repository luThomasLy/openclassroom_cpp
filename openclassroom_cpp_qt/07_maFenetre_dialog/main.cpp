#include <QApplication>
#include "mafenetre07.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MaFenetre07 fenetre;
    fenetre.show();

    return app.exec();
}
