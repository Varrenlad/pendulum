#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    phaze = new Graphs();
    phaze->show();
    phaze->setHidden(true);

    angle = new Graphs();
    angle->show();
    angle->setHidden(true);

    impulse = new Graphs();
    impulse->show();
    impulse->setHidden(true);

    ui->setupUi(this);
    connect(ui->cbPhyz, SIGNAL(stateChanged(int)),
            ui->openGLWidget, SLOT(setType(int)));

    connect(ui->hsSpeed, SIGNAL(valueChanged(int)),
            ui->lSpeed, SLOT(setNum(int)));

    connect(ui->sbAngle, SIGNAL(valueChanged(double)),
            ui->openGLWidget, SLOT(setAngle(double)));
    connect(ui->sbImpulse, SIGNAL(valueChanged(double)),
            ui->openGLWidget, SLOT(setImpulse(double)));
    connect(ui->sbMass, SIGNAL(valueChanged(double)),
            ui->openGLWidget, SLOT(setMass(double)));

    connect(ui->sbLength, SIGNAL(valueChanged(double)),
            ui->openGLWidget, SLOT(setLength(double)));
    connect(ui->sbDCoeff, SIGNAL(valueChanged(double)),
            ui->openGLWidget, SLOT(setDamping(double)));
    connect(ui->openGLWidget, SIGNAL(diffAngle(double)),
            ui->dtAngle, SLOT(display(double)));
    connect(ui->pbStart, SIGNAL(clicked(bool)),
            ui->openGLWidget, SLOT(toggleRunning(bool)));
    connect(ui->hsSpeed, SIGNAL(sliderMoved(int)),
            ui->openGLWidget, SLOT(setSpeed(int)));

    connect(ui->gAngle, SIGNAL(toggled(bool)),
            angle, SLOT(setVisible(bool)));
    connect(ui->gEnergy, SIGNAL(toggled(bool)),
            impulse, SLOT(setVisible(bool)));
    connect(ui->gPhaze, SIGNAL(toggled(bool)),
            phaze, SLOT(setVisible(bool)));

    connect(ui->pbReload, SIGNAL(clicked(bool)),
            ui->openGLWidget, SLOT(flushChanges(bool)));
}

MainWindow::~MainWindow(){
    delete angle;
    delete phaze;
    delete impulse;
    delete ui;
}

/*void MainWindow::updateGraph(QVector<QVector> data, int graph_num){
    switch(graph_num){
    case 0:

        break;
    case 1:
        break;
    case 2:
        break;
    default:
        break;
    }
}*/
