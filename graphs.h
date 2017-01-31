#ifndef GRAPHS_H
#define GRAPHS_H

#include <QDialog>

namespace Ui {
class Graphs;
}

class Graphs : public QDialog
{
    Q_OBJECT
public slots:
    void updateData();
    void destroyData();
public:
    explicit Graphs(QVector<double> &o_first,
                    QVector<double> &o_second,
                    QWidget *parent = 0);
    ~Graphs();

private:
    QVector<double> first_field;
    QVector<double> second_field;
    Ui::Graphs *ui;
};

#endif // GRAPHS_H
