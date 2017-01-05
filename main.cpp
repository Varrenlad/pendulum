#include "mainwindow.h"
#include "annotation.h"
#include <QApplication>
#include <memory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    std::unique_ptr<Annotation> anno(new Annotation);
    anno.get()->show();
    anno.get()->startTimer(0);
    w.show();
    return a.exec();
}
