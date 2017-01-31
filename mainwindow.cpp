#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
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

    /*connect(ui->gAngle, SIGNAL(toggled(bool)),
            angle, SLOT(setVisible(bool)));
    connect(ui->gEnergy, SIGNAL(toggled(bool)),
            impulse, SLOT(setVisible(bool)));
    connect(ui->gPhaze, SIGNAL(toggled(bool)),
            phaze, SLOT(setVisible(bool)));*/

    connect(ui->pbReload, SIGNAL(clicked(bool)),
            ui->openGLWidget, SLOT(flushChanges(bool)));

    phaze = new Graphs(ui->openGLWidget->getImpulseData(),
                       ui->openGLWidget->getAngleData(),
                       this);
    phaze->show();
    phaze->setHidden(true);

    angle = new Graphs(ui->openGLWidget->getTimeData(),
                       ui->openGLWidget->getAngleData(),
                       this);
    angle->show();
    angle->setHidden(true);

    impulse = new Graphs(ui->openGLWidget->getTimeData(),
                         ui->openGLWidget->getImpulseData(),
                         this);
    impulse->show();
    impulse->setHidden(true);

    connect(ui->pbReload, SIGNAL(pressed()),
            phaze, SLOT(destroyData()));
    connect(ui->pbReload, SIGNAL(pressed()),
            angle, SLOT(destroyData()));
    connect(ui->pbReload, SIGNAL(pressed()),
            impulse, SLOT(destroyData()));

    connect(ui->openGLWidget, SIGNAL(newGraphData()),
            phaze, SLOT(updateData()));
    connect(ui->openGLWidget, SIGNAL(newGraphData()),
            angle, SLOT(updateData()));
    connect(ui->openGLWidget, SIGNAL(newGraphData()),
            impulse, SLOT(updateData()));

    phaze->show();
    //angle->show();
    //impulse->show();

    connect(ui->gPhaze, SIGNAL(changed()),
            phaze, SLOT(show()));
    connect(ui->gAngle, SIGNAL(changed()),
            angle, SLOT(show()));
    connect(ui->gEnergy, SIGNAL(changed()),
            impulse, SLOT(show()));
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
