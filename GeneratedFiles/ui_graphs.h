/********************************************************************************
** Form generated from reading UI file 'graphs.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHS_H
#define UI_GRAPHS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Graphs
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QCustomPlot *widget1;
    QGroupBox *groupBox_2;
    QCustomPlot *widget_2;
    QGroupBox *groupBox_3;
    QCustomPlot *widget_3;

    void setupUi(QDialog *Graphs)
    {
        if (Graphs->objectName().isEmpty())
            Graphs->setObjectName(QStringLiteral("Graphs"));
        Graphs->resize(463, 634);
        widget = new QWidget(Graphs);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 461, 631));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        widget1 = new QCustomPlot(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 20, 441, 181));

        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        widget_2 = new QCustomPlot(groupBox_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 20, 441, 181));

        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        widget_3 = new QCustomPlot(groupBox_3);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 20, 451, 181));

        verticalLayout_2->addWidget(groupBox_3);


        retranslateUi(Graphs);

        QMetaObject::connectSlotsByName(Graphs);
    } // setupUi

    void retranslateUi(QDialog *Graphs)
    {
        Graphs->setWindowTitle(QApplication::translate("Graphs", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Graphs", "\320\255\320\275\320\265\321\200\320\263\320\270\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", 0));
        groupBox_2->setTitle(QApplication::translate("Graphs", "\320\237\320\265\321\200\320\270\320\276\320\264 \320\272\320\276\320\273\320\265\320\261\320\260\320\275\320\270\320\271", 0));
        groupBox_3->setTitle(QApplication::translate("Graphs", "\320\243\320\263\320\276\320\273 \320\276\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class Graphs: public Ui_Graphs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHS_H
