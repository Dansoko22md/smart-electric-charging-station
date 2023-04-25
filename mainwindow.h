#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include"employe.h"
#include "arduino.h"
#include <QMainWindow>
#include <QCryptographicHash>
//*********************
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
//****offre
#include <QFileDialog>
#include <QMainWindow>
#include "offre.h"
#include <QVBoxLayout>
#include "statistique.h"
#include "video.h"

#include <QPixmap>
#include<iostream>
#include <QPainter>
#include <QFileDialog>
#include <QPdfWriter>
#include <QTextDocument>
#include <QSqlRecord>
#include <QTextDocument>
#include <QPdfWriter>

#include <QSqlRecord>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include <QPrinter>
#include <QPrintDialog>

#include <camera.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_AJOUTER_clicked();

    void on_pushButton_employe_clicked();

    void on_pushButton_home_clicked();


    void on_pushButton_login_clicked();

    void on_pushButton_signup_clicked();


    void on_pushButton_load_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_supprimer_clicked();

    void on_pushButton_modifier_clicked();

    void on_pushButton_annuler_clicked();

    void on_pushButton_chercherE_clicked();

    void on_pushButton_triA_clicked();

    void on_pushButton_triD_clicked();

    void on_pushButton_profile_clicked();

    void on_pushButton_logout_clicked();

    void makePlot();
    void makePlot_second();
    void makeTableView();


    void on_pushButton_capture_st_clicked();

    void on_pushButton_PDF_clicked();

    void on_pushButton_service_clicked();

    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    QString on_pb_image_clicked();

    void on_pb_modifier_clicked();

    void on_on_pushButton_pdf_clicked();



    void on_pb_camera_clicked();



    void on_pushButton_menu_gerer_clicked();

    void on_pushButton_menu_consulter_clicked();

    void on_pushButton_menu_stat_clicked();

    void on_pushButton_retour_clicked();

    void on_pb_chercher_code_clicked();

    void on_pb_chercher_prix_clicked();

    void on_pb_chercher_type_clicked();

    void on_pb_stat_clicked();

    void on_pushButton_retour_2_clicked();

    void on_pushButton_retour_3_clicked();

    void on_pb_trier_prix_clicked();

    void on_pb_trier_code_clicked();

    void on_pb_trier_type_clicked();

    void on_pb_video_clicked();

    void on_pushButton_station_clicked();
    void chartPie();
private:
    Ui::MainWindow *ui;
    bool checked=false;
    Employe Etmp;
    //
    QByteArray data;
    Arduino A;
    //
    offre o;
        Statistique *statistique;
        Camera *camera;
        video *Video;
};
#endif // MAINWINDOW_H
