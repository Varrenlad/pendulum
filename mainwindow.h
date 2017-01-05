#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "phyzxmodel.h"
#include <QMainWindow>
#include <QFrame>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    //std::unique_ptr<Phyzxmodel> model = new Phyzxmodel;

};

#endif // MAINWINDOW_H
