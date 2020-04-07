#include <QApplication>
#include "mafenetre03.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MaFenetre03 window;
    window.show();

    return app.exec();
}
