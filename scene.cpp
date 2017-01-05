#include "scene.h"

int iFPS = 60;
GLfloat light_ambient[] = {0.3f, 0.3f, 0.3f, 0.0f};
GLfloat light_diffuse[] = {0.5f, 0.5f, 0.5f, 0.0f};
GLfloat light_position[] = {0.5f, 0.0f, 0.5f, 0.0f};

Scene::Scene(QWidget *parent){
    Default();
}

void Scene::ActionTime(){
    //IMPLEMENT ME
}

void Scene::timerEvent(QTimerEvent *qte) {
	updateBehavior();
}

void Scene::initializeGL(){
    initializeOpenGLFunctions();
    glClearColor(1, 1, 1, 1);
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_FLAT);
    glEnable(GL_CULL_FACE);
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    try {
        //pendulum.LoadMesh("pendulum.obj");
        //ball.LoadMesh(ball.obj);
        //rod.LoadMesh(rod.obj);
    }
    catch (int e){
        if (e == EXCEPTION_NONCONTINUABLE){
            std::cerr << "Foiled to open obj, sry";
            exit(100500);
        }
    }
    glLightfv(GL_LIGHT1, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT1, GL_POSITION, light_position);
    glEnable(GL_LIGHTING);
    glEnable (GL_LIGHT1);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_MULTISAMPLE);

}

void Scene::resizeGL(int nWidth, int nHeight) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    GLfloat ratio=(GLfloat)nHeight/(GLfloat)nWidth;
    if (nWidth>=nHeight)
        glOrtho(-1.0/ratio, 1.0/ratio, -1.0, 1.0, -10.0, 30.0);
    else
        glOrtho(-1.0, 1.0, -1.0*ratio, 1.0*ratio, -10.0, 30.0);

    glViewport(0, 0,(GLint)nWidth, (GLint)nHeight);
}

void Scene::paintGL() {
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     glMatrixMode(GL_MODELVIEW);
     glLoadIdentity();
     glScalef(nSca, nSca, nSca);
     glTranslatef(0.0f, zTra, 0.0f);
     glRotatef(xRot, 1.0f, 0.0f, 0.0f);
     glRotatef(yRot, 0.0f, 1.0f, 0.0f);
     glRotatef(zRot, 0.0f, 0.0f, 1.0f);
     glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
     glTranslatef(0.0f, 0.75f, 0.0f);
    // pendulum.Render();
	 draw();
}

void Scene::mousePressEvent(QMouseEvent *qme){
    mousePoz = qme->pos();
}

void Scene::mouseReleaseEvent(QMouseEvent *qme){
	updateBehavior();
}

void Scene::wheelEvent(QWheelEvent *qwe){
    if (qwe->delta() > 0)
        Scale(PLUS);
    else if (qwe->delta() < 0)
        Scale(MINUS);

	updateBehavior();
}

void Scene::keyPressEvent(QKeyEvent *qke){
    switch(qke->key()){
    case Qt::Key_Plus:
        Scale(PLUS);
        break;
    case Qt::Key_Minus:
        Scale(MINUS);
        break;
    case Qt::Key_Up:
        Rotate(UP);
        break;
    case Qt::Key_Down:
        Rotate(DOWN);
        break;
    case Qt::Key_Left:
        Rotate(LEFT);
        break;
    case Qt::Key_Right:
        Rotate(RIGHT);
        break;
    case Qt::Key_Space:
        Default();
        break;
    case Qt::Key_Escape:
        this->close();
        break;
    }
	updateBehavior();
}

void Scene::Scale(scaleDirection direction){
    switch (direction){
    case PLUS:
        if(nSca < 2.5f){
            nSca *= 1.1f;
            LightUpdate();
        }
        break;
    case MINUS:
        if(nSca > 0.1f){
            nSca /= 1.1f;
            LightUpdate();
        }
        break;
    }
}

void Scene::Rotate(rotateDirection direction){
    switch (direction){
    case UP:
        xRot += 1.0f;
        break;
    case DOWN:
        xRot -=1.0f;
        break;
    case LEFT:
        zRot += 1.0f;
        break;
    case RIGHT:
        zRot -= 1.0f;
        break;
    }
}

void Scene::Translate(translateDirection direction){
    switch(direction){
    case FORWARDS:
        zTra += 0.05f;
        break;
    case BACKWARDS:
        zTra -= 0.05f;
        break;
    }
}

void Scene::Default(){
    xRot = -85.0f;
    yRot = 0.0f;
    zRot = 90.0f;
    zTra = 0.0f;
    nSca = 0.5f;
    LightUpdate();
}

void Scene::LightUpdate(){
    GLfloat light_diffuse_new[] =
    {
        light_diffuse[0] * 2.0f * nSca,
        light_diffuse[1] * 2.0f * nSca,
        light_diffuse[2] * 2.0f * nSca,
        light_diffuse[3]
    };
    glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse_new);
}
 
void Scene::draw() {
	glBegin(GL_QUADS);
	glNormal3f(0, 0, -1);
	glVertex3f(-1, -1, 0);
	glVertex3f(-1, 1, 0);
	glVertex3f(1, 1, 0);
	glVertex3f(1, -1, 0);
	glEnd();
	glBegin(GL_TRIANGLES);
	glNormal3f(0, -1, 0.707);
	glVertex3f(-1, -1, 0);
	glVertex3f(1, -1, 0);
	glVertex3f(0, 0, 1.2);
	glEnd();
	glBegin(GL_TRIANGLES);
	glNormal3f(1, 0, 0.707);
	glVertex3f(1, -1, 0);
	glVertex3f(1, 1, 0);
	glVertex3f(0, 0, 1.2);
	glEnd();
	glBegin(GL_TRIANGLES);
	glNormal3f(0, 1, 0.707);
	glVertex3f(1, 1, 0);
	glVertex3f(-1, 1, 0);
	glVertex3f(0, 0, 1.2);
	glEnd();
	glBegin(GL_TRIANGLES);
	glNormal3f(-1, 0, 0.707);
	glVertex3f(-1, 1, 0);
	glVertex3f(-1, -1, 0);
	glVertex3f(0, 0, 1.2);
	glEnd();
}


void Scene::mouseMoveEvent(QMouseEvent* pe) {
	xRot += 180 / 1.5*(GLfloat)(pe->y() - mousePoz.y()) / height();
	zRot += 180 / 1.5*(GLfloat)(pe->x() - mousePoz.x()) / width();
	mousePoz = pe->pos();
	updateBehavior();
}