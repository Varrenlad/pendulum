#include "mainwindow.h"
#include "annotation.h"
#include <QApplication>
#include <QFontDatabase>
#include <memory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFontDatabase::addApplicationFont(":/DejaVuLGCSans-ExtraLight.ttf");
    QFontDatabase::addApplicationFont(":/DejaVuLGCSansCondensed.ttf");
    MainWindow w;
    //запуск аннотации
    Annotation anno;
    anno.show();
    w.show();
    anno.activateWindow();
    return a.exec();
}
