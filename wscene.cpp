#include "wscene.h"
#include "ui_wscene.h"

WScene::WScene(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WScene)
{
    ui->setupUi(this);
}

WScene::~WScene()
{
    delete ui;
}
