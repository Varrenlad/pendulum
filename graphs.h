#ifndef GRAPHS_H
#define GRAPHS_H

#include <QDialog>
#include "qcustomplot.h"

namespace Ui {
class Graphs;
}

class Graphs : public QDialog
{
    Q_OBJECT
public slots:
    //void updateData();
    void destroyData();
public:
    explicit Graphs(QString name = QStringLiteral("graph"), QWidget *parent = 0);
    void addPoint(double first_var, double second_var);
    ~Graphs();

private:
    size_t i = 0;
    //QVector<QCPCurveData> points;
    QCPCurve *graph_data;
    Ui::Graphs *ui;
};

#endif // GRAPHS_H
