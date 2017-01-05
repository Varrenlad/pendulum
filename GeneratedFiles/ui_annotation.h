/********************************************************************************
** Form generated from reading UI file 'annotation.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNOTATION_H
#define UI_ANNOTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Annotation
{
public:
    QLabel *label;

    void setupUi(QFrame *Annotation)
    {
        if (Annotation->objectName().isEmpty())
            Annotation->setObjectName(QStringLiteral("Annotation"));
        Annotation->resize(640, 480);
        Annotation->setMinimumSize(QSize(640, 480));
        Annotation->setMaximumSize(QSize(640, 480));
        Annotation->setFrameShape(QFrame::StyledPanel);
        Annotation->setFrameShadow(QFrame::Raised);
        label = new QLabel(Annotation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 641, 481));
        label->setPixmap(QPixmap(QString::fromUtf8(":/splash/splash.png")));
        label->setScaledContents(false);

        retranslateUi(Annotation);

        QMetaObject::connectSlotsByName(Annotation);
    } // setupUi

    void retranslateUi(QFrame *Annotation)
    {
        Annotation->setWindowTitle(QApplication::translate("Annotation", "\320\230\320\274\321\217 \320\273\320\260\320\261\320\276\321\200\320\260\321\202\320\276\321\200\320\275\320\276\320\271", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Annotation: public Ui_Annotation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNOTATION_H
