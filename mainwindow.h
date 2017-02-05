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
    void updateGraph(double time, double angle, double impulse);

signals:
    //void on_hsSpeed_valueChanged(int value);


private slots:
    void on_pbStart_clicked(bool checked);
    void on_pbReload_clicked(bool checked);
    void timerUP();
private:
    QTimer *pTimer;
    Ui::MainWindow *ui;
    Graphs *phaze, *angle, *impulse;
    bool isRunning = false;
    double curtime = 0.0;
};

#endif // MAINWINDOW_H
