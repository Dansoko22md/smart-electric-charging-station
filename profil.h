#ifndef PROFIL_H
#define PROFIL_H

#include <QDialog>
#include "employe.h"
namespace Ui {
class Profil;
}

class Profil : public QDialog
{
    Q_OBJECT

public:
    explicit Profil(QWidget *parent = nullptr);
    ~Profil();
 void setStatusLabelText(const QString& text);
private:
    Ui::Profil *ui;
    Employe E;
};

#endif // PROFIL_H
