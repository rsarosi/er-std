#ifndef PLEASEWAITWIDGET_H
#define PLEASEWAITWIDGET_H

#include <QWidget>

namespace Ui {
    class PleaseWaitWidget;
}

class PleaseWaitWidget : public QWidget {
    Q_OBJECT
public:
    PleaseWaitWidget(QWidget *parent = 0);
    ~PleaseWaitWidget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::PleaseWaitWidget *ui;
};

#endif // PLEASEWAITWIDGET_H
