#ifndef MODIF_H
#define MODIF_H
#include <QDateTime>
#include <QFrame>
#include <QString>
#include "gestart.h"

namespace Ui {
class Modif;
}

class Modif : public QFrame
{
    Q_OBJECT

public:
    explicit Modif(QWidget *parent = nullptr );
    Modif(QString actuelQtt);
    void modifier(int index);
    void setQuantiteActuel(int qtt);
    void setNewQuantite(int newQtte);
    int getNewQuantite();
    int getQuantiteActuel();
    void setReference(QString refer);
    QString getReference();
    void setStocks(int stoc);
    void setPrix(int prixs);
    int getPrix();
    int valeurQtt();
    void setPageIndex(int index);
    int getPageIndex();
    int getStocks();

    ~Modif();

    QString getDesignations() ;
    void setDesignations(QString value);

    void modifier(int index, QString titre);
private slots:
    void on_annuler_clicked();

    void on_annul_qtt_clicked();

    void on_annul_modif_user_clicked();

    void on_valider_qt_clicked();

    void on_annuler_p_clicked();

    void on_valider_p_clicked();

    void on_valider_modif_user_clicked();

    void on_valider_clicked();

    void on_annulQt_clicked();

    void on_validQt_clicked();

    void on_annul_qtt_4_clicked();

    void on_valider_qt_4_clicked();

private:
    Ui::Modif *ui;
    QDateTime date;
    int oldQtt,newQtt,prix, stocks;
    QString reference,designations;
    int indexe;
    GestArt db;
};

#endif // MODIF_H
