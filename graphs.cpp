#include "graphs.h"
#include "ui_graphs.h"

Graphs::Graphs(QString name,
               QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Graphs)
{
    ui->setupUi(this);
    graph_data = new QCPCurve(ui->widget->xAxis, ui->widget->yAxis);
    this->setLocale(QLocale(QLocale::Russian, QLocale::RussianFederation));
    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    this->setWindowTitle(name);
}

void Graphs::addPoint(double first_var, double second_var){
    graph_data->data()->add(QCPCurveData(i, first_var, second_var));
    ++i;
    ui->widget->rescaleAxes();
    ui->widget->replot();
}

Graphs::~Graphs() {
    delete ui;
}

void Graphs::destroyData() {
    graph_data->data()->clear();
    ui->widget->rescaleAxes();
    ui->widget->replot();
    //ui->widget->clearGraphs();
    i = 0;
}
