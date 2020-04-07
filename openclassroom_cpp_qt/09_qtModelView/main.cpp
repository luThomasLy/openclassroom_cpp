#include <QApplication>
#include "mafenetre09.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MaFenetre09 window;
    window.show();

    return app.exec();
}
