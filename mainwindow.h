#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include "gestart.h"
#include "modif.h"
#include <QSqlQueryModel>
#include<QTableView>
#include <QDateTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setLigneP(QString row);
    void setLigneV(QString row);
    void setQtt(int qtt);
    int getQtt();
    void actualisation();
    void setPages(int index);
    void selectPages(int indexPage);
    void setIdCl(QString idC);
    void setIdVte(int idV);
    int getIdVte();
    QString getIdCl();
    int getPages();
    void infoClient( QString nomClt , QString adresClt , QString telClt , QString factur );
    QString getP();
    QString getV();
    ~MainWindow();

    void actualiserdetailVente();
    void actualiserListeVente();
    void actualiserStock();
    void actualiserVtmp();
    QString getListV();
    void setListV(QString value);

    void voirDetailVente(QString idClient);
    void actualiserProduits();
    void afficheFactureVente();
    QString getLigneP();

    bool getSession() const;
    void setSession(bool value);
    void rechercheArticle( QString types , QString data );
    void rechercheStock(QTableView *tableau,QString types, QString data);
    void actualiserArticles(QTableView *tableau, QString table);
    QString getClikP() const;
    void setClikP(const QString &value);

    QString getClikV() const;
    void setClikV(const QString &value);

    QString getUsers();
    void setUsers(QString value);

    void actualiserUsers();
    QString getRech() const;
    void setRech(const QString &value);

    QString getNewQttV() const;
    void setNewQttV(const QString &value);

    QString getNewPxV() const;
    void setNewPxV(const QString &value);

    QString getNewQttP() const;
    void setNewQttP(const QString &value);

    void infoFacture(QString nomClt, QString adresClt, QString telClt, QString factur);
    int getFacture();
    void setFacture(int value);

private slots:
    void on_actionExit_triggered();
    void on_actionProduits_triggered();
    void on_actionAchat_triggered();
    void on_actionVente_de_produits_triggered();
    void on_actualiser_clicked();
    void on_listeProduits_clicked(const QModelIndex &index); 
    void on_listeVente_clicked(const QModelIndex &index);
    void on_actionCompte_user_triggered();
    void on_modifier_clicked();
    void on_ajoutV_clicked();
    void on_retirerP_clicked();
    void on_actionAccueil_triggered();
    void on_annulV_clicked();
    void on_modifP_clicked();
    void on_actionListe_des_produits_triggered();
    void on_ajoutArticle_clicked();
    void on_mdifierArticle_clicked();
    void on_retourneAccueil_clicked();
    void on_stocks_clicked(const QModelIndex &index);
    void on_actualiserArticle_clicked();    
    void on_rechercher_clicked();
    void on_supprimerArticle_clicked();
    void on_cancel_Client_clicked();
    void on_suivant_clicked();
    void on_validerV_clicked();
    void on_actionProduit_vendu_triggered();
    void on_accuel_clicked();
    void on_detailAccueil_clicked();
    void on_detail_clicked();
    void on_detailFermer_clicked();
    void on_imprimer_clicked();
    void on_tableListeVente_clicked(const QModelIndex &index);
    void on_annulConnection_clicked();

    void on_seConnecter_clicked();

    void on_actionDeconnexion_triggered();

    void on_actionSe_connecte_triggered();

    void on_seConnecters_clicked();

    void on_recherchers_clicked();

    void on_deconnexion_clicked();

    void on_listVente_clicked();

    void on_adVente_clicked();

    void on_newUser_clicked();

    void on_newProduits_clicked();
    void on_actualiserArt_clicked();

    void on_tableStock_clicked(const QModelIndex &index);

    void on_tableV_clicked(const QModelIndex &index);

    void on_supp_clicked();

    void on_actionModification_d_un_compte_triggered();

    void on_annul_modif_user_clicked();

    void on_tableUser_clicked(const QModelIndex &index);

    void on_modifUser_clicked();

    void on_validUser_clicked();

    void on_actualisers_clicked();

    void on_recherche_textChanged(const QString &arg1);

    void on_modif_clicked();

    void on_supUser_clicked();

    void on_returnAccueil_clicked();

    void on_annulUser_clicked();

    void on_listeUsers_clicked();

    void on_recherch_textChanged(const QString &arg1);

    void on_clientList_currentTextChanged(const QString &arg1);

    void on_nomClient_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    QSqlQueryModel * mod_vente , * mod_produits , * mod_venteTmp ,*detailVte,*listVte;
    QString rech , ligneP , ligneV , listV , clikP , clikV , users , idClt , newQttV , newPxV , newQttP;
    QDateTime date;
    int quantt , indexPage , idVte , facture;
    bool session;
    GestArt *db;
    Modif *md;
};

#endif // MAINWINDOW_H
