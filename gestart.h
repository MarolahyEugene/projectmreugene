#ifndef GESTART_H
#define GESTART_H
#include <QSqlDatabase>
#include <QString>
#include <QSqlQuery>
#include <QDateTime>

class GestArt
{
public:
    GestArt();
    int valueTableProduits(QSqlDatabase champGestArt , QString colonneName ,QString donne , QString table);
    int valueQttProduits(QSqlDatabase champGestArt, QString colonneName, QString data);
    bool insertVenteProduits(QSqlDatabase champGestArt,QString ref,QString des,QString qtt,QString unit,QString px_unit,QString ptt);
    bool insertVenteTmp(QSqlDatabase champGestArt,QString ref,QString des,QString qtt,QString unit,QString px_unit,QString ptt);
    bool tableVide(QSqlDatabase champGestArt , QString colonneName , QString nameTable);
    bool connexionEstReucu(QSqlDatabase champGestArt );
    bool seLogin(QString users,QString pwd, QString table);
    void delets(QSqlDatabase bases, QString nomTable, QString colonneQtt);
    void delets(QSqlDatabase bases, QString nomTable, QString refColonne, QString dataColonne);
    bool dejaExist(QSqlDatabase bases,QString colonne1,QString colonne2,QString donnee1,QString donnee2,QString table);
    bool ajoutProduit(QSqlDatabase base, QString des, QString ref, int qtt, double px, QString unite);
    void misAjourTableVente( QSqlDatabase bases , QString nouveauQuantite, QString nouveauPrix, QString reperColonne );
    void misAjourTableVenteTmp(QSqlDatabase bases, QString nouveauQuantite, QString nouveauPrix, QString reperColonne);
    void misAjourTableProduits(QSqlDatabase bases , QString nouveauQuantite , QString referenceDeLigne);
    void misAjoursAllProduits(QSqlDatabase bases, QString ref,QString des,QString Qtt,QString prix,QString unite,QString rowReferer);
    void deletes(QSqlDatabase bases , QString nomTable , QString refColonne , QString valueDel );
    bool refExiste(QSqlDatabase bases,QString colonneRef,QString dataReference,QString table);
    void deleteAll(QSqlDatabase bases , QString nomTable);
    void elementRetirerDansLaBase(QSqlDatabase bases , QString colonneReferer , QString valeurReferer, QString nomTable);

    void insererUser(QSqlDatabase bases,QString nom,QString prenom,QString username, QString password);
    void mettreAjoursUser(QSqlDatabase bases,QString typSessions,QString nom,QString prenom,QString username, QString typeCompte,QString password);
    void mettreAjoursUser(QSqlDatabase bases,QString username, QString password);
    void supprimerUsers(QSqlDatabase bases,QString nomColonne,QString referenceColonne,QString table);

    QSqlQuery selectTable(QString nomTable);
    QString mitadyRefProduits(QSqlDatabase bases , QString colonne , QString dt);
    QString mitadyRefVentes(QSqlDatabase bases , QString colonne , QString dt);
    QString valeurEnBases(QSqlDatabase bases , QString colonne , QString datas, QString table);
    QString valeurRefererPts(QSqlDatabase bases , QString reference , QString valeur , QString data);
    QList<QString>* getColonneVente(QString referenceLigne);
    QList<QString>* getColonneProduits(QString referenceLigne);
    QSqlDatabase getBasedd();
    QSqlQuery execute(QSqlDatabase bases , QString maRequete);
    QString maka(QSqlDatabase bases, QString colonneRecuperer, QString colonneReferer, QString referenceData, QString table);
    QString valGestArt(QSqlDatabase bases, QString colonne1, QString colonne2, QString datas, QString table);
    QString parcourVentes(QSqlDatabase bases, QString colonneRecuperer, int compteur);
    QString mitadyRefVentesTmp(QSqlDatabase bases, QString colonneRecuperer, QString dt);
    QString parcourVentesTmp(QSqlDatabase bases, QString colonneRecuperer, QString reference);
    QString referenceVente(QSqlDatabase bases, QString colonneRecuperer, QString dt);

    QString typeSession(QString users, QString pwd, QString table);
    void setIdSessions(QString id);
    QString getIdSessions();
    QString getTypSession();
    void setTypSession(QString value);

    QString recuperUser(QSqlDatabase bases, QString colonneRecuperer, QString dt);
    void misAjoursAdmin(QSqlDatabase bases);
    QString getNomSession();
    void setNomSession(QString value);

    GestArt(QString driver, QString filename);
    QString idClients(QSqlDatabase bases, QString idClient, QString nomClient, QString adressClient);
private:
    QSqlDatabase basedd;
    QDateTime date;
    QString driver,filename,idSession,typSession,nomSession;
};

#endif // GESTART_H
