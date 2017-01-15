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
    Phyzxmodel phyz;

};

#endif // MAINWINDOW_H
