#include "graphs.h"
#include "ui_graphs.h"

Graphs::Graphs(QString name,
               QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Graphs)
{
    ui->setupUi(this);
    if (name == QStringLiteral("Phase graph"))
            graph_data = new QCPCurve(ui->widget->xAxis, ui->widget->yAxis);
    else {
        ui->widget->addGraph();
        ui->widget->graph()->setBrush(QBrush(QColor(40, 212, 157, 128)));
    }
    this->setLocale(QLocale(QLocale::Russian, QLocale::RussianFederation));
    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    this->setWindowTitle(name);
}

void Graphs::addPoint(double first_var, double second_var){
    if (graph_data) {
        graph_data->data()->add(QCPCurveData(i, first_var, second_var));
        ++i;
    }
    else
        ui->widget->graph()->addData(first_var, second_var);
    ui->widget->rescaleAxes();
    ui->widget->replot();
}

Graphs::~Graphs() {
    delete ui;
}

void Graphs::destroyData() {
    if (graph_data)
        graph_data->data()->clear();
    else
        ui->widget->graph()->data()->clear();
    ui->widget->rescaleAxes();
    ui->widget->replot();
    //ui->widget->clearGraphs();
    i = 0;
}
