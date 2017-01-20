
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QTimer tick;
    frame = new Graphs();
    frame->show();
    frame->setHidden(true);
    ui->setupUi(this);
    connect(ui->hsSpeed, SIGNAL(valueChanged(int)),
            ui->lSpeed, SLOT(setNum(int)));

    connect(ui->sbAngle, SIGNAL(valueChanged(double)),
            ui->openGLWidget, SLOT(setAngle(double)));
    connect(ui->sbImpulse, SIGNAL(valueChanged(double)),
            ui->openGLWidget, SLOT(setImpulse(double)));
    connect(ui->sbMass, SIGNAL(valueChanged(double)),
            ui->openGLWidget, SLOT(setMass(double)));
    connect(ui->pbStart, SIGNAL(pressed()),
            ui->openGLWidget, SLOT(toggleRunning()));
    connect(ui->sbLength, SIGNAL(valueChanged(double)),
            ui->openGLWidget, SLOT(setLength(double)));
    connect(ui->sbDCoeff, SIGNAL(valueChanged(double)),
            ui->openGLWidget, SLOT(setDamping(double)));

    connect(ui->openGLWidget, SIGNAL(diffAngle(double)),
            ui->dtAngle, SLOT(display(double)));
    connect(ui->openGLWidget, SIGNAL(diffEnergy(double)),
            ui->dtEnergy, SLOT(display(double)));
    connect(ui->openGLWidget, SIGNAL(diffFreq(double)),
            ui->dtFreq, SLOT(display(double)));

    connect(ui->openGLWidget, SIGNAL(spf(double)),
            ui->dtTime_2, SLOT(display(double)));

    connect(ui->acGraph, SIGNAL(triggered(bool)),
            frame, SLOT(setHidden(bool)));
}

MainWindow::~MainWindow(){
    delete frame;
    delete ui;
}

