#include "statistique.h"
#include "ui_statistique.h"
#include <QSqlQuery>
#include <QPainter>
#include <QRectF>
#include <QStaticText>
Statistique::Statistique(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Statistique)
{
    ui->setupUi(this);
}

Statistique::~Statistique()
{
    delete ui;
}

void Statistique::paintEvent(QPaintEvent *)
{
    int nbA = 0;
    int nbB = 0;
    int nbC = 0;

    QSqlQuery A("SELECT * FROM services where type like 'lavage'");
    while (A.next()) {
        nbA++;
    }

    QSqlQuery B("SELECT * FROM services where type like 'batterie'");
    while (B.next()) {
        nbB++;
    }

    QSqlQuery C("SELECT * FROM services where type like 'equipement'");
    while (C.next()) {
        nbC++;
    }

    float nb = nbA + nbB + nbC;
    float s1 = nbA * 100;
    float s2 = nbB * 100;

    float xA;
    xA = s1 / nb;
    float xB;
    xB = s2 / nb;
    float y, m, z;
    y = (xA * 360) / 100;
    m = (xB * 360) / 100;
    z = 360 - (y + m);

    QPainter painter(this);
    QRectF size = QRectF(0, 0, this->width() - 50, this->height() - 50);
    painter.translate(10, 10);
    painter.setRenderHint(QPainter::Antialiasing);

    float chartWidth = qMin(size.width(), size.height());
    QRectF chartRect = QRectF(size.center() - QPointF(chartWidth / 2, chartWidth / 2), QSizeF(chartWidth, chartWidth));

    // couleurs
    QColor greenColor("#4CAF50"); // vert
    QColor pinkColor("#E91E63"); // rose
    QColor turquoiseColor("#0097A7"); // turquoise
    QColor lightYellowColor("#FFF59D"); // jaune clair

    painter.setBrush(greenColor);
    painter.drawPie(chartRect, 0, 16 * y * chartWidth / 360);

    painter.setBrush(pinkColor);
    painter.drawPie(chartRect, 16 * y * chartWidth / 360, 16 * m * chartWidth / 360);

    painter.setBrush(turquoiseColor);
    painter.drawPie(chartRect, 16 * (m + y) * chartWidth / 360, 16 * z * chartWidth / 360);

    // légende


    // texte explicatif
    QRectF textRect = QRectF(chartRect.topRight() + QPointF(10, 10), QSizeF(size.width() - chartRect.width() - 30, chartRect.height()));
    painter.setFont(QFont("Arial", this->width() / 80));
    painter.drawText(textRect, "Répartition :\n\n- lavage : vert\n- batterie : rose\n- équipement : turquoise");

    }
