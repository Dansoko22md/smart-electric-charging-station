#ifndef SERVICEAGENTWINDOW_H
#define SERVICEAGENTWINDOW_H

#include <QMainWindow>

namespace Ui {
class ServiceAgentWindow;
}

class ServiceAgentWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ServiceAgentWindow(QWidget *parent = nullptr);
    ~ServiceAgentWindow();

private:
    Ui::ServiceAgentWindow *ui;
};

#endif // SERVICEAGENTWINDOW_H
