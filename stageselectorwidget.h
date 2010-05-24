#ifndef STAGESELECTORWIDGET_H
#define STAGESELECTORWIDGET_H

#include <QWidget>

namespace Ui {
    class StageSelectorWidget;
}

class StageSelectorWidget : public QWidget {
    Q_OBJECT
public:
    StageSelectorWidget(QWidget *parent = 0);
    ~StageSelectorWidget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::StageSelectorWidget *ui;
};

#endif // STAGESELECTORWIDGET_H
