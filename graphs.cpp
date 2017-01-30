#include "graphs.h"
#include "ui_graphs.h"

Graphs::Graphs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Graphs)
{
    ui->setupUi(this);
    this->setLocale(QLocale(QLocale::Russian, QLocale::RussianFederation));

}

//void Graphs::updateData(QVector<QVector> data){
//    ui->widget->graph(0)->setData();
//}

Graphs::~Graphs()
{
    delete ui;
}
