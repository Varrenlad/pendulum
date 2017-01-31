#include "graphs.h"
#include "ui_graphs.h"

Graphs::Graphs(QVector<double> &o_first,
               QVector<double> &o_second,
               QWidget *parent) :
    first_field(o_first),
    second_field(o_second),
    QDialog(parent),
    ui(new Ui::Graphs)
{
    ui->setupUi(this);
    this->setLocale(QLocale(QLocale::Russian, QLocale::RussianFederation));
    ui->widget->addGraph();
}

void Graphs::updateData(){
    ui->widget->graph(0)->setData(first_field, second_field);
    ui->widget->replot();
}

Graphs::~Graphs() {
    delete ui;
}

void Graphs::destroyData() {
    ui->widget->clearGraphs();
}
