#ifdef GLOBJ_H
#define GLOBJ_H

#include <QMainWindow>
#include <QWidget>
#include <QOpenGLWidget>
#include <QtOpenGL/QtOpenGL>
#include <QtDataVisualization/Q3DObject>
#include <QVector>
#include <QTextStream>
#include <QVector3D>
#include <QVector2D>

struct Face {
    QVector<QVector3D> v;
    QVector<QVector3D> n;
    QVector<QVector2D> t;
    Face(){
        v.resize(3);
        n.resize(3);
        t.resize(3);
    }
};

//Wavefront .obj parser
class GLobj : public QtDataVisualization::Q3DObject {
public:
    GLobj();
    GLobj(QString filename);
    void Render();
    void LoadMesh(QString filename);
    void TextureSwitch(); //drops texture drawing to save load
private:
    bool flagTexture = 1;
    QString meshFilename;
    QString textureFilename;
    QVector<QVector3D> Vertices;
    QVector<QVector3D> Normales;
    QVector<QVector2D> UVs;
    QVector<Face> Faces;
    GLuint texture;
    QImage textureImage;
    void LoadMTL(QString filename, QString MTLname);
    void LoadTexture();
};

#endif // GLOBJ_H
