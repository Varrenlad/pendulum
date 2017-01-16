#ifndef _RSCENE_H
#define _RSCENE_H
#include "globj.h"
#include "phyzxmodel.h"

//#include <iostream>
#include <QOpenGLWidget>
//Qt before 5.5? Never heard of
#include <QtOpenGL/QtOpenGL>
#include <QOpenGLFunctions_1_1>
#include <QOpenGLTexture>
#include <QOpenGLShaderProgram>
#include <QVector>
#include <QTextStream>
#include <QVector3D>
#include <QVector2D>
#include <ctime>

class Scene : public QOpenGLWidget, protected QOpenGLFunctions {
    Q_OBJECT

private:
    GLobj *lowershell, *plank, *shaft, *stand, *swing, *uppershell;

    GLfloat xRot;
    GLfloat yRot;
    GLfloat zRot;
    GLfloat zTra;
    GLfloat nSca;

    QPoint mousePoz;

    enum scaleDirection{PLUS, MINUS};
    enum rotateDirection{UP, DOWN, LEFT, RIGHT};
    enum translateDirection{FORWARDS, BACKWARDS};

    void Scale(scaleDirection);
    void Rotate(rotateDirection);
    void Translate(translateDirection);
    void Default();
    void LightUpdate();

    QOpenGLTexture *wood, *plastic, *metal;
    //QOpenGLShaderProgram *v_shader;
    //QOpenGLShaderProgram *f_shader;

    bool use_shaders = true;

    GLuint wood_id, plastic_id, metal_id;
	GLuint elementbuffer;

    time_t time;
    double dt;
    unsigned int cycles;
    Phyzxmodel *model;

    void RenderGLobj(GLobj &to_render);
    void createVBO(GLobj &to_load);
	void deleteVBO(GLobj &to_remove);

    //QVector<GLobj &> objects;
	void draw();
    void initializeGL() Q_DECL_OVERRIDE;
    void resizeGL(int, int) Q_DECL_OVERRIDE;
    void paintGL() Q_DECL_OVERRIDE;
    void teardownGL();
    void mousePressEvent(QMouseEvent* qme);
    void mouseMoveEvent(QMouseEvent* qme);
    void mouseReleaseEvent(QMouseEvent* qme);
    void wheelEvent(QWheelEvent* qwe);
    void keyPressEvent(QKeyEvent* qke);
    void timerEvent(QTimerEvent * qte); // обработка события таймера
public:
    explicit Scene(QWidget *parent = 0);
    void linkModel(Phyzxmodel *o_model);
    ~Scene();
signals:
    void updateModel(double time);
public slots:
    void rodReload(bool isBallUsed);
    void actionTime();
    void updateDraw();
};

#endif // RSCENE_H
