#include "gestart.h"
#include <QSqlQuery>
#include <QDebug>
#include <QApplication>
#include <QString>
#include <QMessageBox>
GestArt::GestArt()
{

}
GestArt::GestArt(QString driver, QString filename)
{
    this->driver = driver;
    this->filename = filename;

}
/**
 * @brief GestArt::insertVenteProduits
 * @param champGestArt Base de donnée
 * @param ref Colonne reference
 * @param des Colonne Designation
 * @param qtt Colonne Quantite
 * @param unit Colonne unité ( unité de mesure pour les produits
 * @param px_unit Colonne pour le prix unitaire
 * @param ptt Colonne pour la somme des prix pour chacun de produit vendu
 * @return Retourne vrai si ça se passe bien la requete d'insertion et fausse sinon .
 */

bool GestArt::insertVenteProduits(QSqlDatabase champGestArt, QString ref, QString des, QString qtt, QString unit, QString px_unit, QString ptt)
{
    bool insertion = false;
    QSqlQuery req(champGestArt);

    QString insert ="insert into detailVente(id_vente,reference_p,designation,quantite,unite,prix_unitaire,prix_total) values((select id_vente from vente order by id_vente desc limit 1),'"+ref+
    "','"+des+"','"+qtt+"','"+unit+"','"+px_unit+"','"+ptt+"')";

    if (connexionEstReucu(getBasedd())) {
        req.prepare(insert);
        if(req.exec()){
            insertion = true ;
            qDebug()<<"\n -> : ... Insertion dans la liste vente avec succè ...\n";
        }else {
            insertion = false ;
            qDebug()<<"\n -> : ... Il y a une erreur lors d'insertion dans la table vente ...\n";
        }
    } else {
        qDebug()<<"\n -> : ... Echec de connexion ...\n";
    }

    return  insertion;
}

bool GestArt::insertVenteTmp(QSqlDatabase champGestArt, QString ref, QString des, QString qtt, QString unit, QString px_unit, QString ptt)
{
    bool insertion = false;
    QSqlQuery req(champGestArt);

    QString insert ="insert into venteTmp(id_vente,reference,designation,quantite,unite,prix_unitaire,prix_total) values((select id_vente from vente order by id_vente desc limit 1),'"+ref+
    "','"+des+"','"+qtt+"','"+unit+"','"+px_unit+"','"+ptt+"')";

    if (connexionEstReucu(getBasedd())) {
        req.prepare(insert);
        if(req.exec()){
            insertion = true ;
            qDebug()<<"\n -> : ... Insertion dans la liste vente avec succè ...\n";
        }else {
            insertion = false ;
            qDebug()<<"\n -> : ... Il y a une erreur lors d'insertion dans la table vente ...\n";
        }
    } else {
        qDebug()<<"\n -> : ... Echec de connexion ...\n";
    }

    return  insertion;
}

bool GestArt :: seLogin(QString users,QString pwd, QString table){
    bool log = false;
    QString typSession;

    QString nom,pass,types,id;
    QString requet = "SELECT id_user,username,password,typeCompte FROM "+table+" WHERE username='"+users+"' AND password='"+pwd+"'";

    if (connexionEstReucu(getBasedd())) {
        QSqlQuery req(getBasedd());
        if (req.exec(requet)) {
            while (req.next()) {

                id = req.value(0).toString();
                nom = req.value(1).toString();
                pass = req.value(2).toString();
                types = req.value(3).toString();
             }
            qDebug()<<id+" | "+nom+" | "+pass+" | "+types;

             if (users == nom && pwd == pass) {
                setTypSession(types);
                setIdSessions(id);
                setNomSession(nom);
                log = true;
             } else {
                 typSession ="";
                 setIdSessions("");
                 setNomSession("");
                 log = false;
             }
          } else {
            qDebug() << "Requete pour se login est interrompus.";
        }
     } else {
        qDebug()<< "Echec de connexion a la base de donnee ."<<"\n";
   }
  getBasedd().close();
    return log;
}
QString GestArt :: typeSession(QString users,QString pwd, QString table){

    QString typSession;
    QSqlQuery req(getBasedd());
    QString nom,pass,types,id;
    QString requet = "SELECT id_ser,username,password,typeCompte FROM "+table+" WHERE username='"+users+"' AND password='"+pwd+"'";

    if (connexionEstReucu(getBasedd())) {
        if (req.exec(requet)) {
            while (req.next()) {
                id = req.value(0).toString();
                nom = req.value(1).toString();
                pass = req.value(2).toString();
                types = req.value(3).toString();
             }
             if (users == nom && pwd == pass) {
                typSession = types;
                setIdSessions(id);
             } else {
                 typSession ="";
             }
          } else {
            qDebug() << "Requete pour se login est interrompus.";
        }
     } else {
        qDebug()<< "Echec de connexion a la base de donnee ."<<"\n";
   }
    getBasedd().close();
    return typSession;
}



bool GestArt :: tableVide(QSqlDatabase champGestArt , QString colonneName , QString nameTable){
    bool test = false;

    QSqlQuery req(champGestArt);
    QString requete = "SELECT COUNT("+colonneName+") AS row FROM "+nameTable+"";
    int compteur = 0 ;

    if (connexionEstReucu(champGestArt)) {
        if (req.exec(requete)) {
            while (req.next()) {
               compteur = req.value(0).toInt();
            }
            if (compteur == 0) {
                test = true;
            } else {
                test = false;
            }
        }
    } else {
        qDebug() << " Driver non rechargée ... ";
    }
    return test;
}

bool GestArt :: connexionEstReucu(QSqlDatabase champGestArt ){
    bool connexions = false;
        if (champGestArt.open()) {
           connexions = true;
        } else {
            qDebug() <<"\t Pas de connexion disponible ";
            connexions =false;
        }
    return connexions;
}

QSqlDatabase GestArt ::getBasedd(){

    if(!this->basedd.isOpen()){
        this->basedd = QSqlDatabase::addDatabase(driver);
        this->basedd.setDatabaseName(QApplication::applicationDirPath()+ this->filename);
        this->basedd.setConnectOptions();
    }
    return this->basedd;
}

QSqlQuery GestArt::execute(QSqlDatabase bases , QString maRequete)
{
    QSqlQuery query(bases);
    if (connexionEstReucu(getBasedd())) {
        query.prepare(maRequete);
        if(query.exec()){
            qDebug()<<"\n -> : ... Execution de la requete avec succè ...\n";
        }else {
            qDebug()<<"\n -> : ... Il y a une erreur lors d'execution ...\n";
        }
    } else {
        qDebug()<<"\n -> : ... Echec de connexion ...\n";
    }


    return query;
}

int GestArt::valueTableProduits(QSqlDatabase champGestArt, QString colonneName,QString donne,QString table)
{
    int compteur = 0 ;
    QSqlQuery req(champGestArt);
    QString requet = "SELECT "+colonneName+" FROM "+table+" WHERE "+colonneName+"='"+donne+"'";
    if (connexionEstReucu(champGestArt)) {
        if (req.exec(requet)) {
            while (req.next()) {
               compteur += req.value(0).toInt();
            }
        }else {
            qDebug() << " Valeur dans la Table non trouvée ... ";
        }
    } else {
        qDebug() << " Driver non rechargée ... ";
    }
    return compteur;
}

int GestArt::valueQttProduits(QSqlDatabase champGestArt, QString colonneName,QString data)
{
    int compteur = 0 ;
    QSqlQuery req(champGestArt);
    QString requet = "SELECT "+colonneName+" FROM produits WHERE reference='"+data+"'";
    if (connexionEstReucu(champGestArt)) {
        if (req.exec(requet)) {
            while (req.next()) {
               compteur += req.value(0).toInt();
            }
        }else {
            qDebug() << " Valeur dans la Table Produits non trouvée ... ";
        }
    } else {
        qDebug() << " Driver non rechargée ... ";
    }
    return compteur;
}

bool GestArt::dejaExist(QSqlDatabase bases, QString colonne1, QString colonne2, QString donnee1,QString donnee2, QString table)
{
    bool existe = false;
    QString requet = "SELECT COUNT("+colonne1+") AS qtte FROM "+table+" WHERE "+colonne1+"='"+donnee1+"' OR "+colonne2+"='"+donnee2+"'";
    int row = 0 ;
    QSqlQuery req(bases);

    if (connexionEstReucu(bases)) {
        if (req.exec(requet)) {
            while (req.next()) {
               row = req.value(0).toInt();
            }
            if (row > 0) {
                existe = true;
            } else {
                existe = false;
            }
        }
    } else {
        qDebug() << " Driver non rechargée ... ";
    }
    return existe;
}

QString GestArt::valeurEnBases(QSqlDatabase bases, QString colonne, QString datas,QString table)
{
    QString ref;
    QString req = "select "+colonne+" from "+table+" where "+colonne+" ='"+datas+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+datas+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return ref;
}

QString GestArt::valGestArt(QSqlDatabase bases, QString colonne1, QString colonne2, QString datas,QString table)
{
    QString ref;
    QString req = "select "+colonne1+" from "+table+" where "+colonne2+" ='"+datas+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+datas+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return ref;
}

QString GestArt::idClients(QSqlDatabase bases, QString idClient, QString nomClient, QString adressClient)
{
    QString ref;
    QString req = "select "+idClient+" from client where nom_client='"+nomClient+"' and adresse_client='"+adressClient+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+nomClient+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return ref;
}

QString GestArt::valeurRefererPts(QSqlDatabase bases, QString recuperer,QString ref, QString data)
{
    QString reference;
    QString req = "select "+recuperer+","+ref+" from produits where "+ref+" ='"+data+"'";
  //  QSqlQuery query(bases);

    if (connexionEstReucu(bases)) {
        this->execute(getBasedd(),req);

        if (execute(getBasedd(),req).next()) {
            reference = execute(getBasedd(),req).value(0).toString();
        } else {
            qDebug()<<"Requete for "+data+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return reference;
}


void GestArt::misAjourTableVente(QSqlDatabase bases , QString nouveauQuantite, QString nouveauPrix, QString reperColonne )
{
    QString updt ="update detailVente set quantite='"+nouveauQuantite+"',prix_total='"+nouveauPrix+"' where reference_p='"+reperColonne+"'";
    QSqlQuery req(bases);
    if (connexionEstReucu(bases)) {
        req.prepare(updt);
        if (req.exec()) {
            qDebug()<<" -> Mis a jours avec succè ...";
        } else {
            qDebug()<<" -> Echec de mise a jours dans la table Vente ...";
            QMessageBox::warning(nullptr,"Echec mis a jours","Echec de mis a jours dans la table vente !");
        }
    } else {
        qDebug()<<"\n -> Echec de connexion à la base pour la mise a jours dans la table Vente ...\n";
        QMessageBox::warning(nullptr,"Echec mis a jours","Echec de connexion à la base pour la mise a jours dans la table Vente  !");
    }
}

void GestArt::misAjourTableVenteTmp(QSqlDatabase bases , QString nouveauQuantite, QString nouveauPrix, QString reperColonne )
{
    QString updt ="update venteTmp set quantite='"+nouveauQuantite+"',prix_total='"+nouveauPrix+"' where reference='"+reperColonne+"'";
    QSqlQuery req(bases);
    if (connexionEstReucu(bases)) {
        req.prepare(updt);
        if (req.exec()) {
            qDebug()<<" -> Mis a jours avec succè ...";
        } else {
            qDebug()<<" -> Echec de mise a jours dans la table Vente ...";
            QMessageBox::warning(nullptr,"Echec mis a jours","Echec de mis a jours dans la table vente !");
        }
    } else {
        qDebug()<<"\n -> Echec de connexion à la base pour la mise a jours dans la table Vente ...\n";
        QMessageBox::warning(nullptr,"Echec mis a jours","Echec de connexion à la base pour la mise a jours dans la table Vente  !");
    }
}

void GestArt::misAjourTableProduits(QSqlDatabase bases , QString nouveauQuantite , QString referenceDeLigne)
{
    QString ajours = "update produits set quantite='"+nouveauQuantite+"' where reference='"+referenceDeLigne+"'";
    QSqlQuery req(bases);
    if (connexionEstReucu(bases)) {
        if ( mitadyRefProduits(bases,"quantite",referenceDeLigne).toInt() == 0 ) {
            deletes(bases,"produits","reference",referenceDeLigne);
        } else {
            req.prepare(ajours);
            if (req.exec()) {
                qDebug()<<" -> La table produits est a jours avec succè !";
            } else {
                qDebug()<<"Echec de mis a jours de la table produits !";
                QMessageBox::warning(nullptr,"Echec mis a jours","Echec de mis a jours de la table produits !");
            }
        }
    } else {
        qDebug()<<"\n -> Echec de connexion à la base pour la mise a jours dans la table Produits ...\n";
        QMessageBox::warning(nullptr,"Echec mis a jours","Echec de connexion à la base pour la mise a jours dans la table Produits !");
    }

}

void GestArt::misAjoursAllProduits(QSqlDatabase bases , QString ref,QString des,QString Qtt,QString prix,QString unite,QString rowRef)
{
    QString updt ="update produits set reference='"+ref+"',designation='"+des+"',quantite='"+Qtt+"',prix_unit='"+prix+"',unite='"+unite+"' where reference='"+rowRef+"'";

    if (connexionEstReucu(bases)) {
        QSqlQuery requete(bases);
        if (requete.exec(updt)) {
            qDebug()<<"\n -> : La mis a jours de la lable Produits est reuçu avec succè ...\n";
        } else {
            qDebug()<<"Echec de mis a jours dans la table produits !";
            QMessageBox::warning(nullptr,"Echec de mis à jours","Echec de mis à jours dans la table produits !");
        }
    } else {
    }
}

void GestArt::deletes(QSqlDatabase bases , QString nomTable , QString refColonne , QString valueDel)
{
    QString del = "delete from "+nomTable+" where quantite='0' or "+refColonne+"='"+valueDel+"'";
    QSqlQuery requete(bases);
    requete.prepare(del);
    if (connexionEstReucu(bases)) {
        requete.prepare(del);
        if (requete.exec()) {
            qDebug()<<"\n -> : La suppression de lable "+nomTable+" est reuçu avec succè ...\n";
        } else {
            qDebug()<<"Echec de suppression dans la table produits !";
            QMessageBox::warning(nullptr,"Echec de suppression","Echec de suppression dans la table "+nomTable+" !");
        }
    } else {
    }
}

void GestArt::delets(QSqlDatabase bases , QString nomTable , QString colonneQtt)
{
    QString del = "delete from "+nomTable+" where "+colonneQtt+"='0'";
    QSqlQuery requete(bases);
    requete.prepare(del);
    if (connexionEstReucu(bases)) {
        requete.prepare(del);
        if (requete.exec()) {
            qDebug()<<"\n -> : La suppression de lable "+nomTable+" est reuçu avec succè ...\n";
        } else {
            qDebug()<<"Echec de suppression dans la table produits !";
            QMessageBox::warning(nullptr,"Echec de suppression","Echec de suppression dans la table "+nomTable+" !");
        }
    } else {
    }
}
void GestArt::delets(QSqlDatabase bases , QString nomTable , QString refColonne,QString dataColonne)
{
    QString del = "delete from "+nomTable+" where "+refColonne+"='"+dataColonne+"'";
    QSqlQuery requete(bases);
    requete.prepare(del);
    if (connexionEstReucu(bases)) {
        requete.prepare(del);
        if (requete.exec()) {
            qDebug()<<"\n -> : La suppression de lable "+nomTable+" est reuçu avec succè ...\n";
        } else {
            qDebug()<<"Echec de suppression dans la table produits !";
            QMessageBox::warning(nullptr,"Echec de suppression","Echec de suppression dans la table "+nomTable+" !");
        }
    } else {
    }
}

bool GestArt::refExiste(QSqlDatabase bases, QString colonneRef, QString dataReference, QString table)
{
    bool existe = false ;
    QString requet = "SELECT COUNT("+colonneRef+") AS qtte FROM "+table+" WHERE "+colonneRef+"='"+dataReference+"'";
    int row = 0 ;
    QSqlQuery req(bases);
    if (connexionEstReucu(bases)) {
        if (req.exec(requet)) {
            while (req.next()) {
               row = req.value(0).toInt();
            }
            if (row > 0) {
                existe = true;
            } else {
                existe = false;
            }
        }
    } else {
        qDebug() << " Driver non rechargée ... ";
    }
    return  existe ;
}

void GestArt::deleteAll(QSqlDatabase bases , QString nomTable)
{
    QString del = "delete from "+nomTable+" ";
    execute(getBasedd(),del);
    QSqlQuery requete(bases);
    if (connexionEstReucu(bases)) {
        requete.prepare(del);
        if (requete.exec()) {
            qDebug()<<"\n -> : La suppression de lable "+nomTable+" set reuçu avec succè ...\n";
        } else {
            qDebug()<<"Echec de suppression dans la table produits !";
            QMessageBox::warning(nullptr,"Echec de suppression","Echec de suppression dans la table "+nomTable+" !");
        }
    } else {
    }

}

void GestArt::elementRetirerDansLaBase(QSqlDatabase bases, QString colonneReferer, QString valeurReferer, QString nomTable)
{
    QSqlQuery req(bases);
    QString del = "delete * from "+nomTable+" where "+colonneReferer+"='"+valeurReferer+"'";
    req.prepare(del);
    if (req.exec()) {
        qDebug()<<"Suppression pour la colonne "+colonneReferer+" = "+valeurReferer+" est avec succè !";
    } else {
        qDebug()<<"Echec de suppression dans la table "+nomTable+" !";
        QMessageBox::warning(nullptr,"Echec de suppression","Echec de suppression dans la table "+nomTable+" !");
    }
}
void GestArt::setIdSessions(QString id){
    idSession = id;
}
QString GestArt::getIdSessions(){
    return idSession;
}

QString GestArt::getTypSession()
{
    return typSession;
}

void GestArt::setTypSession(QString value)
{
    typSession = value;
}
void GestArt::mettreAjoursUser(QSqlDatabase bases,QString typSessions,QString nom,QString prenom,QString username,QString typeCompte,QString password)
{
    QSqlQuery req(bases);
    QString seltUser = "select * from comptUser id_user='"+getIdSessions()+"'";
    QString updat = "update comptUser set nom='"+nom+"',prenom='"+prenom+"',username='"+username+"',typeCompt='"+typeCompte+"',password='"+password+"'";
    if (connexionEstReucu(bases)) {
        if (typeCompte == "Amdinistrateur" && typSessions == "Amdinistrateur") {
            int confirmation = QMessageBox::question(nullptr,"Confirmation d'accèe","Voulez-vous vraiment changer cet utilisateur au type d'administrateur ?","Non","Oui");
            if (confirmation == 0) {

            } else if(confirmation == 1){
                if (req.exec(updat)) {
                    QMessageBox::information(nullptr,"Mis a jours reuçu","Compte est a jours avec succè !");
                } else {
                    QMessageBox::information(nullptr,"Echec de mis a jours","Echec de mis a jours !");
                }
            }else {

            }
        } else {

        }
    } else {
    }
}

void GestArt::misAjoursAdmin(QSqlDatabase bases){
    QString updt = "update comptUser set typeCompte='Utilisateur' where typeCompte='Administrateur'";
    if (connexionEstReucu(bases)) {
        QSqlQuery req(bases);
        if (req.exec(updt)) {
        } else {
            qDebug()<<"\n -> Echec de mis a jour de type compte Administrateur !";
        }
    } else {
    }
}

QString GestArt::getNomSession()
{
    return nomSession;
}

void GestArt::setNomSession(QString value)
{
    nomSession = value;
}

QSqlQuery GestArt::selectTable(QString nomTable)
{
    QString select = "selecte * from "+nomTable+" ";
    return execute(getBasedd(),select);
}

QString GestArt::mitadyRefProduits(QSqlDatabase bases, QString colonneRecuperer, QString dt)
{
    QString ref;
    QString req = "select "+colonneRecuperer+" from produits where id_produit='"+dt+"' or reference='"+dt+"' or designation='"+dt+"' or quantite='"+dt+"' or prix_unit='"+dt+"' or unite='"+dt+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+colonneRecuperer+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return ref;
}

QString GestArt::referenceVente(QSqlDatabase bases, QString colonneRecuperer, QString dt)
{
    QString ref;
    QString req = "select "+colonneRecuperer+" from vente where id_vente='"+dt+"' or nomClient='"+dt+"' or id_client='"+dt+"' or facture='"+dt+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+colonneRecuperer+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return ref;
}

QString GestArt::recuperUser(QSqlDatabase bases, QString colonneRecuperer, QString dt)
{
    QString ref;
    QString req = "select "+colonneRecuperer+" from comptUser where id_user='"+dt+"' or nom='"+dt+"' or prenom='"+dt+"' or username='"+dt+"' or typeCompte='"+dt+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+colonneRecuperer+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return ref;
}

QString GestArt::mitadyRefVentes(QSqlDatabase bases, QString colonneRecuperer, QString dt)
{
    QString ref;
    QString req = "select "+colonneRecuperer+" from detailVente where id_vente='"+dt+"' or reference_p='"+dt+"' or designation='"+dt+"' or quantite='"+dt+"' or prix_unitaire='"+dt+"' or unite='"+dt+"' or prix_total='"+dt+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+colonneRecuperer+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return ref;
}
QString GestArt::mitadyRefVentesTmp(QSqlDatabase bases, QString colonneRecuperer, QString dt)
{
    QString ref;
    QString req = "select "+colonneRecuperer+" from venteTmp where id_vente='"+dt+"' or reference='"+dt+"' or designation='"+dt+"' or quantite='"+dt+"' or prix_unitaire='"+dt+"' or unite='"+dt+"' or prix_total='"+dt+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+colonneRecuperer+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return ref;
}

QString GestArt::parcourVentes(QSqlDatabase bases, QString colonneRecuperer, int compteur)
{
    QString ref,rows;
    rows.setNum(compteur);

    QString req = "select "+colonneRecuperer+" from detailVente where id_vente='"+rows+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+colonneRecuperer+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return ref;
}

QString GestArt::parcourVentesTmp(QSqlDatabase bases, QString colonneRecuperer, QString reference)
{
    QString ref;

    QString req = "select "+colonneRecuperer+" from venteTmp where reference='"+reference+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+colonneRecuperer+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    return ref;
}

QString GestArt::maka(QSqlDatabase bases, QString colonneRecuperer , QString colonneReferer , QString referenceData , QString table)
{
    QString ref;
    QString req = "select "+colonneRecuperer+" from "+table+" where "+colonneReferer+"='"+referenceData+"'";
    QSqlQuery query(bases);
    if (connexionEstReucu(bases)) {
        query.prepare(req);
        if (query.exec()) {
            while (query.next()) {
               ref = query.value(0).toString();
            }
        } else {
            qDebug()<<"Requete for "+colonneRecuperer+" is not loaded ...";
        }
    } else {
        qDebug()<<"Data base not connected for reference ...";
    }
    bases.close();
    return ref;
}

bool GestArt::ajoutProduit(QSqlDatabase base,QString des, QString ref, int qtt, double px, QString unite ){
    bool ajoutee = false;
    QString ad,updt;
    QSqlQuery requete (base);
    QString q,p;
    QString dess,reff;
    int qts;
    if (connexionEstReucu(base) == true) {
        date = QDateTime::currentDateTime();

       if (dejaExist(base,"designation","reference",des,ref,"produits")) {
           dess = valGestArt(base,"designation","reference",ref,"produits");
           reff = valGestArt(base,"reference","reference",ref,"produits");
           if ( des == dess && ref == reff ) {
               qts = qtt + valueQttProduits(getBasedd(),"quantite",ref);
               q.setNum(qts);
               p.setNum(px);
               updt = "UPDATE produits SET quantite ='"+q+"',datModif ='"+date.toString("dd MMM yyyy h : m : s")+"' WHERE reference='"+ref+"'";
               requete.prepare(updt);
               if (requete.exec()) {
                   qDebug()<<"Data base Updated ...";
                   ajoutee = true ;
               } else {
                   ajoutee = false ;
                   qDebug()<<"Requte Update non chargee !";
                }
           } else {
               if (ref != reff && des == dess) {
                   qDebug()<<des+" est referé par =>"+valeurRefererPts(base,"reference","designation",des);
               }else if (ref == reff && des != dess ) {
                  qDebug()<<ref+" est utilisé par le produits =>"+valeurRefererPts(base,"designation","reference",ref);
               }
           }
        } else {
           q.setNum(qtt);
           p.setNum(px);
           ad = "INSERT INTO produits(reference,designation,quantite,prix_unit,unite,datInsert,datModif)  VALUES('"+ref+"','"+des+"','"+q+"','"+p+"','"+unite+"','"+date.toString("dd MMM yyyy")+"','"+date.toString("dd MMM yyyy h : m : s")+"')";
           if (requete.exec(ad)) {
               ajoutee = true ;
           } else {
               ajoutee = false ;
               qDebug()<<"Requte d'insertion non chargee !";
           }
        }
    } else {
        qDebug()<<"Echec de connexion\n";
    }
    return ajoutee;
}
