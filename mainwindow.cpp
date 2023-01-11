#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gestart.h"
#include "modif.h"
#include <QMessageBox>
#include<QTableView>
#include <QDateTime>
#include <QSqlQuery>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) , ui(new Ui::MainWindow){

    ui->setupUi(this);

    this->db = new GestArt("QSQLITE","/gestart.db");
    this->md = new Modif();
    this->session = false;

    ui->typeArcticle->addItem("reference");
    ui->typeArcticle->addItem("designation");
    ui->typeArcticle->addItem("quantite");
    ui->typeArcticle->addItem("unite");

    ui->typeCompte->addItem("");
    ui->typeCompte->addItem("Administrateur");
    ui->typeCompte->addItem("Utilisateur");

    ui->typeTab->addItem("reference");
    ui->typeTab->addItem("designation");
    ui->typeTab->addItem("quantite");
    ui->typeTab->addItem("unite");

    ui->unites->addItem("");
    ui->unites->addItem("kg");
    ui->unites->addItem("litre");
    ui->unites->addItem("sac");
    ui->unites->addItem("carton");
    ui->unites->addItem("m");
    ui->unites->addItem("tige");

    ui->pages->setCurrentIndex(8);
}

void MainWindow::setLigneP(QString row)
{
    ligneP = row;
}

QString MainWindow::getP()
{
    return ligneP;
}

void MainWindow::setLigneV(QString row)
{
    ligneV = row;
}

void MainWindow::setQtt(int qtt)
{
    this->quantt = qtt ;
}

int MainWindow::getQtt()
{
    return  this->quantt ;
}
void MainWindow::actualiserdetailVente(){
    QString detailVente = "select * from detailVente where id_vente =(select id_vente from vente order by id_vente desc limit 1)";
    detailVte = new QSqlQueryModel();
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery query(db->getBasedd());
        if (query.exec(detailVente)) {
            detailVte->setQuery(query);
            ui->detailVente->setModel(detailVte);
        } else {
        }
    } else {
    }
}

void MainWindow::afficheFactureVente(){
    QString detailVente = "select reference_p,designation,quantite,unite,prix_unitaire,prix_total from detailVente where id_vente =(select id_vente from vente order by id_vente desc limit 1)";
    detailVte = new QSqlQueryModel();
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery query(db->getBasedd());
        if (query.exec(detailVente)) {
            detailVte->setQuery(query);
            ui->tableVente->setModel(detailVte);
        } else {
        }
    } else {
    }
}

void MainWindow::voirDetailVente(QString idClient){
    QString detailVente = "select reference_p,designation,quantite,unite,prix_unitaire,prix_total from detailVente where id_vente ='"+idClient+"'";
    detailVte = new QSqlQueryModel();
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery query(db->getBasedd());
        if (query.exec(detailVente)) {
            detailVte->setQuery(query);
            ui->detailVente->setModel(detailVte);
        } else {
        }
    } else {
    }
}
void MainWindow::actualiserListeVente(){
    QString listeVentes = "select * from vente ";
    listVte = new QSqlQueryModel();
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery query(db->getBasedd());
        if (query.exec(listeVentes)) {
            listVte->setQuery(query);
            ui->tableListeVente->setModel(listVte);
        } else {
        }
    } else {
    }
}

void MainWindow::actualiserStock(){
    QString selectStock = "select * from produits ";
    QSqlQueryModel *mod_stock = new QSqlQueryModel();
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery query(db->getBasedd());
        if (query.exec(selectStock)) {
            mod_stock->setQuery(query);
            ui->stocks->setModel(mod_stock);
        } else {
        }
    } else {
    }
}
void MainWindow::actualiserArticles(QTableView *tableau, QString table){
    QString selectStock = "select * from "+table+" ";
    QSqlQueryModel *modes = new QSqlQueryModel();
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery query(db->getBasedd());
        if (query.exec(selectStock)) {
            modes->setQuery(query);
            tableau->setModel(modes);
        } else {
        }
    } else {
    }
}

void MainWindow::actualiserVtmp(){
    QString ventetmp = "select * from venteTmp";
    QSqlQueryModel *mod_venteTmp = new QSqlQueryModel();
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery query(db->getBasedd());
        if (query.exec(ventetmp)) {
            mod_venteTmp->setQuery(query);
            ui->listeVente->setModel(mod_venteTmp);
        } else {
        }
    } else {
    }
}

void MainWindow::actualiserProduits(){
    QString ventetmp = "select * from produits";
    QString delet = "delete from produits where quantite ='0'";
    QSqlQueryModel *mod_produits = new QSqlQueryModel();
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery query(db->getBasedd());
        if (query.exec(delet)){

        } else {
        }
        if (query.exec(ventetmp)) {
            mod_produits->setQuery(query);
            ui->listeProduits->setModel(mod_produits);
        } else {
        }
    } else {
    }
}

void MainWindow::actualiserUsers(){
    QString ventetmp = "select id_user,nom,prenom,username,typeCompte,datMisAjours from comptUser";
    QSqlQueryModel *userMod = new QSqlQueryModel();
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery query(db->getBasedd());
        if (query.exec(ventetmp)) {
            userMod->setQuery(query);
            ui->tableUser->setModel(userMod);
        } else {
        }
    } else {
    }
}

void MainWindow::actualisation()
{
    QString produits = "select * from produits";
    QString detailVente = "select * from detailVente where id_vente =(select id_vente from vente order by id_vente desc limit 1)";
    QString ventetmp = "select * from venteTmp";
    QString delet = "delete from produits where quantite ='0'";

    mod_produits = new QSqlQueryModel();
    mod_vente = new QSqlQueryModel();
    mod_venteTmp = new QSqlQueryModel();

    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery query(db->getBasedd());
        if (query.exec(delet)){

        } else {
        }
        query.exec(produits);
        mod_produits->setQuery(query);
        ui->listeProduits->setModel(mod_produits);

        query.exec(detailVente);
        mod_vente->setQuery(query);
        ui->tableVente->setModel(mod_vente);

        query.exec(ventetmp);
        mod_venteTmp->setQuery(query);
        ui->listeVente->setModel(mod_venteTmp);

    } else {
    }
    db->getBasedd().close();
}

void MainWindow::setPages(int index)
{
    this->indexPage = index;
}

void MainWindow::selectPages(int indexPage)
{
    ui->pages->setCurrentIndex(indexPage);
}

void MainWindow::setIdCl(QString idC)
{
    this->idClt = idC ;
}

void MainWindow::setIdVte(int idV)
{
    this->idVte = idV ;
}

int MainWindow::getIdVte()
{
    return  this->idVte;
}

QString MainWindow::getIdCl()
{
    return this->idClt;
}

int MainWindow::getPages()
{
    return this->indexPage;
}

void MainWindow::infoClient( QString nomClt , QString adresClt , QString telClt , QString factur )
{
    ui->nomLabel->setText(nomClt);
    ui->adresLabel->setText(adresClt);
    ui->telLabel->setText(telClt);
    ui->facture->setText(factur);
}
void MainWindow::infoFacture( QString nomClt , QString adresClt , QString telClt , QString factur )
{
    ui->nomCl->setText(nomClt);
    ui->adressCl->setText(adresClt);
    ui->telCl->setText(telClt);
    ui->factureCl->setText(factur);
}

QString MainWindow::getV()
{
    return ligneV;
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_actionExit_triggered(){
    this->close();
}

void MainWindow::on_actionProduits_triggered(){
    if (getSession() == false) {
        QMessageBox::critical(this,"Accèe refusée ","Vous devez se connecter !");
    } else {
        md->modifier(4);
        md->show();
    }
}

void MainWindow::on_actionAchat_triggered(){

}

void MainWindow::on_actionVente_de_produits_triggered()
{
    if (getSession() == false) {
        QMessageBox::critical(this,"Accèe refusée ","Vous devez se connecter !");
    } else {
        QString labFacture , fact = " select id_vente as facture from vente order by id_vente desc limit 1";
        int facture = 0;
        if (db->connexionEstReucu(db->getBasedd())) {
            QSqlQuery req(db->getBasedd());
            if (req.exec(fact)) {
                while (req.next()) {
                    facture += req.value(0).toInt();
                }
            } else {
            }
            facture += 1 ;
            labFacture.setNum(facture);
            ui->facture->setText(labFacture);
            ui->pages->setCurrentIndex(3);
        } else {
        }
        db->getBasedd().close();
    }
}

void MainWindow::on_actualiser_clicked()
{
    actualiserProduits();
    actualiserVtmp();
}

void MainWindow::on_listeProduits_clicked(const QModelIndex &index)
{
    ligneP = ui->listeProduits->model()->data(index).toString();
    setLigneP(ligneP);
    qDebug()<<getP();
}

void MainWindow::on_listeVente_clicked(const QModelIndex &index)
{
    ligneV = ui->listeVente->model()->data(index).toString();
    setLigneV(ligneV);
    qDebug ()<< ligneV;
}

void MainWindow::on_actionCompte_user_triggered()
{
    if (db->getTypSession() != "Administrateur") {
        QMessageBox::critical(this,"Accèe refusée ","Vous n'etes pas autorisé de faire cette operation !");
    } else {
        Modif *md;
        md = new Modif();
        md->modifier(5);
        md->show();
    }

}

void MainWindow::on_modifier_clicked()
{
    Modif md;
    if (getV().isEmpty()) {
        QMessageBox::critical(this,"Aucune element selectioné ","Veuillez selectionnée le produits à mdofier");
    } else {

    }
}

void MainWindow::on_ajoutV_clicked()
{
    if (getP().isEmpty()) {
        QMessageBox::critical(this,"Aucune element selectioné ","Veuillez selectionnée le produits à ajouter ");
    } else {

        QString des,ref,refVente,qtVente,prixVente,quantite,unit,prix,prix_tt,decrement;
        int px;
        int qtt = db->mitadyRefProduits(db->getBasedd(),"quantite",getP()).toInt();
        des = db->mitadyRefProduits(db->getBasedd(),"designation",getP());

        quantite.setNum(qtt);
        unit = db->mitadyRefProduits(db->getBasedd(),"unite",getP());
        prix = db->mitadyRefProduits(db->getBasedd(),"prix_unit",getP());
        int dec = qtt - ui->venteQtt->text().toInt();
        decrement.setNum(dec);

        QSqlQuery query(db->getBasedd());

        if (ui->venteQtt->text().toInt() == 0 ) {
            QMessageBox::critical(this,"Invalide quantite","Vous devez entrer la quantite du produits.");
        } else {
            if (ui->venteQtt->text().toInt() > qtt) {
               QMessageBox::critical(this,"Invalide quantite","La quantite de produits que vous demandez est depassé au quantite de stock .");
            } else {

                if (db->connexionEstReucu(db->getBasedd())) {
                    if (db->tableVide(db->getBasedd(),"reference","venteTmp")) {
                        ref = db->mitadyRefProduits(db->getBasedd(),"reference",getP());
                        px = ui->venteQtt->text().toInt() * prix.toInt();
                        prix_tt.setNum(px);

                        if (db->insertVenteTmp(db->getBasedd(),ref,des,ui->venteQtt->text(),unit,prix,prix_tt)) {
                            db->misAjourTableProduits(db->getBasedd(),decrement,ref);
                        } else {
                            qDebug()<<"Insertion dans la table detailVente echoué ...";
                        }
                    } else {
                        ref = db->mitadyRefProduits(db->getBasedd(),"reference",getP());
                        if (ref == db->valeurEnBases(db->getBasedd(),"reference",ref,"venteTmp")) {
                            int qtAjours ;
                            QString ajoursQtt;
                            qtVente = db->maka(db->getBasedd(),"quantite","reference",ref,"venteTmp");
                            qtAjours = ui->venteQtt->text().toInt() + qtVente.toInt();
                            px = prix.toInt() * qtAjours ;
                            prixVente.setNum(px);
                            ajoursQtt.setNum(qtAjours);

                            db->misAjourTableVenteTmp(db->getBasedd(),ajoursQtt ,prixVente,ref);
                            db->misAjourTableProduits(db->getBasedd(),decrement,ref);
                        } else {
                            px = ui->venteQtt->text().toInt() * prix.toInt();
                            prix_tt.setNum(px);
                            if (db->insertVenteTmp(db->getBasedd(),ref,des,ui->venteQtt->text(),unit,prix,prix_tt)) {
                                db->misAjourTableProduits(db->getBasedd(),decrement,ref);
                            } else {
                                qDebug()<<"Insertion dans la table detailVente echoué ...";
                            }
                        }
                    }
                    actualiserProduits();
                    actualiserVtmp();
                 } else {
              }
                db->getBasedd().close();
           }
            ui->venteQtt->setValue(0);
            setLigneP("");
        }
    }
}

void MainWindow::on_retirerP_clicked()
{
    if (db->connexionEstReucu(db->getBasedd())) {
        if (db->tableVide(db->getBasedd(),"id_vente","venteTmp")) {
            QMessageBox::critical(this,"Erreur","Aucun element a retiré, la liste est vide !");
        } else {
            if (getV().isEmpty()) {
                    QMessageBox::critical(this,"Aucune selection","Aucun element a été selectioné ");
            } else {
                QSqlQuery req(db->getBasedd());
                QString id,ref,des,qtt,unite,prix,newQtt,refP,qttP;
                int nQtt;

                id = db->mitadyRefVentesTmp(db->getBasedd(),"id_vente",getV());
                ref = db->mitadyRefVentesTmp(db->getBasedd(),"reference",getV());
                des = db->mitadyRefVentesTmp(db->getBasedd(),"designation",getV());
                qtt = db->mitadyRefVentesTmp(db->getBasedd(),"quantite",getV());
                unite = db->mitadyRefVentesTmp(db->getBasedd(),"unite",getV());
                prix = db->mitadyRefVentesTmp(db->getBasedd(),"prix_unitaire",getV());
                refP = db->mitadyRefProduits(db->getBasedd(),"reference",ref);
                qttP = db->mitadyRefProduits(db->getBasedd(),"quantite",ref);

                if (refP.isNull() || qttP.toInt() == 0) {
                    qDebug()<<"\n -> Transfer data in to Product \n";
                    db->ajoutProduit(db->getBasedd(),des,ref,qtt.toInt(),prix.toDouble(),unite);
                    db->delets(db->getBasedd(),"venteTmp","reference",ref);
                } else {
                    qDebug()<<"\n -> Update data in to Product \n";
                    nQtt = qtt.toInt() + qttP.toInt();
                    newQtt.setNum(nQtt);
                    db->misAjourTableProduits(db->getBasedd(),newQtt,ref);
                    db->delets(db->getBasedd(),"venteTmp","reference",ref);
                }
                actualiserVtmp();
                actualiserProduits();
                setLigneV("");
            }
        }
    } else {
        qDebug()<<"\n -> Echec de connexion a la base .. ";
    }
    db->getBasedd().close();
}

void MainWindow::on_actionAccueil_triggered()
{
    if (getSession() == true) {
        ui->pages->setCurrentIndex(0);
    } else {
        QMessageBox::critical(this,"Accèe refusée ","Vous devez se connecter !");
        ui->pages->setCurrentIndex(8);
    }
}

void MainWindow::on_annulV_clicked()
{
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery req(db->getBasedd());
        QString del = "delete from vente where id_vente=(select id_vente from vente order by id_vente desc limit 1)";
        if (req.exec(del)) {
            if (db->tableVide(db->getBasedd(),"reference","venteTmp")) {
                ui->pages->setCurrentIndex(0);
            } else {
                int confirmation = QMessageBox::question(this,"Vente annuler","Voulez-vous vraiment annuler cette vente ?","Non","Oui");
                if (confirmation == 0) {
                } else if(confirmation == 1) {

                    QString liste="select count(id_vente) as row from venteTmp";
                    QString lastlement ="select reference from venteTmp order by reference desc limit 1";

                    QString id,ref,des,qtt,unite,prix,newQtt,refP,qttP,refer;
                    int nQtt , i ;
                    int nbrLigne = 0;

                    req.prepare(liste);
                    if (req.exec()) {
                        while (req.next()) {
                            nbrLigne += req.value(0).toInt();
                        }
                    } else {
                    }

                    for ( i = 1; i <= nbrLigne ; i++ ) {
                        if (req.exec(lastlement)) {
                            while (req.next()) {
                                refer =  req.value(0).toString();
                            }
                            ref = db->parcourVentesTmp(db->getBasedd(),"reference",refer);
                            des = db->parcourVentesTmp(db->getBasedd(),"designation",refer);
                            qtt = db->parcourVentesTmp(db->getBasedd(),"quantite",refer);
                            unite = db->parcourVentesTmp(db->getBasedd(),"unite",refer);
                            prix = db->parcourVentesTmp(db->getBasedd(),"prix_unitaire",refer);

                            refP = db->mitadyRefProduits(db->getBasedd(),"reference",ref);
                            qttP = db->mitadyRefProduits(db->getBasedd(),"quantite",ref);

                            if (refP.isNull() || qttP.toInt() == 0) {
                                qDebug()<<"\n -> Transfer data in to Product \n";
                                db->ajoutProduit(db->getBasedd(),des,ref,qtt.toInt(),prix.toDouble(),unite);
                                db->delets(db->getBasedd(),"venteTmp","reference",ref);
                            } else {
                                qDebug()<<"\n -> Update data in to Product \n";
                                nQtt = qtt.toInt() + qttP.toInt();
                                newQtt.setNum(nQtt);
                                db->misAjourTableProduits(db->getBasedd(),newQtt,ref);
                                db->delets(db->getBasedd(),"venteTmp","reference",ref);
                            }
                        } else {
                        }
                    }
                ui->pages->setCurrentIndex(0);
              }
           }
        } else {
             qDebug()<<"\n -> Echec de suppression de vente. \n";
        }
    } else {
        qDebug()<<"\n -> Echec de connexion a la base pour l'annulation de vente. \n";
    }
    db->getBasedd().close();
}

void MainWindow::on_modifP_clicked()
{
    if (db->connexionEstReucu(db->getBasedd())) {
        if (db->tableVide(db->getBasedd(),"id_vente","venteTmp")) {
            QMessageBox::critical(this,"Erreur","Aucun element a modifier, la liste de vente est vide ");
        } else {
            if (getV().isEmpty()) {
                QMessageBox::critical(this,"Aucune selection","Aucun element a été selectioné ");
            } else {
                QString ref , qtt, qttP,prix;
                QSqlQuery req(db->getBasedd());

                ref = db->mitadyRefVentesTmp(db->getBasedd(),"reference",getV());
                qtt = db->mitadyRefVentesTmp(db->getBasedd(),"quantite",getV());
                qttP = db->mitadyRefProduits(db->getBasedd(),"quantite",ref);
                prix = db->mitadyRefProduits(db->getBasedd(),"prix_unit",ref);

                Modif *md = new Modif();

                md->setQuantiteActuel(qtt.toInt());
                md->setReference(ref);
                md->setStocks(qttP.toInt());
                md->setPrix(prix.toInt());

                md->modifier(1);
                md->show();

               actualiserVtmp();
               setLigneV("");
            }
        }
    } else {
    }
    db->getBasedd().close();
}

void MainWindow::on_actionListe_des_produits_triggered()
{
    if (getSession() == true) {
       ui->pages->setCurrentIndex(2);
    } else {
        QMessageBox::critical(this,"Accèe refusée ","Vous devez se connecter !");
    }
}

void MainWindow::on_ajoutArticle_clicked()
{
    Modif *md;
    md = new Modif();

    if (getLigneP().isEmpty()) {
        md->modifier(4);
        md->show();
    } else {
        QString ref,qtt;
        if (db->connexionEstReucu(db->getBasedd())) {

            ref = db->mitadyRefProduits(db->getBasedd(),"reference",getLigneP());
            qtt = db->mitadyRefProduits(db->getBasedd(),"quantite",getLigneP());
            md->setQuantiteActuel(qtt.toInt());
            md->setReference(ref);
            md->modifier(3);
            md->show();

        } else {
        }
    }
    setLigneP("");
}

void MainWindow::on_mdifierArticle_clicked()
{
    if (getLigneP().isEmpty()) {
         QMessageBox::critical(this,"Aucune selection","Aucun element a été selectioné ");
    } else {
        if (db->connexionEstReucu(db->getBasedd())) {

            QString ref,qtt;
            ref = db->mitadyRefProduits(db->getBasedd(),"reference",getLigneP());
            md->setReference(ref);
            md->modifier(2);
            md->show();
        } else {
        }
    }
    setLigneP("");
    actualiserStock();
}

void MainWindow::on_retourneAccueil_clicked()
{
    ui->pages->setCurrentIndex(0);
}

void MainWindow::on_stocks_clicked(const QModelIndex &index)
{
    ligneP = ui->stocks->model()->data(index).toString();
    setLigneP(ligneP);
}

void MainWindow::on_actualiserArticle_clicked()
{
    actualiserStock();
}

void MainWindow::rechercheArticle(QString types, QString data)
{
    QString rech ="select * from produits where "+types+" like'%"+data+"%' order  by "+types+" asc";
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQueryModel *mod_stock = new QSqlQueryModel();
        QSqlQuery req(db->getBasedd());
        if (req.exec(rech)) {
            mod_stock->setQuery(req);
            ui->stocks->setModel(mod_stock);
        } else {
            qDebug()<<"Echec de recherche dans la base de donnee !";
        }
    } else {
        qDebug()<<"Echec de connexion pour la recherche dans la base de donnee !";
    }
    db->getBasedd().close();
}

void MainWindow::rechercheStock( QTableView *tableau, QString types, QString data)
{
    QString rech ="select * from produits where "+types+" like'%"+data+"%' order  by "+types+" asc";
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQueryModel *mod_stock = new QSqlQueryModel();
        QSqlQuery req(db->getBasedd());
        if (req.exec(rech)) {
            mod_stock->setQuery(req);
            tableau->setModel(mod_stock);
        } else {
            qDebug()<<"Echec de recherche dans la base de donnee !";
        }
    } else {
        qDebug()<<"Echec de connexion pour la recherche dans la base de donnee !";
    }
    db->getBasedd().close();
}

void MainWindow::on_rechercher_clicked()
{
    rechercheArticle(ui->typeArcticle->currentText(),ui->recherche->text());
}
void MainWindow::on_supprimerArticle_clicked()
{
    if (getP().isEmpty()) {
        QMessageBox::critical(this,"Aucune selection","Aucun element a été selectioné ");
    } else {
        if (db->connexionEstReucu(db->getBasedd())) {
            QSqlQuery req(db->getBasedd());
            int confirmation = QMessageBox::question(this,"Suppression de produits ","Voulez-vous vraiment supprimer ce produits ?","Non","Oui");
            if (confirmation == 0) {
            } else if(confirmation == 1){
                QString ref ;
                ref = db->mitadyRefProduits(db->getBasedd(),"reference",getP());
                db->delets(db->getBasedd(),"produits","reference",ref);
                actualiserStock();
            }else {
            }
        } else {
        }
        db->getBasedd().close();
    }
}

void MainWindow::on_cancel_Client_clicked()
{
    ui->pages->setCurrentIndex(0);
}

void MainWindow::on_suivant_clicked()
{
    QString adresCl, telCl , nomClients, factures,idclt, nomCL;

    nomClients = ui->nomClient->text();
    adresCl = ui->adresseClient->text();
    telCl = ui->telClient->text();
    factures = ui->facture->text();
    idclt = db->idClients(db->getBasedd(),"id_client",nomClients,adresCl);
    qDebug()<<idclt;
    if (ui->nomClient->text().isEmpty() || adresCl.isEmpty() || telCl.isEmpty() || factures.isEmpty()) {
        QMessageBox::warning(this,"Champs incomplet","Tous les champs doivent etre remplit");
    } else {
        if (db->connexionEstReucu(db->getBasedd())) {
         QSqlQuery req(db->getBasedd());
         QString newCl="insert into client(nom_client,adresse_client,telephone) values('"+nomClients+"','"+adresCl+"','"+telCl+"')";
         QString recuper ="select id_client,nom_client from client order by id_client desc limit 1";
        if (db->refExiste(db->getBasedd(),"nom_client",nomClients,"client") && db->refExiste(db->getBasedd(),"adresse_client",adresCl,"client")) {

            QDateTime now = QDateTime::currentDateTime();

QString insertVente = "insert into vente(id_client,nomClient,facture,dateVente) values('"+idclt+"','"+nomClients+"','"+factures+"','"+now.toString("dd MMM yyyy h : m : s")+"')";
           if (req.exec(insertVente)) {

               infoClient(nomClients,adresCl,telCl,factures);

               actualiserVtmp();
               actualiserProduits();
               selectPages(1);
               ui->nomClient->setText("");
               ui->adresseClient->setText("");
               ui->telClient->setText("");
               ui->facture->setText("");
               infoFacture(nomClients,adresCl,telCl,factures);

           } else {
               qDebug()<<"\n -> Echec d'insertion de vente ..";
           }

         } else {

           QString idClient, id,nomCl;
           id = "select last(id_cl) from client";

           if (req.exec(newCl)) {
               if (req.exec(recuper)) {
                   while (req.next()) {
                       idClient = req.value(0).toString();
                       nomCl = req.value(1).toString();
                   }
                   if (db->refExiste(db->getBasedd(),"facture",factures,"vente")) {
                       QMessageBox::warning(this,"Echec","Facture [ "+factures+" ] est déjà existe !");
                   } else {
                       QDateTime now = QDateTime::currentDateTime();

    QString insertVente = "insert into vente(id_client,nomClient,facture,dateVente) values('"+idClient+"','"+nomClients+"','"+factures+"','"+now.toString("dd MMM yyyy h : m : s")+"')";
                      if (req.exec(insertVente)) {

                          infoClient(nomClients,adresCl,telCl,factures);

                          actualiserVtmp();
                          actualiserProduits();
                          selectPages(1);
                          ui->nomClient->setText("");
                          ui->adresseClient->setText("");
                          ui->telClient->setText("");
                          ui->facture->setText("");
                          infoFacture(nomClients,adresCl,telCl,factures);

                      } else {
                          qDebug()<<"\n -> Echec d'insertion de vente ..";
                      }
                   }
               } else {
                   qDebug()<<"\n -> Echec de recuperation des info Client ..";
               }
           } else {
               qDebug()<<"Echec d'insertion du client ..";
           }
         }

        } else {
            qDebug()<<"Echec de connexion a la base pour le client ..";
        }
        db->getBasedd().close();
    }
}

void MainWindow::on_validerV_clicked()
{
    if (db->connexionEstReucu(db->getBasedd())) {
        QSqlQuery req(db->getBasedd());
        if (db->tableVide(db->getBasedd(),"reference","venteTmp")) {
            QMessageBox::critical(this,"Vente invalide","Il n'y a aucun article sélectionné pour à vendre \n Veuillez entrer les articles !");
        } else {
            QString liste="select count(id_vente) as row from venteTmp";
            QString lastlement ="select reference from venteTmp order by reference desc limit 1";
            QString montant = "select sum(prix_total) as total_prix from venteTmp ";
            QString idvte = "select id_vente from vente where id_vente =(select id_vente from vente order by id_vente desc limit 1)";

            QString id,ref,des,qtt,unite,prix,newQtt,refP,qttP,refer ,prix_total,total_de_prix;
            int i ;
            int nbrLigne = 0;
            if (req.exec(montant)) {
                while (req.next()) {
                   total_de_prix = req.value(0).toString();
                }
            } else {
            }
            ui->prixTotal_de_vente->setText(total_de_prix);

            req.prepare(liste);
            if (req.exec()) {
                while (req.next()) {
                    nbrLigne += req.value(0).toInt();
                }
            } else {
            }
            for ( i = 1; i <= nbrLigne ; i++ ) {
                if (req.exec(lastlement)) {
                    while (req.next()) {
                        refer =  req.value(0).toString();
                    }
                    ref = db->parcourVentesTmp(db->getBasedd(),"reference",refer);
                    des = db->parcourVentesTmp(db->getBasedd(),"designation",refer);
                    qtt = db->parcourVentesTmp(db->getBasedd(),"quantite",refer);
                    unite = db->parcourVentesTmp(db->getBasedd(),"unite",refer);
                    prix = db->parcourVentesTmp(db->getBasedd(),"prix_unitaire",refer);
                    prix_total =db->parcourVentesTmp(db->getBasedd(),"prix_total",refer);

                    qDebug()<<"\n -> Transfer data in to Product \n";
                    if(db->insertVenteProduits(db->getBasedd(),ref,des,qtt,unite,prix,prix_total) == true){
                        db->delets(db->getBasedd(),"venteTmp","reference",ref);
                    }else {

                    }
                } else {
                    qDebug()<<"\n -> Il y a une erreur lors de validation de vente \n";
                }
            }

            actualiserProduits();
            actualiserVtmp();
            afficheFactureVente();
        ui->pages->setCurrentIndex(4);
        }
    } else {
    }
}

void MainWindow::on_actionProduit_vendu_triggered()
{
    if (getSession() == true) {
        actualiserListeVente();
       ui->pages->setCurrentIndex(5);
    } else {
        QMessageBox::critical(this,"Accèe refusée ","Vous devez se connecter !");
    }
}

void MainWindow::on_accuel_clicked()
{
    ui->pages->setCurrentIndex(0);
}

void MainWindow::on_detailAccueil_clicked()
{
    ui->pages->setCurrentIndex(0);
}

void MainWindow::on_detail_clicked()
{

   if (getListV().isEmpty()) {
      QMessageBox::critical(this,"Aucune element selectioné ","Veuillez selectionnée l'élement dans la liste pour voir son détail ");
    } else {
        QString id,name,adres,tel,factur,px_tt;
        if (db->connexionEstReucu(db->getBasedd())) {
            QSqlQuery req(db->getBasedd());
            id = db->referenceVente(db->getBasedd(),"id_vente",getListV());
            qDebug()<<id;
            QString recuperer = "select facture from vente where id_client='"+id+"'";
            QString recuper2 = "select nom_client,adresse_client,telephone from client where id_client='"+id+"'";
            QString detail = "select sum(prix_total) as prix from detailVente where id_vente='"+id+"'";

            if (req.exec(recuperer)) {
                while (req.next()) {
                    factur = req.value(0).toString();
                }
                if (req.exec(recuper2)) {
                    while (req.next()) {
                        name = req.value(0).toString();
                        adres = req.value(1).toString();
                        tel = req.value(2).toString();
                    }
                    if (req.exec(detail)) {
                        while (req.next()) {
                            px_tt = req.value(0).toString();
                        }
                    } else {
                    }
                    ui->nameCl->setText(name);
                    ui->adressCls->setText(adres);
                    ui->telCls->setText(tel);
                    ui->factureCls->setText(factur);
                    ui->prixTotal_de_ventes->setText(px_tt);
                    voirDetailVente(id);
                    ui->pages->setCurrentIndex(6);
                } else {
                    QMessageBox::critical(this,"Erreur ","Il y a une erreur sur la requete dans la table client");
                }
            } else {
                QMessageBox::critical(this,"Erreur ","Il y a une erreur sur la requete dans la table vente");
            }
        } else {
        }
    }
    setListV("");
}

void MainWindow::on_detailFermer_clicked()
{
    ui->pages->setCurrentIndex(5);
}

void MainWindow::on_imprimer_clicked()
{
    int vente = QMessageBox::question(this,"Vente reçu","Voulez-vous faire une autre vente ?","Non","Oui");
    switch (vente) {
    case 0:
        actualiserArticles(ui->tableV,"vente");
        ui->pages->setCurrentIndex(0);
        break;
    case 1:
    {
        actualiserArticles(ui->tableV,"vente");
        QString labFacture , fact = " select id_vente as facture from vente order by id_vente desc limit 1";
        int facture = 0;
        if (db->connexionEstReucu(db->getBasedd())) {
            QSqlQuery req(db->getBasedd());
            if (req.exec(fact)) {
                while (req.next()) {
                    facture += req.value(0).toInt();
                }
            } else {
            }
            facture += 1 ;
            labFacture.setNum(facture);
            ui->facture->setText(labFacture);
            ui->pages->setCurrentIndex(3);
        } else {
        }
        db->getBasedd().close();
    }
        break;
    default:
        actualiserArticles(ui->tableV,"vente");
        ui->pages->setCurrentIndex(0);
    }
}

void MainWindow::on_tableListeVente_clicked(const QModelIndex &index)
{
    QString li = ui->tableListeVente->model()->data(index).toString();
    setListV(li);
}

QString MainWindow::getListV()
{
    return listV;
}

void MainWindow::setListV( QString value)
{
    listV = value;
}

QString MainWindow::getLigneP()
{
    return ligneP;
}

void MainWindow::on_annulConnection_clicked()
{
    ui->pages->setCurrentIndex(8);
}

void MainWindow::on_seConnecter_clicked()
{
    QString user,pwd;
    user = ui->username->text();
    pwd = ui->password->text();
    if (user.isEmpty() || pwd.isEmpty()) {
        QMessageBox::critical(this,"Erreur","Veuillez completer tous les champs.");
    } else {
        if (db->connexionEstReucu(db->getBasedd())) {
            if (db->seLogin(user,pwd,"comptUser")) {
                setSession(true);
                ui->nomCompte->setText(db->getNomSession());
                ui->typCompte->setText(db->getTypSession());

                ui->username->setText("");
                ui->password->setText("");
                ui->pages->setCurrentIndex(0);
            } else {
                QMessageBox::critical(this,"Failed connexion","Accèe refusée !\n\nUsername ou mots de passe incorrect !");
            }
        } else {
        }
    }
}

bool MainWindow::getSession() const
{
    return session;
}

void MainWindow::setSession(bool value)
{
    session = value;
}

void MainWindow::on_actionDeconnexion_triggered()
{
    if (getSession()==true) {
        setSession(false);
        ui->pages->setCurrentIndex(8);
    } else {
        QMessageBox::critical(this,"Erreur","Vous etes pas encore connecté !");
    }
}

void MainWindow::on_actionSe_connecte_triggered()
{
    if (getSession() == true) {
        QMessageBox::critical(this,"Erreur","Vous etes encore connecté !");
    } else {
        ui->pages->setCurrentIndex(7);
    }
}

void MainWindow::on_seConnecters_clicked()
{
    if (getSession() == true) {
        QMessageBox::critical(this,"Erreur","Vous etes encore connecté !");
    } else {
        ui->pages->setCurrentIndex(7);
    }
}

void MainWindow::on_recherchers_clicked()
{
    rechercheStock(ui->tableStock,ui->typeTab->currentText(),ui->recherch->text());
}

void MainWindow::on_deconnexion_clicked()
{
    if (getSession()==true) {
        setSession(false);
        ui->pages->setCurrentIndex(8);
    } else {
    }
}

void MainWindow::on_listVente_clicked()
{
    if (getSession() == true) {
        actualiserListeVente();
       ui->pages->setCurrentIndex(5);
    } else {
        QMessageBox::critical(this,"Accèe refusée ","Vous devez se connecter !");
    }
}

void MainWindow::on_adVente_clicked()
{
    if (getSession() == false) {
        QMessageBox::critical(this,"Accèe refusée ","Vous devez se connecter !");
    } else {
        QString labFacture , fact = " select id_vente as facture from vente order by id_vente desc limit 1";
        int facture = 0;
        if (db->connexionEstReucu(db->getBasedd())) {
            QSqlQuery req(db->getBasedd());
            if (req.exec(fact)) {
                while (req.next()) {
                    facture = req.value(0).toInt();
                }
            } else {
            }
            setFacture(facture);
            facture += 1 ;
            setFacture(facture);
            labFacture.setNum(getFacture());
            ui->facture->setText(labFacture);
            ui->pages->setCurrentIndex(3);
        } else {
        }
        db->getBasedd().close();
    }
}

void MainWindow::on_newUser_clicked()
{
    if (db->getTypSession() != "Administrateur") {
        QMessageBox::critical(this,"Accèe refusée ","Vous n'etes pas autorisé de faire cette operation !");
    } else {
        Modif *md;
        md = new Modif();
        md->modifier(5);
        md->show();
    }
}

void MainWindow::on_newProduits_clicked()
{
    if (getSession() == false) {
        QMessageBox::critical(this,"Accèe refusée ","Vous devez se connecter !");
    } else {
        md->modifier(4);
        md->show();
    }
}

void MainWindow::on_actualiserArt_clicked()
{
    actualiserArticles(ui->tableV,"vente");
    actualiserArticles(ui->tableStock,"produits");
}

void MainWindow::on_tableStock_clicked(const QModelIndex &index)
{
    QString p =  ui->tableStock->model()->data(index).toString();
    ui->modif->setText("Modifier");
    setClikP(p);
}

QString MainWindow::getClikV() const
{
    return clikV;
}

void MainWindow::setClikV(const QString &value)
{
    clikV = value;
}

QString MainWindow::getClikP() const
{
    return clikP;
}

void MainWindow::setClikP(const QString &value)
{
    clikP = value;
}

void MainWindow::on_tableV_clicked(const QModelIndex &index)
{
    QString v = ui->tableV->model()->data(index).toString();
    setClikV(v);
}

void MainWindow::on_supp_clicked()
{
    if (db->getTypSession() != "Administrateur" || db->getTypSession() == "") {
        QMessageBox::critical(this,"Accèe refusée","Vous n'avez pas l'autorisation pour faire cette operation !\n\nDemandez à l'administrateur");
    } else {
        if (getClikP().isEmpty() && getClikV().isEmpty()) {
            QMessageBox::critical(this,"Aucune selection","Aucun element a été selectioné ");
        } else {
            if (!getClikP().isEmpty()) {
                if (db->connexionEstReucu(db->getBasedd())) {
                    QSqlQuery req(db->getBasedd());
                    int confirmation = QMessageBox::question(this,"Suppression de produits ","Voulez-vous vraiment supprimer ce produits ?","Non","Oui");
                    if (confirmation == 0) {
                    } else if(confirmation == 1){
                        QString ref ;
                        ref = db->mitadyRefProduits(db->getBasedd(),"reference",getClikP());
                        db->delets(db->getBasedd(),"produits","reference",ref);
                        actualiserArticles(ui->tableStock,"produits");
                    }else {
                    }
                } else {
                }
                db->getBasedd().close();
            } else if(!getClikV().isEmpty()){
                if (db->connexionEstReucu(db->getBasedd())) {
                    QSqlQuery req(db->getBasedd());
                    int confirmation = QMessageBox::question(this,"Suppression de produits ","Voulez-vous vraiment supprimer ce produits ?","Non","Oui");
                    if (confirmation == 0) {
                    } else if(confirmation == 1){
                        QString ref ;
                        ref = db->referenceVente(db->getBasedd(),"id_vente",getClikV());
                        db->delets(db->getBasedd(),"vente","id_vente",ref);
                        actualiserArticles(ui->tableV,"vente");
                    }else {
                    }
                } else {
                }
                db->getBasedd().close();
            }
            setClikP("");
            setClikV("");
        }
    }
}

void MainWindow::on_actionModification_d_un_compte_triggered()
{
    if (getSession() == true) {
        actualiserUsers();
        ui->typeCompte->addItem("");
        ui->typeCompte->addItem("Utilisateur");
        ui->typeCompte->addItem("Administrateur");
        ui->pages->setCurrentIndex(10);
    } else {
        QMessageBox::critical(this,"Accèe refusée ","Vous devez se connecter !");
    }
}

void MainWindow::on_annul_modif_user_clicked()
{
    ui->pages->setCurrentIndex(0);
}

void MainWindow::on_tableUser_clicked(const QModelIndex &index)
{
    QString us =  ui->tableUser->model()->data(index).toString();
    setUsers(us);
}

QString MainWindow::getUsers()
{
    return users;
}

void MainWindow::setUsers(QString value)
{
    users = value;
}

void MainWindow::on_modifUser_clicked()
{    
    if (getUsers().isEmpty()) {
        ui->validUser->setText("Valider");
        QMessageBox::warning(this,"Erreur","Selectionnez l'élement dans le tableaux !");
    } else {
        QSqlQuery req(db->getBasedd());
        QString id,name,firstname,usernams,typUser,passwd;
        if (db->connexionEstReucu(db->getBasedd())) {

            id = db->recuperUser(db->getBasedd(),"id_user",getUsers());
            name = db->recuperUser(db->getBasedd(),"nom",getUsers());
            firstname = db->recuperUser(db->getBasedd(),"prenom",getUsers());
            usernams = db->recuperUser(db->getBasedd(),"username",getUsers());
            typUser = db->recuperUser(db->getBasedd(),"typeCompte",getUsers());
            passwd = db->recuperUser(db->getBasedd(),"password",getUsers());
            setIdCl(id);
            if(db->getTypSession() == "Administrateur" || id == db->getIdSessions()){
                ui->nom->setText(name);
                ui->prenom->setText(firstname);
                ui->usernames->setText(usernams);
                ui->typeCompte->setCurrentText(typUser);
                ui->validUser->setText("Modifier");
            } else {
                QMessageBox::critical(this,"Accèe refusée","Vous n'avez pas l'autorisation pour cette operation !");
            }
            qDebug()<<db->getTypSession();
        } else {
        }
        setUsers("");
    }
}

void MainWindow::on_validUser_clicked()
{

    QString inserte,nm,pm,pas,usr,conf,typ,id,types;
    nm = ui->nom->text();
    pm = ui->prenom->text();
    pas = ui->passwordUser->text();
    usr = ui->usernames->text();
    conf = ui->confpasswd->text();
    typ = ui->typeCompte->currentText();
    date = QDateTime::currentDateTime();
    QString dat = date.toString("dd MMM yyyy h : m : s");

    QString insert = "Insert into comptUser(nom,prenom,username,password,typeCompte,datMisAjours) values('"+nm+"','"+pm+"','"+usr+"','"+pas+"','"+typ+"','"+dat+"')";

    if (nm.isEmpty()||pm.isEmpty()||pas.isEmpty()||usr.isEmpty()||conf.isEmpty()||typ.isEmpty()) {
        QMessageBox::critical(this,"Erreur","Vous devez completé tous le champs !");
    } else {
        if (pas != conf) {
            QMessageBox::critical(this,"Erreur invalide","Le deux mots de passe doivent etre identique .");
        } else {
            if (db->connexionEstReucu(db->getBasedd())) {
                QSqlQuery req(db->getBasedd());

                if (ui->validUser->text() == "Valider") {
                    if (db->tableVide(db->getBasedd(),"id_user","comptUser")) {
                        typ ="Administrateur";
                        if (req.exec(insert)) {
                            ui->nom->setText("");
                            ui->prenom->setText("");
                            ui->passwordUser->setText("");
                            ui->confpasswd->setText("");
                            ui->usernames->setText("");
                            ui->typeCompte->setCurrentText("");
                            ui->validUser->setText("Valider");

        QMessageBox::information(this,"Bienvenu","Bienvenu Admin : "+ui->nom->text()+" "+ui->prenom->text()+" dans le Gestion Article.");
                        } else {
                           QMessageBox::warning(this,"Echec d'insertion","Echec d'insertion de nouveau compte");
                        }
                    } else {
                        if (typ == "Administrateur") {
                            QMessageBox::critical(this,"Erreur type compte","Vous ne pouvez pas etre Aministrateur .");
                        } else {
                            if (req.exec(insert)) {
                                qDebug()<<date.toString("dd MMM yyyy h : m : s");
                                ui->nom->setText("");
                                ui->prenom->setText("");
                                ui->passwordUser->setText("");
                                ui->confpasswd->setText("");
                                ui->usernames->setText("");
                                ui->typeCompte->setCurrentText("");
                                ui->validUser->setText("Valider");
                QMessageBox::information(this,"Bienvenu","Bienvenu "+ui->nom->text()+" "+ui->prenom->text()+" dans le Gestion Article.");
                            } else {
                                QMessageBox::warning(this,"Echec d'insertion","Echec d'insertion de compte");
                            }
                        }
                    }
                } else {
                    if (ui->validUser->text() == "Modifier") {
                        id = db->recuperUser(db->getBasedd(),"id_user",getUsers());
                        types = db->recuperUser(db->getBasedd(),"typeCompte",getUsers());
                        QString updat = "update comptUser set nom='"+nm+"',prenom='"+pm+"',username='"+usr+"',typeCompte='"+typ+"',password='"+pas+"',datMisAjours='"+date.toString("dd MMM yyyy h : m : s")+"' where id_user='"+getIdCl()+"'";
                        qDebug()<<getIdCl();
                        if ( db->getTypSession() == "Administrateur") {
                            if ( typ == "Administrateur" && types == "Utilisateur" ) {
                                int confirmation = QMessageBox::question(this,"Confirmation d'accèe","Voulez-vous vraiment changer cet utilisateur au type d'administrateur ?","Non","Oui");
                                if (confirmation == 0) {
                                } else if(confirmation == 1){
                                    db->misAjoursAdmin(db->getBasedd());
                                    if (req.exec(updat)) {

                                        ui->nom->setText("");
                                        ui->prenom->setText("");
                                        ui->passwordUser->setText("");
                                        ui->confpasswd->setText("");
                                        ui->usernames->setText("");
                                        ui->typeCompte->setCurrentText("");
                                        ui->validUser->setText("Valider");

                                        QMessageBox::information(this,"Mis a jours reuçu","Compte est a jours avec succè !");
                                    } else {
                                        QMessageBox::information(this,"Echec de mis a jours","Echec de mis a jours !");
                                    }
                                }else {
                                }
                            } else {
                                if (req.exec(updat)) {

                                    ui->nom->setText("");
                                    ui->prenom->setText("");
                                    ui->passwordUser->setText("");
                                    ui->confpasswd->setText("");
                                    ui->usernames->setText("");
                                    ui->typeCompte->setCurrentText("");
                                    ui->validUser->setText("Valider");

                                    QMessageBox::information(this,"Mis a jours reuçu","Compte est a jours avec succè !");
                                } else {
                                    QMessageBox::information(this,"Echec de mis a jours","Echec de mis a jours !");
                                }
                            }
                        } else if(db->getTypSession() == "Utilisateur"  && typ == "Administrateur"){
                            QMessageBox::critical(this,"Echec d'opertation","Vous ne pouvez pas changer le type de compte.\n\nContactez votre administrateur !");
                        }else{
                          if (req.exec(updat)) {

                              ui->nom->setText("");
                              ui->prenom->setText("");
                              ui->passwordUser->setText("");
                              ui->confpasswd->setText("");
                              ui->usernames->setText("");
                              ui->typeCompte->setCurrentText("");
                              ui->validUser->setText("Valider");

                              QMessageBox::information(this,"Mis a jours est reuçu","Mis a jours de compte avec succèe !");
                            } else {
                            }
                        }
                    } else {
                    }
                }
            } else {
                QMessageBox::warning(this,"Erreur de connexion","Echec de connexion à la base de donnée .");
            }
        }
        db->getBasedd().close();
        actualiserUsers();
    }
}

void MainWindow::on_actualisers_clicked()
{
    actualiserUsers();
}

void MainWindow::on_recherche_textChanged(const QString &arg1)
{
    rechercheStock(ui->tableStock,ui->typeTab->currentText(),arg1);
    actualiserStock();
}

void MainWindow::on_modif_clicked()
{
    if (getClikP().isEmpty()) {

        QMessageBox::warning(this,"Erreur ","Veuillez sélectionné l'élement dans le tableaux .");
    } else {

        if (db->getTypSession() != "Administrateur" || db->getTypSession() == "") {
            QMessageBox::critical(this,"Accèe refusée","Vous n'avez pas l'autorisation pour faire cette operation !\n\nDemandez à l'administrateur");
        } else {
            QString id_prod,ref,des,qtt,px,unit,refer;
            if (db->connexionEstReucu(db->getBasedd())) {

                id_prod = db->mitadyRefProduits(db->getBasedd(),"id_produit",getClikP());
                refer = db->mitadyRefProduits(db->getBasedd(),"reference",getClikP());
                ref = db->mitadyRefProduits(db->getBasedd(),"reference",getClikP());
                des = db->mitadyRefProduits(db->getBasedd(),"designation",getClikP());
                qtt = db->mitadyRefProduits(db->getBasedd(),"quantite",getClikP());
                px = db->mitadyRefProduits(db->getBasedd(),"prix_unit",getClikP());
                unit = db->mitadyRefProduits(db->getBasedd(),"unite",getClikP());

                if (ui->modif->text() == "Modifier") {

                    ui->designations->setText(des);
                    ui->references->setText(ref);
                    ui->quantites->setValue(qtt.toInt());
                    ui->Prixs->setValue(px.toInt());
                    ui->unites->setCurrentText(unit);
                    ui->modif->setText("Valider");

                } else {

                    ref = ui->references->text();
                    des = ui->designations->text();
                    qtt = ui->quantites->value();
                    px = ui->Prixs->value();
                    unit = ui->unites->currentText();

                    if (ref.isEmpty()||des.isEmpty() || unit.isEmpty()) {
                        QMessageBox::warning(this,"Erreur ","Tous les champs doivent etre remplis .");
                    } else {
                        if (ui->quantites->value() == 0  ) {
                            QMessageBox::warning(this,"Invalide valeur ","Quantite invalide.");
                        } else {
                            if (ui->Prixs->value() == 0) {
                                QMessageBox::warning(this,"Invalide valeur ","Prix invalide.");
                            }else {
                                QSqlQuery req(db->getBasedd());
                                ref = ui->references->text();
                                des = ui->designations->text();
                                qtt.setNum(ui->quantites->value());
                                px.setNum(ui->Prixs->value());
                                unit = ui->unites->currentText();
                                date = QDateTime::currentDateTime();
                                QString updt = "update produits set  reference='"+ref+"',designation='"+des+"',quantite='"+qtt+"',prix_unit='"+px+"',unite='"+unit+"',datModif='"+date.toString("dd MMM yyyy h : m : s")+"' where reference='"+refer+"'";
                                if (req.exec(updt)) {
                                    ui->references->setText("");
                                    ui->Prixs->setValue(0);
                                    ui->quantites->setValue(0);
                                    ui->designations->setText("");
                                    ui->unites->setCurrentText("");
                                    setClikP("");
                                    actualiserArticles(ui->tableStock,"produits");
                                } else {
                                    QMessageBox::warning(this,"Echec mis a jours ","Echec de mis a jours !");
                                }
                            }
                        }
                    }
                }
            } else {
            }
        }

    }
}

void MainWindow::on_supUser_clicked()
{
    if (getUsers().isEmpty()) {
        QMessageBox::warning(this,"Erreur ","Veuillez sélectionné l'élement dans le tableaux .");
    } else {
        if (db->connexionEstReucu(db->getBasedd())) {
            QSqlQuery req(db->getBasedd());
            QString typ , updatAdmin , id , test="select count(id_user) as row from comptUser";
            updatAdmin = "update comptUser set typeCompte='Administrateur' where id_user =(select id_user from comptUser order by id_user  asc limit 1)";
            id = db->recuperUser(db->getBasedd(),"id_user",getUsers());
            typ = db->recuperUser(db->getBasedd(),"typeCompte",getUsers());

            if (db->getTypSession() == "Utilisateur") {
                QMessageBox::critical(this,"Accèe réfusée ","Vous n'avez pas l'autorisation pour supprimer un compte !\n\nContactez votre Administrateur .");
            } else {
                int row = 0;
                if (req.exec(test)) {
                    while (req.next()) {
                        row += req.value(0).toInt();
                    }
                    if (row == 1 ) {
                        db->delets(db->getBasedd(),"comptUser","id_user",id);
                        this->close();
                        setSession(false);
                        md->modifier(5,"Compte Administrateur");
                        md->show();
                    }else if ( row > 1 ){
                        if (typ == "Administrateur") {
                            int confirmation = QMessageBox::question(this,"Comfirmation de suppression compte ","Voulez-vous vraiment supprimer la compte Administrateur ?","Non","Oui");
                            if (confirmation == 0) {
                            } else if(confirmation == 1){
                                db->delets(db->getBasedd(),"comptUser","id_user",id);
                                if (req.exec(updatAdmin)) {
                                } else {
                                    QMessageBox::warning(this,"Erreur ","Echec de mis a jours d'administration ");
                                }
                                actualiserUsers();
                            }else {
                            }
                        } else {

                            int confirmation = QMessageBox::question(this,"Comfirmation de suppression compte","Voulez-vous vraiment supprimer cette compte d'Utilisateur ?","Non","Oui");
                            if (confirmation == 0) {
                            } else if(confirmation == 1){
                                db->delets(db->getBasedd(),"comptUser","id_user",id);
                                actualiserUsers();
                            }else {
                            }
                        }
                    }
                } else {
                    QMessageBox::warning(this,"Erreur ","Il y a une erreur lors de verification à la base ! ");
                }
            }
        } else {
        }
        db->getBasedd().close();
    }
}

QString MainWindow::getRech() const
{
    return rech;
}

void MainWindow::setRech(const QString &value)
{
    rech = value;
}

void MainWindow::on_returnAccueil_clicked()
{
    ui->nom->setText("");
    ui->prenom->setText("");
    ui->usernames->setText("");
    ui->passwordUser->setText("");
    ui->confpasswd->setText("");
    ui->typeCompte->setCurrentText("");
    ui->pages->setCurrentIndex(0);
}

void MainWindow::on_annulUser_clicked()
{
    ui->nom->setText("");
    ui->prenom->setText("");
    ui->usernames->setText("");
    ui->passwordUser->setText("");
    ui->confpasswd->setText("");
    ui->typeCompte->setCurrentText("");
}

void MainWindow::on_listeUsers_clicked()
{
    actualiserUsers();
    ui->pages->setCurrentIndex(10);
}

void MainWindow::on_recherch_textChanged(const QString &arg1)
{
    rechercheStock(ui->tableStock,ui->typeTab->currentText(),ui->recherch->text());
     qDebug()<<ui->typeTab->currentText();
}

void MainWindow::on_clientList_currentTextChanged(const QString &arg1)
{
    QString nCl,adCl,telCl,selectCl;
    if (ui->nomClient->text().isEmpty() && ui->clientList->currentText().isEmpty()) {
        ui->adresseClient->setText("");
        ui->telClient->setText("");
    } else {
        if (ui->clientList->currentText().isEmpty()) {
            ui->adresseClient->setText("");
            ui->telClient->setText("");
        } else {
            selectCl ="select nom_client,adresse_client,telephone from client where nom_client like'%"+ui->clientList->currentText()+"%'";

            if (db->connexionEstReucu(db->getBasedd())) {
                QSqlQuery req(db->getBasedd());
                if (req.exec(selectCl)) {
                    while (req.next()) {
                        nCl = req.value(0).toString();
                        adCl = req.value(1).toString();
                        telCl = req.value(2).toString();
                    }
                } else {
                    qDebug()<<"Requette non executé !";
                }
                ui->adresseClient->setText(adCl);
                ui->telClient->setText(telCl);
            } else {
            }
            db->getBasedd().close();
        }
    }
}

void MainWindow::on_nomClient_textChanged(const QString &arg1)
{
    if (ui->nomClient->text().isEmpty()) {
        ui->adresseClient->setText("");
        ui->clientList->setCurrentText("");
        ui->telClient->setText("");
    } else {
        QSqlQueryModel *model = new QSqlQueryModel();
        QString select = "select nom_client from client where nom_client like'%"+ui->nomClient->text()+"%'";
        if (db->connexionEstReucu(db->getBasedd())) {
            QSqlQuery req(db->getBasedd());
            if (req.exec(select)) {

            } else {
            } model->setQuery(req);
            ui->clientList->setModel(model);
        } else {
        }
        db->getBasedd().close();
    }
}

int MainWindow::getFacture()
{
    return facture;
}

void MainWindow::setFacture(int value)
{
    facture = value;
}
