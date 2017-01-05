/*#include "globj.h"

GLobj::GLobj(QString filename) {
    meshFilename = filename;
    QString texturename;
    QVector3D temp3;
    QVector2D temp2;
    if (!filename.isEmpty()){
        QFile file(filename);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream fileCont(&file);
            while (!fileCont.atEnd()){
                QString fileLine = fileCont.readLine();
                if (fileLine.startsWith("vn ")){
                    QStringList lineToken = fileLine.split(" ");
                    temp3.setX(lineToken[1].toFloat());
                    temp3.setY(lineToken[2].toFloat());
                    temp3.setZ(lineToken[3].toFloat());
                    Normales.push_back(temp3);
                }
                else if(fileLine.startsWith("vt ")){
                    QStringList lineToken = fileLine.split(" ");
                    temp2.setX(lineToken[1].toFloat());
                    temp2.setY(lineToken[2].toFloat());
                    UVs.push_back(temp2);
                }
                else if (fileLine.startsWith("v ")){
                    QStringList lineToken = fileLine.split(" ");
                    temp3.setX(lineToken[1].toFloat());
                    temp3.setY(lineToken[2].toFloat());
                    temp3.setZ(lineToken[3].toFloat());
                    Vertices.push_back(temp3);
                }
                else if (fileLine.startsWith("f ")){
                    QStringList lineToken = fileLine.split(" ");
                    Face *F = new Face;
                    for (size_t i = 0; i <= 3; i++){
                        QStringList args = lineToken[i].split("/");
                        F->v[i-1] = Vertices[args[0].toInt()-1];
                        F->t[i-1] = UVs[args[1].toInt()-1];
                        F->n[i-1] = Normales[args[2].toInt()-1];
                    }
                    Faces.push_back(*F);
                }
                else if(fileLine.startsWith("mtlib ")){
                    QStringList lineToken = fileLine.split(" ");
                    texturename = lineToken[1];
                }
            }
        }
        file.close();
        QFileInfo fi(meshFilename);
        QString baseName = fi.fileName();
        QString fn(filename);
        fn.remove(fn.size() - baseName.size(), baseName.size());
        LoadMTL(fn, fn + texturename);
    }
}

void GLobj::Render()
{
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable( GL_TEXTURE_2D );
    glBindTexture(GL_TEXTURE_2D, texture);
    glPushMatrix();
        glBegin(GL_TRIANGLES);
        for(int i = 0; i < Faces.size(); i++)
        {
            for(int j = 0; j < 3; j++)
            {
                glNormal3f(Faces[i].n[j].x(), Faces[i].n[j].y(), Faces[i].n[j].z());
                glTexCoord2f(Faces[i].t[j].x(), Faces[i].t[j].y());
                glVertex3f(Faces[i].v[j].x(), Faces[i].v[j].y(), Faces[i].v[j].z());
            }
        }
        glEnd();
    glPopMatrix();
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_LIGHTING);
    glDisable(GL_LIGHT0);
}

void GLobj::LoadMTL(QString fn, QString MTLname)
{
    if(!MTLname.isEmpty())
    {
        QFile file(MTLname);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream fileText(&file);
            while (!fileText.atEnd())
            {
                QString fileLine = fileText.readLine();
                if(fileLine.startsWith("map_Kd "))
                {
                    QStringList lineList = fileLine.split(" ");
					textureFilename = fn + lineList[1];
                    LoadTexture();
                }
            }
        }
        file.close();
    }
}

void GLobj::LoadTexture()
{
    if (textureFilename.isEmpty())
        throw EXCEPTION_NONCONTINUABLE;

	textureImage = QImage(textureFilename);
	textureImage = QGLWidget::convertToGLFormat(textureImage);
    glGenTextures( 1, &texture );
    glBindTexture( GL_TEXTURE_2D, texture );

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, textureImage.width(), textureImage.height(), 0, GL_RGBA,
                 GL_UNSIGNED_BYTE, textureImage.bits());
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
    glBindTexture( GL_TEXTURE_2D, 0 );
}*/