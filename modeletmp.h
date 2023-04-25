#ifndef MODELETMP_H
#define MODELETMP_H

#include <QWidget>      // pour les classes héritant de QWidget
#include <QMainWindow>  // pour les classes héritant de QMainWindow
#include <QApplication> // pour la classe QApplication
#include <QPushButton>  // pour la classe QPushButton
#include <QLabel>       // pour la classe QLabel
#include <QLineEdit>    // pour la classe QLineEdit
#include <QTableView>   // pour la classe QTableView
#include <QStandardItemModel> // pour la classe QStandardItemModel
#include <QMessageBox>  // pour la classe QMessageBox
#include <QString>      // pour la classe QString
#include <QVector>      // pour la classe QVector
#include <QModelIndex>  // pour la classe QModelIndex
#include "mainwindow.h"
class Etmp {
public:
    Etmp(const QString& nom, const QString& valeur) :
        nom(nom), valeur(valeur) {}

    QString nom;
    QString valeur;
};

class ModelEtmp : public QAbstractTableModel {
public:
    ModelEtmp(QObject* parent = nullptr) : QAbstractTableModel(parent) {}

    int rowCount(const QModelIndex& parent = QModelIndex()) const override {
        Q_UNUSED(parent);
        return m_data.size();
    }

    int columnCount(const QModelIndex& parent = QModelIndex()) const override {
        Q_UNUSED(parent);
        return 2;
    }

    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override {
        if(!index.isValid())
            return QVariant();

        if(role == Qt::DisplayRole) {
            if(index.column() == 0)
                return m_data.at(index.row()).nom;
            else if(index.column() == 1)
                return m_data.at(index.row()).valeur;
        }

        return QVariant();
    }

    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override {
        if(role == Qt::DisplayRole) {
            if(orientation == Qt::Horizontal) {
                if(section == 0)
                    return tr("Nom");
                else if(section == 1)
                    return tr("Valeur");
            } else if(orientation == Qt::Vertical) {
                return QString::number(section + 1);
            }
        }

        return QVariant();
    }

    void setData(const QVector<Etmp>& data) {
        m_data = data;
    }

    ModelEtmp* rechercher(const QString& clef) {
        QVector<Etmp> result;
        for(const Etmp& etmp : m_data) {
            if(etmp.nom == clef)
                result.append(etmp);
        }

        if(result.isEmpty())
            return nullptr;

        ModelEtmp* model = new ModelEtmp();
        model->setData(result);
        return model;
    }

private:
    QVector<Etmp> m_data;
};

#endif // MODELETMP_H
