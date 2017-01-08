#ifndef QSCENEEMBEDDED_H
#define QSCENEEMBEDDED_H

#include <QWidget>

namespace Ui {
class QSceneEmbedded;
}

class QSceneEmbedded : public QWidget
{
    Q_OBJECT

public:
    explicit QSceneEmbedded(QWidget *parent = 0);
    ~QSceneEmbedded();

private:
    Ui::QSceneEmbedded *ui;
};

#endif // QSCENEEMBEDDED_H
