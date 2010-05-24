#ifndef CONTROLLERWIDGET_H
#define CONTROLLERWIDGET_H

#include <QMainWindow>

namespace Ui {
    class ControllerWidget;
}

class ControllerWidget : public QMainWindow {
    Q_OBJECT
public:
    ControllerWidget(QWidget *parent = 0);
    ~ControllerWidget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ControllerWidget *ui;
};

#endif // CONTROLLERWIDGET_H
