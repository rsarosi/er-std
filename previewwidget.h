#ifndef PREVIEWWIDGET_H
#define PREVIEWWIDGET_H

#include <QWidget>

namespace Ui {
    class PreviewWidget;
}

class PreviewWidget : public QWidget {
    Q_OBJECT
public:
    PreviewWidget(QWidget *parent = 0);
    ~PreviewWidget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::PreviewWidget *ui;
};

#endif // PREVIEWWIDGET_H
