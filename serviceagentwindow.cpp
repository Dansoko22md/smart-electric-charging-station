#include "serviceagentwindow.h"
#include "ui_serviceagentwindow.h"

ServiceAgentWindow::ServiceAgentWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ServiceAgentWindow)
{
    ui->setupUi(this);
}

ServiceAgentWindow::~ServiceAgentWindow()
{
    delete ui;
}
