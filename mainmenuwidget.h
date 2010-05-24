#ifndef MAINMENUWIDGET_H
#define MAINMENUWIDGET_H

#include <QWidget>

namespace Ui {
    class MainMenuWidget;
}

class MainMenuWidget : public QWidget {
    Q_OBJECT
public:
    MainMenuWidget(QWidget *parent = 0);
    ~MainMenuWidget();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainMenuWidget *ui;
};

#endif // MAINMENUWIDGET_H
