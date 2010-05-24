#include "stageselectorwidget.h"
#include "ui_stageselectorwidget.h"

StageSelectorWidget::StageSelectorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageSelectorWidget)
{
    ui->setupUi(this);
}

StageSelectorWidget::~StageSelectorWidget()
{
    delete ui;
}

void StageSelectorWidget::changeEvent(QEvent *e)
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
