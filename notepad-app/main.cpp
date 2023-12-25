#include "mainwindow.h"

#include <QApplication> //handles widgets, event handling, mouse movement

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //creates the application object
    MainWindow w;
    w.show();

    return a.exec();//puts our application into a loop in which our different events that are happening in the application are going to be handled
}
