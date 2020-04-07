#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QFont>
#include <QIcon>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setFixedSize(800,300);

    QPushButton button("Hello world, how are u ?", &window);
    button.setText("Design my button !");

    QFont police("Arial", 50, QFont::Bold, true);
    button.setFont(police);

    button.setToolTip("help");

//    a other button on a button
//    QPushButton otherButton("other button", &button);
//    otherButton.move(30,15);

    window.show();

    return app.exec();
}
