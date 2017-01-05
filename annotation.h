#ifndef ANNOTATION_H
#define ANNOTATION_H

#include <QFrame>
#include <QApplication>
#include <QDesktopWidget>
#include <QPoint>

namespace Ui {
class Annotation;
}

class Annotation : public QFrame
{
    Q_OBJECT

public:
    explicit Annotation(QWidget *parent = 0);
    bool is_key_down = false;
    ~Annotation();
private:
    void Annotation::mousePressEvent(QMouseEvent *ev);
    void timerEvent(QTimerEvent *ev);
    void keyPressEvent(QKeyEvent *ev);
    Ui::Annotation *ui;
};

#endif // ANNOTATION_H
