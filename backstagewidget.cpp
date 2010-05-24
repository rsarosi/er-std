#include "backstagewidget.h"
#include "ui_backstagewidget.h"

BackStageWidget::BackStageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BackStageWidget)
{
    ui->setupUi(this);
}

BackStageWidget::~BackStageWidget()
{
    delete ui;
}

void BackStageWidget::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
