#ifndef _RSCENE_H
#define _RSCENE_H
#include "globj.h"

enum scaleDirection{PLUS, MINUS};
enum rotateDirection{UP, DOWN, LEFT, RIGHT};
enum translateDirection{FORWARDS, BACKWARDS};

#include <iostream>
#include <QOpenGLWidget>
#include <QtOpenGL/QtOpenGL>
#include <qopenglfunctions.h>
#include <QtDataVisualization/Q3DObject>
#include <QVector>
#include <QTextStream>
#include <QVector3D>
#include <QVector2D>

class Scene : public QOpenGLWidget, protected QOpenGLFunctions {
    Q_OBJECT

private:
   // GLobj pendulum, ball, rod;

    GLfloat xRot;
    GLfloat yRot;
    GLfloat zRot;
    GLfloat zTra;
    GLfloat nSca;

    QPoint mousePoz;
    void Scale(scaleDirection);
    void Rotate(rotateDirection);
    void Translate(translateDirection);
    void Default();
    void LightUpdate();

    //QVector<GLobj &> objects;

//protected:
	void draw();
    void initializeGL() Q_DECL_OVERRIDE;
    void resizeGL(int, int) Q_DECL_OVERRIDE;
    void paintGL() Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent* qme);
    void mouseMoveEvent(QMouseEvent* qme);
    void mouseReleaseEvent(QMouseEvent* qme);
    void wheelEvent(QWheelEvent* qwe);
    void keyPressEvent(QKeyEvent* qke);
    void timerEvent(QTimerEvent * qte); // обработка события таймера

public:
    explicit Scene(QWidget *parent = 0);

signals:

public slots:
    void ActionTime();
};

#endif // RSCENE_H
