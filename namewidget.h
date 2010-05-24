#ifndef NAMEWIDGET_H
#define NAMEWIDGET_H

#include <QWidget>

namespace Ui {
    class NameWidget;
}

class NameWidget : public QWidget {
    Q_OBJECT
public:
    NameWidget(QWidget *parent = 0);
    ~NameWidget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::NameWidget *ui;
};

#endif // NAMEWIDGET_H
