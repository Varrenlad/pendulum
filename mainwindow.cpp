#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pTimer = new QTimer();
    connect(pTimer, SIGNAL(timeout()),
            this, SLOT(timerUP()));

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

    phaze = new Graphs(QStringLiteral("Phase graph"), this);
    phaze->show();
    phaze->setHidden(true);

    angle = new Graphs(QStringLiteral("Angle graph"), this);
    angle->show();
    angle->setHidden(true);

    impulse = new Graphs(QStringLiteral("Impulse graph"), this);
    impulse->show();
    impulse->setHidden(true);

    connect(ui->pbReload, SIGNAL(pressed()),
            phaze, SLOT(destroyData()));
    connect(ui->pbReload, SIGNAL(pressed()),
            angle, SLOT(destroyData()));
    connect(ui->pbReload, SIGNAL(pressed()),
            impulse, SLOT(destroyData()));

    connect(ui->gPhaze, SIGNAL(triggered(bool)),
            phaze, SLOT(setHidden(bool)));
    connect(ui->gAngle, SIGNAL(triggered(bool)),
            angle, SLOT(setHidden(bool)));
    connect(ui->gEnergy, SIGNAL(triggered(bool)),
            impulse, SLOT(setHidden(bool)));

    connect(ui->openGLWidget, SIGNAL(newGraphData(double,double,double)),
            this, SLOT(updateGraph(double,double,double)));
}

MainWindow::~MainWindow(){
    delete angle;
    delete phaze;
    delete impulse;
    delete ui;
}

void MainWindow::updateGraph(double p_time, double p_angle, double p_impulse){
    phaze->addPoint(p_angle, p_impulse);
    angle->addPoint(p_time, p_angle);
    impulse->addPoint(p_time, p_impulse);
    ui->dtTime->display(p_time);
}

void MainWindow::on_pbStart_clicked(bool checked) {
    if (isRunning){
        ui->pbStart->setText("Старт");
        pTimer->stop();
        /*ui->cbPhyz->setEnabled(true);
        ui->sbAngle->setEnabled(true);
        ui->sbDCoeff->setEnabled(true);
        ui->sbImpulse->setEnabled(true);
        ui->sbLength->setEnabled(true);
        ui->sbMass->setEnabled(true);*/
    }
    else {
        pTimer->start(100);
        ui->pbStart->setText("Пауза");
        ui->cbPhyz->setEnabled(false);
        ui->sbAngle->setEnabled(false);
        ui->sbDCoeff->setEnabled(false);
        ui->sbImpulse->setEnabled(false);
        ui->sbLength->setEnabled(false);
        ui->sbMass->setEnabled(false);
    }
    //move to reload
    isRunning = !isRunning;
}

void MainWindow::on_pbReload_clicked(bool checked) {
    ui->pbStart->setText("Старт");
    ui->cbPhyz->setEnabled(true);
    ui->sbAngle->setEnabled(true);
    ui->sbDCoeff->setEnabled(true);
    ui->sbImpulse->setEnabled(true);
    ui->sbLength->setEnabled(true);
    ui->sbMass->setEnabled(true);
    ui->dtTime->display(0);
}

void MainWindow::timerUP(){
    curtime += 0.1;
    ui->dtTime_2->display(curtime);
}
