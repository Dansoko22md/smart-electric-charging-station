#ifndef PROFILEDIALOG_H
#define PROFILEDIALOG_H
#include "employe.h"
#include <QApplication>

class ProfileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProfileDialog(QWidget *parent = nullptr);
    void setEmployeeId(const QString& id); // Fonction pour définir l'ID de l'employé

private:
    QString m_employeeId; // Membre de données pour stocker l'ID de l'employé
    // ... autres membres et fonctions privées ...

};

void ProfileDialog::setEmployeeId(const QString& id)
{
    m_employeeId = id;
}

#endif // PROFILEDIALOG_H
