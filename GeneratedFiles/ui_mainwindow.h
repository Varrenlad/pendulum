/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "scene.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_4;
    QAction *action_5;
    QAction *action_Qt;
    QAction *action_6;
    QAction *action_QCustomPlot;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    Scene *openGLWidget;
    QMenuBar *menuBar;
    QMenu *menu_2;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QLabel *label_9;
    QLCDNumber *lcdNumber_6;
    QSlider *horizontalSlider_2;
    QLCDNumber *lcdNumber_7;
    QLabel *label_10;
    QSlider *horizontalSlider_3;
    QLCDNumber *lcdNumber_8;
    QLabel *label_11;
    QSlider *horizontalSlider_4;
    QLCDNumber *lcdNumber_9;
    QLabel *label_12;
    QSlider *horizontalSlider_5;
    QLCDNumber *lcdNumber_10;
    QLabel *label_13;
    QSlider *horizontalSlider_6;
    QCheckBox *checkBox;
    QLabel *label_14;
    QSlider *horizontalSlider_7;
    QLCDNumber *lcdNumber_11;
    QCheckBox *checkBox_2;
    QLCDNumber *lcdNumber_12;
    QSlider *horizontalSlider_8;
    QLabel *label_15;
    QGroupBox *groupBox_2;
    QLCDNumber *lcdNumber;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber_2;
    QLabel *label_4;
    QLCDNumber *lcdNumber_3;
    QLabel *label_5;
    QLCDNumber *lcdNumber_4;
    QLabel *label_6;
    QLCDNumber *lcdNumber_5;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(883, 649);
        MainWindow->setMouseTracking(false);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_Qt = new QAction(MainWindow);
        action_Qt->setObjectName(QStringLiteral("action_Qt"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        action_QCustomPlot = new QAction(MainWindow);
        action_QCustomPlot->setObjectName(QStringLiteral("action_QCustomPlot"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openGLWidget = new Scene(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setEnabled(true);
        openGLWidget->setMinimumSize(QSize(400, 300));
        openGLWidget->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout->addWidget(openGLWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 883, 21));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(242, 628));
        dockWidget->setMaximumSize(QSize(242, 628));
        dockWidget->setFloating(false);
        dockWidget->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidget->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        layoutWidget = new QWidget(dockWidgetContents_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, -1, 241, 601));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(239, 333));
        groupBox->setMaximumSize(QSize(239, 333));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 101, 21));
        lcdNumber_6 = new QLCDNumber(groupBox);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        lcdNumber_6->setGeometry(QRect(140, 10, 81, 21));
        lcdNumber_6->setFrameShadow(QFrame::Plain);
        lcdNumber_6->setDigitCount(7);
        lcdNumber_6->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_6->setProperty("value", QVariant(10));
        horizontalSlider_2 = new QSlider(groupBox);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(10, 30, 211, 21));
        horizontalSlider_2->setMinimum(1);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setValue(10);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        lcdNumber_7 = new QLCDNumber(groupBox);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        lcdNumber_7->setGeometry(QRect(140, 50, 81, 21));
        lcdNumber_7->setFrameShadow(QFrame::Plain);
        lcdNumber_7->setDigitCount(7);
        lcdNumber_7->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_7->setProperty("value", QVariant(100));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 50, 101, 21));
        horizontalSlider_3 = new QSlider(groupBox);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(10, 70, 211, 21));
        horizontalSlider_3->setMinimum(10);
        horizontalSlider_3->setMaximum(300);
        horizontalSlider_3->setSingleStep(10);
        horizontalSlider_3->setSliderPosition(100);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        lcdNumber_8 = new QLCDNumber(groupBox);
        lcdNumber_8->setObjectName(QStringLiteral("lcdNumber_8"));
        lcdNumber_8->setGeometry(QRect(140, 90, 81, 21));
        lcdNumber_8->setFrameShadow(QFrame::Plain);
        lcdNumber_8->setDigitCount(7);
        lcdNumber_8->setSegmentStyle(QLCDNumber::Flat);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 90, 101, 21));
        horizontalSlider_4 = new QSlider(groupBox);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(10, 110, 211, 21));
        horizontalSlider_4->setMaximum(100);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        lcdNumber_9 = new QLCDNumber(groupBox);
        lcdNumber_9->setObjectName(QStringLiteral("lcdNumber_9"));
        lcdNumber_9->setGeometry(QRect(140, 130, 81, 21));
        lcdNumber_9->setFrameShadow(QFrame::Plain);
        lcdNumber_9->setDigitCount(7);
        lcdNumber_9->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_9->setProperty("value", QVariant(1));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 130, 101, 21));
        horizontalSlider_5 = new QSlider(groupBox);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(10, 150, 211, 21));
        horizontalSlider_5->setMinimum(1);
        horizontalSlider_5->setMaximum(100);
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        lcdNumber_10 = new QLCDNumber(groupBox);
        lcdNumber_10->setObjectName(QStringLiteral("lcdNumber_10"));
        lcdNumber_10->setGeometry(QRect(140, 170, 81, 21));
        lcdNumber_10->setFrameShadow(QFrame::Plain);
        lcdNumber_10->setDigitCount(7);
        lcdNumber_10->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_10->setProperty("value", QVariant(90));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 170, 101, 21));
        horizontalSlider_6 = new QSlider(groupBox);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setGeometry(QRect(10, 190, 211, 21));
        horizontalSlider_6->setMinimum(-90);
        horizontalSlider_6->setMaximum(90);
        horizontalSlider_6->setValue(90);
        horizontalSlider_6->setOrientation(Qt::Horizontal);
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 270, 171, 21));
        checkBox->setChecked(true);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 210, 111, 21));
        horizontalSlider_7 = new QSlider(groupBox);
        horizontalSlider_7->setObjectName(QStringLiteral("horizontalSlider_7"));
        horizontalSlider_7->setGeometry(QRect(10, 230, 211, 21));
        horizontalSlider_7->setMinimum(0);
        horizontalSlider_7->setMaximum(10);
        horizontalSlider_7->setValue(1);
        horizontalSlider_7->setOrientation(Qt::Horizontal);
        lcdNumber_11 = new QLCDNumber(groupBox);
        lcdNumber_11->setObjectName(QStringLiteral("lcdNumber_11"));
        lcdNumber_11->setGeometry(QRect(140, 210, 81, 21));
        lcdNumber_11->setFrameShadow(QFrame::Plain);
        lcdNumber_11->setDigitCount(7);
        lcdNumber_11->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_11->setProperty("value", QVariant(1));
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 250, 141, 21));
        checkBox_2->setChecked(true);
        lcdNumber_12 = new QLCDNumber(groupBox);
        lcdNumber_12->setObjectName(QStringLiteral("lcdNumber_12"));
        lcdNumber_12->setGeometry(QRect(140, 290, 81, 21));
        lcdNumber_12->setFrameShadow(QFrame::Plain);
        lcdNumber_12->setDigitCount(7);
        lcdNumber_12->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_12->setProperty("value", QVariant(1));
        horizontalSlider_8 = new QSlider(groupBox);
        horizontalSlider_8->setObjectName(QStringLiteral("horizontalSlider_8"));
        horizontalSlider_8->setGeometry(QRect(10, 310, 211, 21));
        horizontalSlider_8->setMinimum(0);
        horizontalSlider_8->setMaximum(10);
        horizontalSlider_8->setValue(1);
        horizontalSlider_8->setOrientation(Qt::Horizontal);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 290, 121, 21));

        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(239, 245));
        groupBox_2->setMaximumSize(QSize(239, 245));
        lcdNumber = new QLCDNumber(groupBox_2);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 20, 141, 31));
        lcdNumber->setFrameShadow(QFrame::Plain);
        lcdNumber->setDigitCount(12);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 70, 171, 21));
        horizontalSlider->setMaximum(200);
        horizontalSlider->setSingleStep(5);
        horizontalSlider->setValue(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 70, 31, 21));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 111, 16));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 91, 21));
        lcdNumber_2 = new QLCDNumber(groupBox_2);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(110, 100, 111, 20));
        lcdNumber_2->setFrameShadow(QFrame::Plain);
        lcdNumber_2->setSmallDecimalPoint(true);
        lcdNumber_2->setDigitCount(7);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 130, 91, 21));
        lcdNumber_3 = new QLCDNumber(groupBox_2);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(110, 130, 111, 20));
        lcdNumber_3->setFrameShadow(QFrame::Plain);
        lcdNumber_3->setSmallDecimalPoint(true);
        lcdNumber_3->setDigitCount(7);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 160, 91, 21));
        lcdNumber_4 = new QLCDNumber(groupBox_2);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(110, 160, 111, 20));
        lcdNumber_4->setFrameShadow(QFrame::Plain);
        lcdNumber_4->setSmallDecimalPoint(true);
        lcdNumber_4->setDigitCount(7);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 30, 47, 13));
        lcdNumber_5 = new QLCDNumber(groupBox_2);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setGeometry(QRect(110, 190, 111, 20));
        lcdNumber_5->setFrameShadow(QFrame::Plain);
        lcdNumber_5->setSmallDecimalPoint(true);
        lcdNumber_5->setDigitCount(7);
        lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 190, 91, 21));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 60, 211, 171));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Emblem_NSTU_orange_r.png")));
        label_8->setScaledContents(false);
        label_8->setAlignment(Qt::AlignCenter);
        label_8->setMargin(0);
        label_8->setIndent(-1);
        label_8->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 220, 81, 21));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 220, 81, 21));
        label_8->raise();
        lcdNumber->raise();
        horizontalSlider->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        lcdNumber_2->raise();
        label_4->raise();
        lcdNumber_3->raise();
        label_5->raise();
        lcdNumber_4->raise();
        label_6->raise();
        lcdNumber_5->raise();
        label_7->raise();
        pushButton->raise();
        pushButton_3->raise();

        verticalLayout_2->addWidget(groupBox_2);

        dockWidget->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget);

        menuBar->addAction(menu_2->menuAction());
        menu_2->addAction(action_6);
        menu_2->addAction(action_Qt);
        menu_2->addAction(action_QCustomPlot);
        menu_2->addAction(action_4);
        menu_2->addAction(action_5);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), lcdNumber_8, SLOT(display(int)));
        QObject::connect(horizontalSlider_5, SIGNAL(valueChanged(int)), lcdNumber_9, SLOT(display(int)));
        QObject::connect(horizontalSlider_6, SIGNAL(valueChanged(int)), lcdNumber_10, SLOT(display(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_7, SIGNAL(valueChanged(int)), lcdNumber_11, SLOT(display(int)));
        QObject::connect(horizontalSlider_8, SIGNAL(valueChanged(int)), lcdNumber_12, SLOT(display(int)));
        QObject::connect(checkBox_2, SIGNAL(toggled(bool)), horizontalSlider_5, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_2, SIGNAL(toggled(bool)), horizontalSlider_2, SLOT(setEnabled(bool)));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), horizontalSlider_8, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\244\320\270\320\267\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\274\320\260\321\217\321\202\320\275\320\270\320\272", 0));
        action_4->setText(QApplication::translate("MainWindow", "\320\236 \320\273\320\270\321\206\320\265\320\275\320\267\320\270\320\270", 0));
        action_5->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\270", 0));
        action_Qt->setText(QApplication::translate("MainWindow", "\320\236 Qt", 0));
        action_6->setText(QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\270", 0));
        action_QCustomPlot->setText(QApplication::translate("MainWindow", "\320\236 QCustomPlot", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", 0));
        label_9->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\264\320\270\321\203\321\201 \320\277\320\276\320\264\320\262\320\265\321\201\320\260", 0));
        label_10->setText(QApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 \320\275\320\270\321\202\320\270", 0));
        label_11->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\202\320\275\320\276\321\201\321\202\321\214 \320\275\320\270\321\202\320\270", 0));
        label_12->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\202\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\320\264\320\262\320\265\321\201\320\260", 0));
        label_13->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\320\276\320\275\320\265\320\275\320\270\320\265", 0));
        checkBox->setText(QApplication::translate("MainWindow", "\320\243\321\207\320\265\321\202 \320\262\321\217\320\267\320\272\320\276\320\263\320\276 \321\202\321\200\320\265\320\275\320\270\321\217", 0));
        label_14->setText(QApplication::translate("MainWindow", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \321\202\321\200\320\265\320\275\320\270\321\217", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\217\321\202\320\275\320\270\320\272 \321\201 \320\277\320\276\320\264\320\262\320\265\321\201\320\276\320\274", 0));
        label_15->setText(QApplication::translate("MainWindow", "\320\232-\321\215\321\204\321\204 \320\262\321\217\320\267\320\272\320\276\320\263\320\276 \321\202\321\200\320\265\320\275\320\270\321\217", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\270 \320\264\320\260\320\275\320\275\321\213\320\265", 0));
        label->setText(QApplication::translate("MainWindow", "100", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \321\215\320\274\321\203\320\273\321\217\321\206\320\270\320\270", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\255\320\275\320\265\321\200\320\263\320\270\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\273\320\276\320\262\320\260\321\217 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\220\320\274\320\277\320\273\320\270\321\202\321\203\320\264\320\260", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217", 0));
        label_7->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264", 0));
        label_8->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
