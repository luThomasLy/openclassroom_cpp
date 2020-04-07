#include <QApplication>
#include <QPushButton>

#include "mafenetre06.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MaFenetre06 mafenetre;

    mafenetre.show();

    return app.exec();
}
