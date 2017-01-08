#include "qsceneembedded.h"
#include "ui_qsceneembedded.h"

QSceneEmbedded::QSceneEmbedded(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QSceneEmbedded)
{
    ui->setupUi(this);
}

QSceneEmbedded::~QSceneEmbedded()
{
    delete ui;
}
