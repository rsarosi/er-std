#include "namewidget.h"
#include "ui_namewidget.h"

NameWidget::NameWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NameWidget)
{
    ui->setupUi(this);
}

NameWidget::~NameWidget()
{
    delete ui;
}

void NameWidget::changeEvent(QEvent *e)
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
