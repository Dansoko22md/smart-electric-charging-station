#include "mainwindow.h"
#include "formulaire.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Connection c;
    bool test = c.createConnection();

    if (!test)
    {
        QMessageBox::critical(nullptr, QObject::tr("Database is not open"),
            QObject::tr("Connection failed.\nClick Cancel to exit."), QMessageBox::Cancel);
        return 1;
    }

    Formulaire f;
    MainWindow w;

    QObject::connect(&f, &Formulaire::employeIdentifie, [&f, &w](){
        f.close();
        w.show();
    });

    f.show();
     w.show();


    return a.exec();
}
