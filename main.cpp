#include "mainwindow.h"
#include "modif.h"
#include"gestart.h"
#include <QDateTime>
#include <QDebug>
#include <QMessageBox>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    GestArt *db = new GestArt ("QSQLITE","/gestart.db");
    if (db->connexionEstReucu(db->getBasedd())) {
        if (db->tableVide(db->getBasedd(),"id_user","comptUser")) {
            Modif *comptDmin = new Modif();
            comptDmin->modifier(5,"Compte Administrateur");
            comptDmin->show();
        } else {
            w.show();
        }
    } else {
     QMessageBox::critical(nullptr,"Echec de connexion","Il y a une erreur survenue lors de la connexion à la base !");
    }
    return a.exec();
}
