#include "modif.h"
#include "ui_modif.h"
#include <QMessageBox>
#include "mainwindow.h"
#include <QDebug>

Modif::Modif(QWidget *parent) : QFrame(parent) , ui(new Ui::Modif)
{
    ui->setupUi(this);

    ui->unite->addItem("");
    ui->unite->addItem("kg");
    ui->unite->addItem("litre");
    ui->unite->addItem("sac");
    ui->unite->addItem("carton");
    ui->unite->addItem("m");

    ui->unite_p->addItem("");
    ui->unite_p->addItem("kg");
    ui->unite_p->addItem("litre");
    ui->unite_p->addItem("sac");
    ui->unite_p->addItem("carton");
    ui->unite_p->addItem("m");

    ui->typeCompte->addItem("");
    ui->typeCompte->addItem("Administrateur");
    ui->typeCompte->addItem("Utilisateur");

    ui->modif_qt->setValue(getQuantiteActuel());

        this->db = GestArt("QSQLITE","/gestart.db");
}

Modif::Modif(QString actuelQtt)
{
    setQuantiteActuel(actuelQtt.toInt());

}

void Modif::modifier(int index)
{
    ui->modiff->setCurrentIndex(index);
}
void Modif::modifier(int index,QString titre)
{
    ui->labelCompte->setText(titre);
    ui->modiff->setCurrentIndex(index);
}

void Modif::setQuantiteActuel(int qtt)
{
    this->oldQtt = qtt;
}

void Modif::setNewQuantite(int newQtte)
{
    this->newQtt = newQtte;
}

int Modif::getNewQuantite()
{
    return this->newQtt;
}

int Modif::getQuantiteActuel()
{
    return this->oldQtt;
}

void Modif::setReference(QString refer)
{
    this->reference = refer;
}

QString Modif::getReference()
{
    return this->reference;
}

void Modif::setStocks(int stoc)
{
    this->stocks = stoc;
}

void Modif::setPrix(int prixs)
{
    this->prix = prixs;
}

int Modif::getPrix()
{
    return  prix;
}

int Modif::valeurQtt()
{
    return getNewQuantite();
}

void Modif::setPageIndex(int index)
{
    this->indexe = index;
}

int Modif::getPageIndex()
{
    return this->indexe;
}

int Modif::getStocks()
{
    return this->stocks;
}

Modif::~Modif()
{
    delete ui;
}

void Modif::on_annuler_clicked()
{
    this->close();
}

void Modif::on_annul_qtt_clicked()
{
    this->close();
}

void Modif::on_annul_modif_user_clicked()
{
    this->close();
}

void Modif::on_valider_qt_clicked()
{
    int refQt;
    refQt = this->getQuantiteActuel() + this->getStocks();
    qDebug()<< refQt ;
    if (ui->modif_qt->text().isEmpty()) {
        QMessageBox::critical(this,"Quantite invalide","Veuillez entrer le nouveau quantite ...");
    } else {
        if (ui->modif_qt->text().toInt() > refQt ) {
            QMessageBox::critical(this,"Quantite invalide","Quantite trop élévée ...");
        } else {
            setNewQuantite(ui->modif_qt->text().toInt());  //  Mirecupere nouvel valeur @ modif
            qDebug()<<this->getNewQuantite();
            QString newQtP,newQtV,newPrix;
            int px;
            MainWindow *window = new MainWindow ();
            window->setQtt(getNewQuantite());
            refQt -= window->getQtt();
            newQtP.setNum(refQt);
            newQtV.setNum(window->getQtt());

            px = window->getQtt() * getPrix();            
            newPrix.setNum(px);

            db.misAjourTableProduits(db.getBasedd(),newQtP,getReference());
            db.misAjourTableVenteTmp(db.getBasedd(),newQtV,newPrix,getReference());

            window->actualiserVtmp();
            window->actualiserProduits();

            this->close();
        }
    }
}

void Modif::on_annuler_p_clicked()
{
    this->close();
}

void Modif::on_valider_p_clicked()
{
    if(ui->modif_des_p->text().isEmpty() || ui->modif_ref_p->text().isEmpty() || ui->modif_qtt_p->text().isEmpty() || ui->modif_px_p->text().isEmpty() || ui->unite_p->currentText().isEmpty()){
        QMessageBox::warning(this,"Invalide","Tous les champs doivent etre remplis.");
    } else {
    if (ui->modif_qtt_p->text().toInt() <= 0) {
        QMessageBox::warning(this,"Invalide de quantite","Quantité non valide.");
    } else {
        if (ui->modif_px_p->text().toFloat() <= 0) {
            QMessageBox::warning(this,"Invalide de prix","Prix non valide.");
        } else {
            if (this->db.connexionEstReucu(this->db.getBasedd())) {

                if (db.ajoutProduit(db.getBasedd(),ui->modif_des_p->text(),ui->modif_ref_p->text(),ui->modif_qtt_p->text().toInt(),ui->modif_px_p->text().toDouble(),ui->unite_p->currentText()) == true) {
                    int confirmation = QMessageBox::question(this,"Option de continuation d'ajout","Insertion de donnée à la base avec succè !\n\nVoulez-vous inserer une autre produits ?","Non","Oui");
                    if (confirmation == 0) {

                        ui->modif_px_p->setValue(0);
                        ui->modif_des_p->setText("");
                        ui->modif_qtt_p->setValue(0);
                        ui->unite_p->setCurrentText("");
                        ui->modif_ref_p->setText("");

                        this->close();
                    } else if(confirmation == 1){

                        ui->modif_px_p->setValue(0);
                        ui->modif_des_p->setText("");
                        ui->modif_qtt_p->setValue(0);
                        ui->unite_p->setCurrentText("");
                        ui->modif_ref_p->setText("");
                    }else {

                        ui->modif_px_p->setValue(0);
                        ui->modif_des_p->setText("");
                        ui->modif_qtt_p->setValue(0);
                        ui->unite_p->setCurrentText("");
                        ui->modif_ref_p->setText("");
                    }

                } else {
                    QMessageBox::warning(this,"Insertion échoué","Echec d'insertion dans la base de donnée .");
                }
            } else {
                QMessageBox::warning(this,"Echec de connexion a la base de donnée","Connexion à la base est échoué.");
            }
        }
    }
}
}

void Modif::on_valider_modif_user_clicked()
{
    QString nm,pm,pas,usr,conf,typ;
    nm = ui->nom->text();
    pm = ui->prenom->text();
    pas = ui->password->text();
    usr = ui->username->text();
    conf = ui->confpasswd->text();
    typ = ui->typeCompte->currentText();

    if (nm.isEmpty() || pm.isEmpty() || pas.isEmpty()|| usr.isEmpty() || conf.isEmpty() || typ.isEmpty()) {
        QMessageBox::warning(this,"Invalide de saisie","Tous les champs doivent etre remplis .");
    } else {
        if (pas != conf) {
            QMessageBox::warning(this,"Mot de passe invalide","Le deux mot de passe doivent etre identique .");
        } else {
            if (db.connexionEstReucu(db.getBasedd())) {
                QSqlQuery req(db.getBasedd());
            if (db.tableVide(db.getBasedd(),"id_user","comptUser")) {
                if (typ == "Utilisateur") {
                    ui->typeCompte->setCurrentText("Administrateur");
                    typ = ui->typeCompte->currentText();
                } else {
                    ui->typeCompte->setCurrentText("Administrateur");
                    typ = ui->typeCompte->currentText();
                }
                date = QDateTime::currentDateTime();
                QString insert = "Insert into comptUser(nom,prenom,username,password,typeCompte,datMisAjours) values('"+nm+"','"+pm+"','"+usr+"','"+pas+"','"+typ+"','"+date.toString("dd MMM yyyy h : m : s")+"')";

                    req.prepare(insert);
                    if (req.exec()) {
                        QMessageBox::information(this,"Bienvenu","Bienvenu : "+ui->nom->text()+" "+ui->prenom->text()+" dans la Gestion d'article.\n\nVous etes l'Administrateur de cette logiciel.");
                        if (ui->labelCompte->text() == "Compte Administrateur" ) {
                            this->close();
                            MainWindow *w;
                            w = new MainWindow(this);
                            w->show();
                        } else {
                            this->close();
                        }
                    } else {
                         QMessageBox::warning(this,"Echec d'insertion","Echec d'insertion de compte");
                    }
                } else {

                if (typ == "Administrateur") {
                    QMessageBox::critical(this,"Erreur type compte","Vous ne pouvez pas etre Aministrateur .");
                } else {
                    date = QDateTime::currentDateTime();
                    QString dat = date.toString("dd MMM yyyy h : m : s");

                    QString insert = "Insert into comptUser(nom,prenom,username,password,typeCompte,datMisAjours) values('"+nm+"','"+pm+"','"+usr+"','"+pas+"','"+typ+"','"+dat+"')";
                    if (req.exec(insert)) {
                        int confirmation = QMessageBox::question(this,"Option de continuation d'ajout","Création compte "+ui->nom->text()+" "+ui->prenom->text()+" est reuçu avec succè !\n\nVoulez-vous inserer une autre compte ?","Non","Oui");
                        if (confirmation == 0) {

                            ui->nom->setText("");
                            ui->prenom->setText("");
                            ui->username->setText("");
                            ui->confpasswd->setText("");
                            ui->password->setText("");
                            ui->typeCompte->setCurrentText("");

                            this->close();
                        } else if(confirmation == 1){

                            ui->nom->setText("");
                            ui->prenom->setText("");
                            ui->username->setText("");
                            ui->confpasswd->setText("");
                            ui->password->setText("");
                            ui->typeCompte->setCurrentText("");

                        }else {

                            ui->nom->setText("");
                            ui->prenom->setText("");
                            ui->username->setText("");
                            ui->confpasswd->setText("");
                            ui->password->setText("");
                            ui->typeCompte->setCurrentText("");
                            this->close();
                        }
                    } else {
                        QMessageBox::warning(this,"Echec d'insertion","Echec d'insertion de compte");
                    }
                  }
                }
                db.getBasedd().close();
            } else {
            }
        }
    }
}

void Modif::on_valider_clicked()
{
    QString moddes,modref,modqtt,modpx,modunit;
    MainWindow *w = new MainWindow();

    w->actualiserProduits();
    modpx = ui->modif_px->text();
    modqtt = ui->modif_qtt->text();
    moddes = ui->modif_des->text();
    modref = ui->modif_ref->text();
    modunit = ui->unite->currentText();

    if(modpx.isEmpty() || modqtt.isEmpty() || modref.isEmpty() || moddes.isEmpty() || modunit.isEmpty()){
        QMessageBox::warning(this,"Invalide","Tous les champs doivent etre remplis.");
    } else {
    if (modqtt.toInt() <= 0) {
        QMessageBox::warning(this,"Invalide de quantite","Quantité non valide.");
    } else {
        if (modpx.toFloat() <= 0) {
            QMessageBox::warning(this,"Invalide de prix","Prix non valide.");
        } else {
            if (this->db.connexionEstReucu(this->db.getBasedd())) {

                if ((db.refExiste(db.getBasedd(),"designation",moddes,"produits") && db.refExiste(db.getBasedd(),"reference",modref,"produits")) || (! (db.refExiste(db.getBasedd(),"designation",moddes,"produits")) && !(db.refExiste(db.getBasedd(),"reference",modref,"produits") )) ) {
                    db.misAjoursAllProduits(db.getBasedd(),modref,moddes,modqtt,modpx,modunit,getReference());
                    qDebug()<<getReference();
                    ui->modif_px_p->setValue(0);
                    ui->modif_des_p->setText("");
                    ui->modif_qtt_p->setValue(0);
                    ui->unite_p->setCurrentText("");
                    ui->modif_ref_p->setText("");
                    this->close();
                } else {
                    QMessageBox::warning(this,"Erreur de modification","Invalide de modification de produits !\n Verifier le Designation et le reference .\n\nNote : La reference et la designation doivent etre différent à la base si vous voulez la modifier !");
                }

                } else {
                    QMessageBox::warning(this,"Echec de connexion","Echec de connexion à la base de donnée .");
                }
            }
        }
    }
    w->actualiserStock();
    w->update();
}

QString Modif::getDesignations()
{
    return designations;
}

void Modif::setDesignations(QString value)
{
    designations = value;
}

void Modif::on_annulQt_clicked()
{
    this->close();
}

void Modif::on_validQt_clicked()
{
    if (ui->newqtt->text().isEmpty() || ui->newqtt->text().toInt() < 1) {
        QMessageBox::critical(this,"Null Quantite","Aucune quantite a ajouté .");
    } else {
        int newQtte;
        QString newQttt;
        if (db.connexionEstReucu(db.getBasedd())) {
            newQtte = this->getQuantiteActuel() + ui->newqtt->text().toInt() ;
            newQttt.setNum(newQtte);
            db.misAjourTableProduits(db.getBasedd(),newQttt,getReference());
            db.getBasedd().close();
        } else {
        }
        this->close();
    }
}

void Modif::on_annul_qtt_4_clicked()
{
    this->close();
}

void Modif::on_valider_qt_4_clicked()
{
    if (ui->qttStock->text().isEmpty() || ui->qttStock->text().toInt() < 1) {
        QMessageBox::critical(this,"Erreur quantite","Aucune quantite a ajouté .");
    } else {
        int newQtte;
        QString newQttt;
        if (db.connexionEstReucu(db.getBasedd())) {
            newQtte = ui->qttStock->text().toInt() ;
            newQttt.setNum(newQtte);
            db.misAjourTableProduits(db.getBasedd(),newQttt,getReference());
            db.getBasedd().close();
        } else {
        }
        this->close();
    }
}
