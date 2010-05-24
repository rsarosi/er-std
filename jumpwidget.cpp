#include "jumpwidget.h"
#include "ui_jumpwidget.h"

JumpWidget::JumpWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JumpWidget)
{
    ui->setupUi(this);
}

JumpWidget::~JumpWidget()
{
    delete ui;
}

void JumpWidget::changeEvent(QEvent *e)
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
