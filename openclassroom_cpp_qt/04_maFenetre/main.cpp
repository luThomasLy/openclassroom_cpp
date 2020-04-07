#include <QApplication>
#include "mafenetre04.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MaFenetre04 window;
    window.show();

    return app.exec();
}
