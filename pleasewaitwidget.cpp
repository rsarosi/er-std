#include "pleasewaitwidget.h"
#include "ui_pleasewaitwidget.h"

PleaseWaitWidget::PleaseWaitWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PleaseWaitWidget)
{
    ui->setupUi(this);
}

PleaseWaitWidget::~PleaseWaitWidget()
{
    delete ui;
}

void PleaseWaitWidget::changeEvent(QEvent *e)
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
