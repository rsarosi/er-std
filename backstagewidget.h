#ifndef BACKSTAGEWIDGET_H
#define BACKSTAGEWIDGET_H

#include <QWidget>

namespace Ui {
    class BackStageWidget;
}

class BackStageWidget : public QWidget {
    Q_OBJECT
public:
    BackStageWidget(QWidget *parent = 0);
    ~BackStageWidget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::BackStageWidget *ui;
};

#endif // BACKSTAGEWIDGET_H
