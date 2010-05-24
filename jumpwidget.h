#ifndef JUMPWIDGET_H
#define JUMPWIDGET_H

#include <QWidget>

namespace Ui {
    class JumpWidget;
}

class JumpWidget : public QWidget {
    Q_OBJECT
public:
    JumpWidget(QWidget *parent = 0);
    ~JumpWidget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::JumpWidget *ui;
};

#endif // JUMPWIDGET_H
