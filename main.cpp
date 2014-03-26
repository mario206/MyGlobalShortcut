#include "mainwindow.h"
#include <QApplication>
#include "MyGlobalShortCut.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    MyGlobalShortCut *shortcut = new MyGlobalShortCut("ctrl+F9",&w);
    QObject::connect(shortcut,SIGNAL(activated()),&w,SLOT(gethotkey()));

    w.show();

    return a.exec();
}
