#include "annotation.h"
#include "ui_annotation.h"

Annotation::Annotation(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Annotation)
{
    ui->setupUi(this);
    connect(ui->label, SIGNAL(destroyed()), SLOT(close()));
    //старт по центру
    QPoint center = QApplication::desktop()->availableGeometry().center();
    center.setX(center.x() - this->width() / 2);
    center.setY(center.y() - this->height() / 2);
    if(center.x() > 0 || center.y() > 0)
        this->move(center);
    //или в точке 0, 0
    else this->move(QApplication::desktop()->availableGeometry().topLeft());
}

Annotation::~Annotation(){
    delete ui;
}

void Annotation::timerEvent(QTimerEvent *ev){
    static uint32_t i = 0;
    ++i;
    if (is_key_down || i == 500000 || !this->isVisible()){
        this->hide();
        killTimer(ev->timerId());
    }
    else if (!this->isActiveWindow()){
        this->activateWindow();
    }
}

void Annotation::keyPressEvent(QKeyEvent *){
    is_key_down = true;
}

void Annotation::mousePressEvent(QMouseEvent *){
    is_key_down = true;
}
