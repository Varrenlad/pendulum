#ifndef WSCENE_H
#define WSCENE_H

#include <QWidget>

namespace Ui {
class WScene;
}

class WScene : public QWidget
{
    Q_OBJECT

public:
    explicit WScene(QWidget *parent = 0);
    ~WScene();

private:
    Ui::WScene *ui;
};

#endif // WSCENE_H
