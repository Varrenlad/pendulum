#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "phyzxmodel.h"
#include "graphs.h"
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

public slots:
    //void updateGraph(QVector<QVector> data, int graph_num);

signals:
    //void on_hsSpeed_valueChanged(int value);


private:
    Ui::MainWindow *ui;
    Graphs *phaze, *angle, *impulse;

};

#endif // MAINWINDOW_H
