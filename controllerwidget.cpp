#include "controllerwidget.h"
#include "ui_controllerwidget.h"

ControllerWidget::ControllerWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ControllerWidget)
{
    ui->setupUi(this);
    showFullScreen();
}

ControllerWidget::~ControllerWidget()
{
    delete ui;
}

void ControllerWidget::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
