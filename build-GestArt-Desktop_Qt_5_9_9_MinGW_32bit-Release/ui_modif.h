/********************************************************************************
** Form generated from reading UI file 'modif.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIF_H
#define UI_MODIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Modif
{
public:
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *modiff;
    QWidget *Modif_all_produits;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_3;
    QSpinBox *modif_qtt;
    QLineEdit *modif_des;
    QLabel *label_6;
    QLabel *label_2;
    QDoubleSpinBox *modif_px;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *modif_ref;
    QComboBox *unite;
    QGroupBox *groupBox_7;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *annuler;
    QToolButton *valider;
    QWidget *Modif_quantite;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QSpinBox *modif_qt;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *annul_qtt;
    QToolButton *valider_qt;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_80;
    QGroupBox *groupBox_41;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_81;
    QSpinBox *qttStock;
    QGroupBox *groupBox_42;
    QHBoxLayout *horizontalLayout_24;
    QToolButton *annul_qtt_4;
    QToolButton *valider_qt_4;
    QWidget *page;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_51;
    QGroupBox *groupBox_25;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_52;
    QSpinBox *newqtt;
    QGroupBox *groupBox_26;
    QHBoxLayout *horizontalLayout_14;
    QToolButton *annulQt;
    QToolButton *validQt;
    QWidget *ajoutProduits;
    QVBoxLayout *verticalLayout;
    QLabel *label_27;
    QGroupBox *groupBox_16;
    QGridLayout *gridLayout_8;
    QSpinBox *modif_qtt_p;
    QLineEdit *modif_des_p;
    QLabel *label_28;
    QLabel *label_29;
    QDoubleSpinBox *modif_px_p;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *modif_ref_p;
    QComboBox *unite_p;
    QGroupBox *groupBox_17;
    QGroupBox *groupBox_15;
    QHBoxLayout *horizontalLayout_9;
    QToolButton *annuler_p;
    QToolButton *valider_p;
    QWidget *comptUser;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLineEdit *password;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *username;
    QLabel *label_10;
    QLineEdit *confpasswd;
    QComboBox *typeCompte;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLabel *label_5;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *annul_modif_user;
    QToolButton *valider_modif_user;
    QLabel *labelCompte;
    QWidget *nouveauVente;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_38;
    QGroupBox *groupBox_18;
    QGridLayout *gridLayout_9;
    QLabel *label_35;
    QLabel *label_36;
    QLineEdit *telCl;
    QLabel *label_37;
    QComboBox *clientListe;
    QLabel *actualiser;
    QLineEdit *nomCl;
    QLineEdit *adresseCl;
    QLabel *label_15;
    QGroupBox *groupBox_20;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *cancel;
    QToolButton *newClient;

    void setupUi(QFrame *Modif)
    {
        if (Modif->objectName().isEmpty())
            Modif->setObjectName(QStringLiteral("Modif"));
        Modif->resize(862, 367);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Modif->sizePolicy().hasHeightForWidth());
        Modif->setSizePolicy(sizePolicy);
        Modif->setMaximumSize(QSize(16777215, 400));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/icon/aloe3.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Modif->setWindowIcon(icon);
        Modif->setStyleSheet(QStringLiteral("background-color: rgb(37, 45, 50);"));
        verticalLayout_5 = new QVBoxLayout(Modif);
        verticalLayout_5->setSpacing(7);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 1, 2, 1);
        modiff = new QStackedWidget(Modif);
        modiff->setObjectName(QStringLiteral("modiff"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(modiff->sizePolicy().hasHeightForWidth());
        modiff->setSizePolicy(sizePolicy1);
        modiff->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(8);
        modiff->setFont(font);
        modiff->setLayoutDirection(Qt::LeftToRight);
        modiff->setStyleSheet(QLatin1String("background-color: rgb(37, 45, 50);\n"
"border-radius :3px;\n"
""));
        modiff->setFrameShape(QFrame::NoFrame);
        modiff->setFrameShadow(QFrame::Raised);
        modiff->setMidLineWidth(0);
        Modif_all_produits = new QWidget();
        Modif_all_produits->setObjectName(QStringLiteral("Modif_all_produits"));
        verticalLayout_2 = new QVBoxLayout(Modif_all_produits);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 1, -1, 0);
        label = new QLabel(Modif_all_produits);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft Tai Le"));
        font1.setPointSize(15);
        font1.setUnderline(true);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(167, 202, 238);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        groupBox_6 = new QGroupBox(Modif_all_produits);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        sizePolicy1.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy1);
        groupBox_6->setMaximumSize(QSize(16777215, 217));
        groupBox_6->setStyleSheet(QLatin1String("background-color: rgb(47, 53, 58);\n"
"border-radius :3px;"));
        gridLayout_3 = new QGridLayout(groupBox_6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(11);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(17, 5, 29, 1);
        modif_qtt = new QSpinBox(groupBox_6);
        modif_qtt->setObjectName(QStringLiteral("modif_qtt"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(modif_qtt->sizePolicy().hasHeightForWidth());
        modif_qtt->setSizePolicy(sizePolicy3);
        modif_qtt->setMaximumSize(QSize(350, 26));
        QFont font2;
        font2.setFamily(QStringLiteral("Consolas"));
        font2.setPointSize(14);
        modif_qtt->setFont(font2);
        modif_qtt->setStyleSheet(QLatin1String("#modif_qtt{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"border : 1px solid rgb(61, 77, 77);\n"
"background-color: rgb(42, 49, 55);\n"
"}\n"
"#modif_qtt:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));
        modif_qtt->setButtonSymbols(QAbstractSpinBox::NoButtons);
        modif_qtt->setMaximum(1000000);

        gridLayout_3->addWidget(modif_qtt, 2, 2, 1, 1);

        modif_des = new QLineEdit(groupBox_6);
        modif_des->setObjectName(QStringLiteral("modif_des"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(modif_des->sizePolicy().hasHeightForWidth());
        modif_des->setSizePolicy(sizePolicy4);
        modif_des->setMaximumSize(QSize(16777215, 27));
        QFont font3;
        font3.setFamily(QStringLiteral("Corbel"));
        font3.setPointSize(12);
        modif_des->setFont(font3);
        modif_des->setStyleSheet(QLatin1String("#modif_des{\n"
"color: rgb(231, 255, 254);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(42, 49, 55);\n"
"}\n"
"#modif_des:hover{\n"
"	color: rgb(5, 255, 247);\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));

        gridLayout_3->addWidget(modif_des, 0, 2, 1, 2);

        label_6 = new QLabel(groupBox_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);
        label_2->setMaximumSize(QSize(37, 16777215));
        QFont font4;
        font4.setFamily(QStringLiteral("Corbel"));
        font4.setPointSize(11);
        label_2->setFont(font4);
        label_2->setStyleSheet(QStringLiteral("color: rgb(164, 190, 207);"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 2, 4, 1, 1);

        modif_px = new QDoubleSpinBox(groupBox_6);
        modif_px->setObjectName(QStringLiteral("modif_px"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(modif_px->sizePolicy().hasHeightForWidth());
        modif_px->setSizePolicy(sizePolicy6);
        modif_px->setMaximumSize(QSize(16777215, 26));
        modif_px->setFont(font2);
        modif_px->setStyleSheet(QLatin1String("#modif_px{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"border : 1px solid rgb(61, 77, 77);\n"
"padding :3px;\n"
"background-color: rgb(42, 49, 55);\n"
"}\n"
"#modif_px:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));
        modif_px->setButtonSymbols(QAbstractSpinBox::NoButtons);
        modif_px->setDecimals(0);
        modif_px->setMaximum(1e+6);

        gridLayout_3->addWidget(modif_px, 3, 2, 1, 1);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        modif_ref = new QLineEdit(groupBox_6);
        modif_ref->setObjectName(QStringLiteral("modif_ref"));
        sizePolicy4.setHeightForWidth(modif_ref->sizePolicy().hasHeightForWidth());
        modif_ref->setSizePolicy(sizePolicy4);
        modif_ref->setMaximumSize(QSize(16777215, 26));
        QFont font5;
        font5.setFamily(QStringLiteral("Consolas"));
        font5.setPointSize(13);
        modif_ref->setFont(font5);
        modif_ref->setStyleSheet(QLatin1String("#modif_ref{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"border : 1px solid rgb(61, 77, 77);\n"
"padding :3px;\n"
"background-color: rgb(42, 49, 55);\n"
"}\n"
"#modif_ref:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));

        gridLayout_3->addWidget(modif_ref, 1, 2, 1, 2);

        unite = new QComboBox(groupBox_6);
        unite->setObjectName(QStringLiteral("unite"));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(unite->sizePolicy().hasHeightForWidth());
        unite->setSizePolicy(sizePolicy7);
        unite->setMaximumSize(QSize(122, 26));
        QFont font6;
        font6.setFamily(QStringLiteral("Corbel"));
        font6.setPointSize(14);
        unite->setFont(font6);
        unite->setStyleSheet(QLatin1String("#unite{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(42, 49, 55);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#unite:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));

        gridLayout_3->addWidget(unite, 2, 3, 1, 1);

        groupBox_7 = new QGroupBox(groupBox_6);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        groupBox_7->setMaximumSize(QSize(147, 107));
        QFont font7;
        font7.setUnderline(true);
        groupBox_7->setFont(font7);
        groupBox_7->setStyleSheet(QLatin1String("border-radius :5px;\n"
"color: rgb(255, 255, 255);\n"
"padding :3px;\n"
"background-color: rgb(50, 57, 62);"));
        groupBox_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(groupBox_7, 0, 5, 3, 1);


        verticalLayout_2->addWidget(groupBox_6);

        groupBox_2 = new QGroupBox(Modif_all_produits);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setMaximumSize(QSize(16777215, 50));
        groupBox_2->setStyleSheet(QStringLiteral("border-radius : 2px;"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(81);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(60, 0, 60, 0);
        annuler = new QToolButton(groupBox_2);
        annuler->setObjectName(QStringLiteral("annuler"));
        sizePolicy1.setHeightForWidth(annuler->sizePolicy().hasHeightForWidth());
        annuler->setSizePolicy(sizePolicy1);
        annuler->setMaximumSize(QSize(16777215, 28));
        QFont font8;
        font8.setFamily(QStringLiteral("Corbel"));
        font8.setPointSize(13);
        annuler->setFont(font8);
        annuler->setStyleSheet(QLatin1String("#annuler:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :4px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"#annuler{\n"
"	color: rgb(216, 250, 255);\n"
"border-radius :4px;\n"
"background-color: rgb(59, 68, 77);\n"
"}"));

        horizontalLayout->addWidget(annuler);

        valider = new QToolButton(groupBox_2);
        valider->setObjectName(QStringLiteral("valider"));
        sizePolicy7.setHeightForWidth(valider->sizePolicy().hasHeightForWidth());
        valider->setSizePolicy(sizePolicy7);
        valider->setMaximumSize(QSize(16777215, 28));
        valider->setFont(font8);
        valider->setStyleSheet(QLatin1String("\n"
"#valider:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :4px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"#valider{\n"
"	color: rgb(203, 240, 255);\n"
"border-radius :4px;\n"
"background-color: rgb(59, 68, 77);\n"
"}"));

        horizontalLayout->addWidget(valider);


        verticalLayout_2->addWidget(groupBox_2);

        modiff->addWidget(Modif_all_produits);
        Modif_quantite = new QWidget();
        Modif_quantite->setObjectName(QStringLiteral("Modif_quantite"));
        verticalLayout_3 = new QVBoxLayout(Modif_quantite);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(Modif_quantite);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMaximumSize(QSize(16777215, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: rgb(167, 202, 238);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        groupBox = new QGroupBox(Modif_quantite);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMaximumSize(QSize(16777215, 602));
        groupBox->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.221, y1:0.5, x2:0.784, y2:0.488818, stop:0.119617 rgba(36, 50, 52, 55), stop:0.588517 rgba(64, 73, 84, 80));"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(12);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(78, 0, 223, 8);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(16777215, 28));
        label_9->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;\n"
"background-color: none;"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_9);

        modif_qt = new QSpinBox(groupBox);
        modif_qt->setObjectName(QStringLiteral("modif_qt"));
        sizePolicy2.setHeightForWidth(modif_qt->sizePolicy().hasHeightForWidth());
        modif_qt->setSizePolicy(sizePolicy2);
        modif_qt->setMaximumSize(QSize(333, 32));
        modif_qt->setFont(font5);
        modif_qt->setStyleSheet(QLatin1String("\n"
"#modif_qt:hover{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 5px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.221, y1:0.5, x2:0.784, y2:0.488818, stop:0.119617 rgba(32, 45, 46, 55), stop:0.866029 rgba(34, 48, 45, 57));\n"
"border : 1px solid rgb(103, 117, 126)\n"
"}\n"
"#modif_qt{\n"
"padding :3px;\n"
"border : 1px solid rgb(61, 77, 77);\n"
"	color: rgb(174, 216, 231);\n"
"}"));
        modif_qt->setButtonSymbols(QAbstractSpinBox::NoButtons);
        modif_qt->setMinimum(0);
        modif_qt->setMaximum(1000000);

        horizontalLayout_3->addWidget(modif_qt);


        verticalLayout_3->addWidget(groupBox);

        groupBox_3 = new QGroupBox(Modif_quantite);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy4.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy4);
        groupBox_3->setMaximumSize(QSize(16777215, 33));
        groupBox_3->setStyleSheet(QStringLiteral("border-radius : 5px;"));
        groupBox_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setSpacing(130);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(40, 0, 40, 0);
        annul_qtt = new QToolButton(groupBox_3);
        annul_qtt->setObjectName(QStringLiteral("annul_qtt"));
        sizePolicy.setHeightForWidth(annul_qtt->sizePolicy().hasHeightForWidth());
        annul_qtt->setSizePolicy(sizePolicy);
        annul_qtt->setMaximumSize(QSize(16777215, 28));
        annul_qtt->setFont(font8);
        annul_qtt->setStyleSheet(QLatin1String("#annul_qtt:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :3px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"#annul_qtt{\n"
"background-color: rgb(56, 62, 68);\n"
"	color: rgb(138, 154, 168);\n"
"}"));

        horizontalLayout_2->addWidget(annul_qtt);

        valider_qt = new QToolButton(groupBox_3);
        valider_qt->setObjectName(QStringLiteral("valider_qt"));
        sizePolicy.setHeightForWidth(valider_qt->sizePolicy().hasHeightForWidth());
        valider_qt->setSizePolicy(sizePolicy);
        valider_qt->setMaximumSize(QSize(16777215, 29));
        valider_qt->setFont(font8);
        valider_qt->setStyleSheet(QLatin1String("#valider_qt:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :3px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"\n"
"#valider_qt{\n"
"background-color: rgb(56, 62, 68);\n"
"color: rgb(138, 154, 168);\n"
"}"));

        horizontalLayout_2->addWidget(valider_qt);


        verticalLayout_3->addWidget(groupBox_3);

        modiff->addWidget(Modif_quantite);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_15 = new QVBoxLayout(page_3);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        label_80 = new QLabel(page_3);
        label_80->setObjectName(QStringLiteral("label_80"));
        sizePolicy2.setHeightForWidth(label_80->sizePolicy().hasHeightForWidth());
        label_80->setSizePolicy(sizePolicy2);
        label_80->setMaximumSize(QSize(16777215, 20));
        label_80->setFont(font1);
        label_80->setStyleSheet(QStringLiteral("color: rgb(167, 202, 238);"));
        label_80->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(label_80);

        groupBox_41 = new QGroupBox(page_3);
        groupBox_41->setObjectName(QStringLiteral("groupBox_41"));
        sizePolicy1.setHeightForWidth(groupBox_41->sizePolicy().hasHeightForWidth());
        groupBox_41->setSizePolicy(sizePolicy1);
        groupBox_41->setMaximumSize(QSize(16777215, 602));
        groupBox_41->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.221, y1:0.5, x2:0.784, y2:0.488818, stop:0.119617 rgba(36, 50, 52, 55), stop:0.588517 rgba(64, 73, 84, 80));"));
        horizontalLayout_23 = new QHBoxLayout(groupBox_41);
        horizontalLayout_23->setSpacing(12);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(78, 0, 223, 8);
        label_81 = new QLabel(groupBox_41);
        label_81->setObjectName(QStringLiteral("label_81"));
        label_81->setMaximumSize(QSize(16777215, 28));
        label_81->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;\n"
"background-color: none;"));
        label_81->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_81);

        qttStock = new QSpinBox(groupBox_41);
        qttStock->setObjectName(QStringLiteral("qttStock"));
        sizePolicy2.setHeightForWidth(qttStock->sizePolicy().hasHeightForWidth());
        qttStock->setSizePolicy(sizePolicy2);
        qttStock->setMaximumSize(QSize(333, 30));
        qttStock->setFont(font5);
        qttStock->setStyleSheet(QLatin1String("\n"
"#qttStock:hover{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 5px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.221, y1:0.5, x2:0.784, y2:0.488818, stop:0.119617 rgba(32, 45, 46, 55), stop:0.866029 rgba(34, 48, 45, 57));\n"
"border : 1px solid rgb(103, 117, 126)\n"
"}\n"
"#qttStock{\n"
"padding :3px;\n"
"border : 1px solid rgb(61, 77, 77);\n"
"	color: rgb(174, 216, 231);\n"
"}"));
        qttStock->setButtonSymbols(QAbstractSpinBox::NoButtons);
        qttStock->setMinimum(0);
        qttStock->setMaximum(1000000);

        horizontalLayout_23->addWidget(qttStock);


        verticalLayout_15->addWidget(groupBox_41);

        groupBox_42 = new QGroupBox(page_3);
        groupBox_42->setObjectName(QStringLiteral("groupBox_42"));
        sizePolicy4.setHeightForWidth(groupBox_42->sizePolicy().hasHeightForWidth());
        groupBox_42->setSizePolicy(sizePolicy4);
        groupBox_42->setMaximumSize(QSize(16777215, 33));
        groupBox_42->setStyleSheet(QStringLiteral("border-radius : 5px;"));
        groupBox_42->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        horizontalLayout_24 = new QHBoxLayout(groupBox_42);
        horizontalLayout_24->setSpacing(130);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(40, 0, 40, 0);
        annul_qtt_4 = new QToolButton(groupBox_42);
        annul_qtt_4->setObjectName(QStringLiteral("annul_qtt_4"));
        sizePolicy.setHeightForWidth(annul_qtt_4->sizePolicy().hasHeightForWidth());
        annul_qtt_4->setSizePolicy(sizePolicy);
        annul_qtt_4->setMaximumSize(QSize(16777215, 28));
        annul_qtt_4->setFont(font8);
        annul_qtt_4->setStyleSheet(QLatin1String("#annul_qtt_4:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :3px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"#annul_qtt_4{\n"
"background-color: rgb(56, 62, 68);\n"
"	color: rgb(138, 154, 168);\n"
"}"));

        horizontalLayout_24->addWidget(annul_qtt_4);

        valider_qt_4 = new QToolButton(groupBox_42);
        valider_qt_4->setObjectName(QStringLiteral("valider_qt_4"));
        sizePolicy.setHeightForWidth(valider_qt_4->sizePolicy().hasHeightForWidth());
        valider_qt_4->setSizePolicy(sizePolicy);
        valider_qt_4->setMaximumSize(QSize(16777215, 29));
        valider_qt_4->setFont(font8);
        valider_qt_4->setStyleSheet(QLatin1String("#valider_qt_4:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :3px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"\n"
"#valider_qt_4{\n"
"background-color: rgb(56, 62, 68);\n"
"color: rgb(138, 154, 168);\n"
"}"));

        horizontalLayout_24->addWidget(valider_qt_4);


        verticalLayout_15->addWidget(groupBox_42);

        modiff->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_9 = new QVBoxLayout(page);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_51 = new QLabel(page);
        label_51->setObjectName(QStringLiteral("label_51"));
        sizePolicy2.setHeightForWidth(label_51->sizePolicy().hasHeightForWidth());
        label_51->setSizePolicy(sizePolicy2);
        label_51->setMaximumSize(QSize(16777215, 20));
        label_51->setFont(font1);
        label_51->setStyleSheet(QStringLiteral("color: rgb(167, 202, 238);"));
        label_51->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_51);

        groupBox_25 = new QGroupBox(page);
        groupBox_25->setObjectName(QStringLiteral("groupBox_25"));
        sizePolicy1.setHeightForWidth(groupBox_25->sizePolicy().hasHeightForWidth());
        groupBox_25->setSizePolicy(sizePolicy1);
        groupBox_25->setMaximumSize(QSize(16777215, 602));
        groupBox_25->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.221, y1:0.5, x2:0.784, y2:0.488818, stop:0.119617 rgba(36, 50, 52, 55), stop:0.588517 rgba(64, 73, 84, 80));"));
        horizontalLayout_13 = new QHBoxLayout(groupBox_25);
        horizontalLayout_13->setSpacing(12);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(78, 0, 223, 8);
        label_52 = new QLabel(groupBox_25);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setMaximumSize(QSize(16777215, 28));
        label_52->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;\n"
"background-color: none;"));
        label_52->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_52);

        newqtt = new QSpinBox(groupBox_25);
        newqtt->setObjectName(QStringLiteral("newqtt"));
        sizePolicy2.setHeightForWidth(newqtt->sizePolicy().hasHeightForWidth());
        newqtt->setSizePolicy(sizePolicy2);
        newqtt->setMaximumSize(QSize(333, 30));
        newqtt->setFont(font5);
        newqtt->setStyleSheet(QLatin1String("\n"
"#newqtt:hover{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 5px;\n"
"	background-color: qlineargradient(spread:pad, x1:0.221, y1:0.5, x2:0.784, y2:0.488818, stop:0.119617 rgba(32, 45, 46, 55), stop:0.866029 rgba(34, 48, 45, 57));\n"
"border : 1px solid rgb(103, 117, 126)\n"
"}\n"
"#newqtt{\n"
"padding :3px;\n"
"border : 1px solid rgb(61, 77, 77);\n"
"	color: rgb(174, 216, 231);\n"
"}"));
        newqtt->setButtonSymbols(QAbstractSpinBox::NoButtons);
        newqtt->setMinimum(0);
        newqtt->setMaximum(1000000);

        horizontalLayout_13->addWidget(newqtt);


        verticalLayout_9->addWidget(groupBox_25);

        groupBox_26 = new QGroupBox(page);
        groupBox_26->setObjectName(QStringLiteral("groupBox_26"));
        sizePolicy4.setHeightForWidth(groupBox_26->sizePolicy().hasHeightForWidth());
        groupBox_26->setSizePolicy(sizePolicy4);
        groupBox_26->setMaximumSize(QSize(16777215, 33));
        groupBox_26->setStyleSheet(QStringLiteral("border-radius : 5px;"));
        groupBox_26->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        horizontalLayout_14 = new QHBoxLayout(groupBox_26);
        horizontalLayout_14->setSpacing(130);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(40, 0, 40, 0);
        annulQt = new QToolButton(groupBox_26);
        annulQt->setObjectName(QStringLiteral("annulQt"));
        sizePolicy.setHeightForWidth(annulQt->sizePolicy().hasHeightForWidth());
        annulQt->setSizePolicy(sizePolicy);
        annulQt->setMaximumSize(QSize(16777215, 28));
        annulQt->setFont(font8);
        annulQt->setStyleSheet(QLatin1String("#annulQt:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :3px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"#annulQt{\n"
"background-color: rgb(56, 62, 68);\n"
"	color: rgb(138, 154, 168);\n"
"}"));

        horizontalLayout_14->addWidget(annulQt);

        validQt = new QToolButton(groupBox_26);
        validQt->setObjectName(QStringLiteral("validQt"));
        sizePolicy.setHeightForWidth(validQt->sizePolicy().hasHeightForWidth());
        validQt->setSizePolicy(sizePolicy);
        validQt->setMaximumSize(QSize(16777215, 29));
        validQt->setFont(font8);
        validQt->setStyleSheet(QLatin1String("#validQt:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :3px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"\n"
"#validQt{\n"
"background-color: rgb(56, 62, 68);\n"
"color: rgb(138, 154, 168);\n"
"}"));

        horizontalLayout_14->addWidget(validQt);


        verticalLayout_9->addWidget(groupBox_26);

        modiff->addWidget(page);
        ajoutProduits = new QWidget();
        ajoutProduits->setObjectName(QStringLiteral("ajoutProduits"));
        verticalLayout = new QVBoxLayout(ajoutProduits);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 10, -1, -1);
        label_27 = new QLabel(ajoutProduits);
        label_27->setObjectName(QStringLiteral("label_27"));
        sizePolicy2.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy2);
        label_27->setMaximumSize(QSize(16777215, 20));
        label_27->setFont(font1);
        label_27->setStyleSheet(QStringLiteral("color: rgb(167, 202, 238);"));
        label_27->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_27);

        groupBox_16 = new QGroupBox(ajoutProduits);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        sizePolicy1.setHeightForWidth(groupBox_16->sizePolicy().hasHeightForWidth());
        groupBox_16->setSizePolicy(sizePolicy1);
        groupBox_16->setMaximumSize(QSize(16777215, 16777215));
        groupBox_16->setStyleSheet(QLatin1String("background-color: rgb(30, 37, 42);\n"
"border-radius :6px;"));
        gridLayout_8 = new QGridLayout(groupBox_16);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(11);
        gridLayout_8->setVerticalSpacing(0);
        gridLayout_8->setContentsMargins(12, 10, 24, 1);
        modif_qtt_p = new QSpinBox(groupBox_16);
        modif_qtt_p->setObjectName(QStringLiteral("modif_qtt_p"));
        sizePolicy3.setHeightForWidth(modif_qtt_p->sizePolicy().hasHeightForWidth());
        modif_qtt_p->setSizePolicy(sizePolicy3);
        modif_qtt_p->setMaximumSize(QSize(350, 32));
        modif_qtt_p->setFont(font2);
        modif_qtt_p->setStyleSheet(QLatin1String("#modif_qtt_p{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(30, 40, 45);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#modif_qtt_p:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));
        modif_qtt_p->setButtonSymbols(QAbstractSpinBox::NoButtons);
        modif_qtt_p->setMaximum(1000000);

        gridLayout_8->addWidget(modif_qtt_p, 2, 2, 1, 1);

        modif_des_p = new QLineEdit(groupBox_16);
        modif_des_p->setObjectName(QStringLiteral("modif_des_p"));
        sizePolicy4.setHeightForWidth(modif_des_p->sizePolicy().hasHeightForWidth());
        modif_des_p->setSizePolicy(sizePolicy4);
        modif_des_p->setMaximumSize(QSize(16777215, 32));
        modif_des_p->setFont(font3);
        modif_des_p->setStyleSheet(QLatin1String("#modif_des_p{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(30, 40, 45);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#modif_des_p:hover{\n"
"	color: rgb(5, 255, 247);\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));

        gridLayout_8->addWidget(modif_des_p, 0, 2, 1, 2);

        label_28 = new QLabel(groupBox_16);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_8->addWidget(label_28, 3, 0, 1, 1);

        label_29 = new QLabel(groupBox_16);
        label_29->setObjectName(QStringLiteral("label_29"));
        sizePolicy5.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy5);
        label_29->setMaximumSize(QSize(37, 16777215));
        label_29->setFont(font4);
        label_29->setStyleSheet(QStringLiteral("color: rgb(179, 205, 221);"));
        label_29->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_29, 2, 4, 1, 1);

        modif_px_p = new QDoubleSpinBox(groupBox_16);
        modif_px_p->setObjectName(QStringLiteral("modif_px_p"));
        sizePolicy6.setHeightForWidth(modif_px_p->sizePolicy().hasHeightForWidth());
        modif_px_p->setSizePolicy(sizePolicy6);
        modif_px_p->setMaximumSize(QSize(16777215, 32));
        modif_px_p->setFont(font2);
        modif_px_p->setStyleSheet(QLatin1String("#modif_px_p{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(30, 40, 45);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#modif_px_p:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));
        modif_px_p->setButtonSymbols(QAbstractSpinBox::NoButtons);
        modif_px_p->setDecimals(0);
        modif_px_p->setMaximum(1e+6);

        gridLayout_8->addWidget(modif_px_p, 3, 2, 1, 1);

        label_30 = new QLabel(groupBox_16);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_8->addWidget(label_30, 0, 0, 1, 1);

        label_31 = new QLabel(groupBox_16);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_8->addWidget(label_31, 1, 0, 1, 1);

        label_32 = new QLabel(groupBox_16);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_8->addWidget(label_32, 2, 0, 1, 1);

        modif_ref_p = new QLineEdit(groupBox_16);
        modif_ref_p->setObjectName(QStringLiteral("modif_ref_p"));
        sizePolicy4.setHeightForWidth(modif_ref_p->sizePolicy().hasHeightForWidth());
        modif_ref_p->setSizePolicy(sizePolicy4);
        modif_ref_p->setMaximumSize(QSize(16777215, 32));
        modif_ref_p->setFont(font5);
        modif_ref_p->setStyleSheet(QLatin1String("#modif_ref_p{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(30, 40, 45);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#modif_ref_p:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));

        gridLayout_8->addWidget(modif_ref_p, 1, 2, 1, 2);

        unite_p = new QComboBox(groupBox_16);
        unite_p->setObjectName(QStringLiteral("unite_p"));
        sizePolicy7.setHeightForWidth(unite_p->sizePolicy().hasHeightForWidth());
        unite_p->setSizePolicy(sizePolicy7);
        unite_p->setMaximumSize(QSize(122, 32));
        unite_p->setFont(font6);
        unite_p->setStyleSheet(QLatin1String("#unite_p{\n"
"	color: rgb(130, 164, 189);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(30, 40, 45);\n"
"	color: rgb(222, 255, 255);\n"
"	selection-background-color: rgb(1, 152, 135);\n"
"	selection-color: rgb(126, 126, 102);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#unite_p:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));

        gridLayout_8->addWidget(unite_p, 2, 3, 1, 1);

        groupBox_17 = new QGroupBox(groupBox_16);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        sizePolicy1.setHeightForWidth(groupBox_17->sizePolicy().hasHeightForWidth());
        groupBox_17->setSizePolicy(sizePolicy1);
        groupBox_17->setMaximumSize(QSize(147, 107));
        groupBox_17->setFont(font7);
        groupBox_17->setStyleSheet(QLatin1String("border-radius :5px;\n"
"color: rgb(255, 255, 255);\n"
"padding :3px;\n"
"background-color: rgb(30, 38, 44);"));
        groupBox_17->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(groupBox_17, 0, 5, 3, 1);


        verticalLayout->addWidget(groupBox_16);

        groupBox_15 = new QGroupBox(ajoutProduits);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        sizePolicy2.setHeightForWidth(groupBox_15->sizePolicy().hasHeightForWidth());
        groupBox_15->setSizePolicy(sizePolicy2);
        groupBox_15->setMaximumSize(QSize(16777215, 50));
        groupBox_15->setStyleSheet(QStringLiteral("border-radius : 2px;"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_15);
        horizontalLayout_9->setSpacing(81);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(60, 0, 60, 0);
        annuler_p = new QToolButton(groupBox_15);
        annuler_p->setObjectName(QStringLiteral("annuler_p"));
        sizePolicy1.setHeightForWidth(annuler_p->sizePolicy().hasHeightForWidth());
        annuler_p->setSizePolicy(sizePolicy1);
        annuler_p->setMaximumSize(QSize(16777215, 32));
        annuler_p->setFont(font8);
        annuler_p->setStyleSheet(QLatin1String("#annuler_p:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :4px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"#annuler_p{\n"
"	color: rgb(216, 250, 255);\n"
"border-radius :4px;\n"
"background-color: rgb(59, 68, 77);\n"
"}"));

        horizontalLayout_9->addWidget(annuler_p);

        valider_p = new QToolButton(groupBox_15);
        valider_p->setObjectName(QStringLiteral("valider_p"));
        sizePolicy7.setHeightForWidth(valider_p->sizePolicy().hasHeightForWidth());
        valider_p->setSizePolicy(sizePolicy7);
        valider_p->setMaximumSize(QSize(16777215, 33));
        valider_p->setFont(font8);
        valider_p->setStyleSheet(QLatin1String("\n"
"#valider_p:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :4px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"#valider_p{\n"
"	color: rgb(203, 240, 255);\n"
"border-radius :4px;\n"
"background-color: rgb(59, 68, 77);\n"
"}"));

        horizontalLayout_9->addWidget(valider_p);


        verticalLayout->addWidget(groupBox_15);

        modiff->addWidget(ajoutProduits);
        comptUser = new QWidget();
        comptUser->setObjectName(QStringLiteral("comptUser"));
        gridLayout_4 = new QGridLayout(comptUser);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(7);
        gridLayout_4->setVerticalSpacing(3);
        gridLayout_4->setContentsMargins(4, 5, 8, 2);
        groupBox_4 = new QGroupBox(comptUser);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        groupBox_4->setMaximumSize(QSize(16777215, 615));
        groupBox_4->setStyleSheet(QLatin1String("background-color: rgb(30, 40, 45);\n"
"color: rgb(255, 255, 255);\n"
"border-radius :3px;\n"
"padding :3px;\n"
""));
        groupBox_4->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(19);
        gridLayout->setVerticalSpacing(11);
        gridLayout->setContentsMargins(12, 1, 13, 3);
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        password = new QLineEdit(groupBox_4);
        password->setObjectName(QStringLiteral("password"));
        password->setMaximumSize(QSize(16777215, 28));
        password->setFont(font8);
        password->setStyleSheet(QLatin1String("#password:hover{\n"
"	border-radius :5px;\n"
"border : 1px solid rgb(115, 132, 153);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.573636, x2:1, y2:0.545, stop:0.162679 rgba(29, 43, 46, 83), stop:0.698565 rgba(29, 43, 46, 141));\n"
"}\n"
"#password{\n"
"border-radius :5px;\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}"));
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 3, 1, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout->addWidget(label_14, 1, 0, 1, 1);

        username = new QLineEdit(groupBox_4);
        username->setObjectName(QStringLiteral("username"));
        username->setMaximumSize(QSize(16777215, 28));
        username->setFont(font8);
        username->setStyleSheet(QLatin1String("#username:hover{\n"
"	border-radius :5px;\n"
"border : 1px solid rgb(115, 132, 153);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.573636, x2:1, y2:0.545, stop:0.162679 rgba(29, 43, 46, 83), stop:0.698565 rgba(29, 43, 46, 141));\n"
"}\n"
"#username{\n"
"border : 1px solid rgb(61, 77, 77);\n"
"border-radius :5px;\n"
"}"));

        gridLayout->addWidget(username, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMaximumSize(QSize(16777215, 27));
        label_10->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        confpasswd = new QLineEdit(groupBox_4);
        confpasswd->setObjectName(QStringLiteral("confpasswd"));
        confpasswd->setMaximumSize(QSize(16777215, 29));
        confpasswd->setFont(font8);
        confpasswd->setStyleSheet(QLatin1String("#confpasswd:hover{\n"
"	border-radius :5px;\n"
"border : 1px solid rgb(115, 132, 153);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.573636, x2:1, y2:0.545, stop:0.162679 rgba(29, 43, 46, 83), stop:0.698565 rgba(29, 43, 46, 141));\n"
"}\n"
"#confpasswd{\n"
"border-radius :5px;\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}"));
        confpasswd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(confpasswd, 4, 1, 1, 1);

        typeCompte = new QComboBox(groupBox_4);
        typeCompte->setObjectName(QStringLiteral("typeCompte"));
        sizePolicy4.setHeightForWidth(typeCompte->sizePolicy().hasHeightForWidth());
        typeCompte->setSizePolicy(sizePolicy4);
        typeCompte->setMaximumSize(QSize(130, 28));
        typeCompte->setStyleSheet(QLatin1String("#typeCompte:hover{\n"
"	border-radius :5px;\n"
"border : 1px solid rgb(115, 132, 153);\n"
"}\n"
"#typeCompte{\n"
"border : 1px solid rgb(61, 77, 77);\n"
"	background-color: rgb(37, 45, 50);\n"
"border-radius :5px;\n"
"	color: rgb(141, 195, 206);\n"
"font: 12pt \"Corbel\";\n"
"padding : 5px;\n"
"}"));

        gridLayout->addWidget(typeCompte, 2, 2, 1, 1);

        nom = new QLineEdit(groupBox_4);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setMaximumSize(QSize(16777215, 28));
        QFont font9;
        font9.setFamily(QStringLiteral("Corbel"));
        font9.setPointSize(13);
        font9.setUnderline(false);
        nom->setFont(font9);
        nom->setStyleSheet(QLatin1String("#nom:hover{\n"
"	border-radius :5px;\n"
"border : 1px solid rgb(115, 132, 153);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.573636, x2:1, y2:0.545, stop:0.162679 rgba(29, 43, 46, 83), stop:0.698565 rgba(29, 43, 46, 141));\n"
"}\n"
"#nom{\n"
"border-radius :5px;\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}"));

        gridLayout->addWidget(nom, 0, 1, 1, 1);

        prenom = new QLineEdit(groupBox_4);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setMaximumSize(QSize(16777215, 28));
        prenom->setFont(font8);
        prenom->setStyleSheet(QLatin1String("#prenom:hover{\n"
"	border-radius :5px;\n"
"border : 1px solid rgb(115, 132, 153);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.573636, x2:1, y2:0.545, stop:0.162679 rgba(29, 43, 46, 83), stop:0.698565 rgba(29, 43, 46, 141));\n"
"}\n"
"#prenom{\n"
"border-radius :5px;\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}"));

        gridLayout->addWidget(prenom, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMaximumSize(QSize(16777215, 28));
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("color: rgb(187, 203, 206);"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(comptUser);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setMaximumSize(QSize(16777215, 50));
        groupBox_5->setStyleSheet(QLatin1String("border-radius : 5px;\n"
"background-color: rgb(37, 45, 50);\n"
"color: rgb(255, 255, 255);"));
        groupBox_5->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        horizontalLayout_5 = new QHBoxLayout(groupBox_5);
        horizontalLayout_5->setSpacing(111);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(40, 0, 40, 0);
        annul_modif_user = new QToolButton(groupBox_5);
        annul_modif_user->setObjectName(QStringLiteral("annul_modif_user"));
        sizePolicy.setHeightForWidth(annul_modif_user->sizePolicy().hasHeightForWidth());
        annul_modif_user->setSizePolicy(sizePolicy);
        annul_modif_user->setMaximumSize(QSize(16777215, 29));
        annul_modif_user->setFont(font8);
        annul_modif_user->setStyleSheet(QLatin1String("#annul_modif_user:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :3px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"#annul_modif_user{\n"
"background-color: rgb(56, 62, 68);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.573636, x2:1, y2:0.545, stop:0.133971 rgba(21, 35, 40, 122), stop:0.77512 rgba(14, 23, 26, 144));\n"
"border : 1px solid rgb(115, 132, 153);\n"
"}"));

        horizontalLayout_5->addWidget(annul_modif_user);

        valider_modif_user = new QToolButton(groupBox_5);
        valider_modif_user->setObjectName(QStringLiteral("valider_modif_user"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(1);
        sizePolicy8.setHeightForWidth(valider_modif_user->sizePolicy().hasHeightForWidth());
        valider_modif_user->setSizePolicy(sizePolicy8);
        valider_modif_user->setMaximumSize(QSize(16777215, 29));
        valider_modif_user->setFont(font8);
        valider_modif_user->setStyleSheet(QLatin1String("#valider_modif_user:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :3px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"\n"
"#valider_modif_user{\n"
"background-color: rgb(56, 62, 68);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.573636, x2:1, y2:0.545, stop:0.133971 rgba(21, 35, 40, 122), stop:0.77512 rgba(14, 23, 26, 144));\n"
"border : 1px solid rgb(115, 132, 153);\n"
"}"));
        valider_modif_user->setIconSize(QSize(16, 16));
        valider_modif_user->setAutoRepeatDelay(300);
        valider_modif_user->setAutoRepeatInterval(100);
        valider_modif_user->setPopupMode(QToolButton::DelayedPopup);
        valider_modif_user->setArrowType(Qt::NoArrow);

        horizontalLayout_5->addWidget(valider_modif_user);


        gridLayout_4->addWidget(groupBox_5, 2, 0, 1, 1);

        labelCompte = new QLabel(comptUser);
        labelCompte->setObjectName(QStringLiteral("labelCompte"));
        sizePolicy2.setHeightForWidth(labelCompte->sizePolicy().hasHeightForWidth());
        labelCompte->setSizePolicy(sizePolicy2);
        labelCompte->setMaximumSize(QSize(16777215, 30));
        labelCompte->setFont(font1);
        labelCompte->setStyleSheet(QStringLiteral("color: rgb(167, 202, 238);"));
        labelCompte->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(labelCompte, 0, 0, 1, 1);

        modiff->addWidget(comptUser);
        nouveauVente = new QWidget();
        nouveauVente->setObjectName(QStringLiteral("nouveauVente"));
        verticalLayout_4 = new QVBoxLayout(nouveauVente);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_38 = new QLabel(nouveauVente);
        label_38->setObjectName(QStringLiteral("label_38"));
        sizePolicy2.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy2);
        label_38->setMaximumSize(QSize(16777215, 20));
        label_38->setFont(font1);
        label_38->setStyleSheet(QStringLiteral("color: rgb(167, 202, 238);"));
        label_38->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_38);

        groupBox_18 = new QGroupBox(nouveauVente);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        sizePolicy1.setHeightForWidth(groupBox_18->sizePolicy().hasHeightForWidth());
        groupBox_18->setSizePolicy(sizePolicy1);
        groupBox_18->setMaximumSize(QSize(16777215, 217));
        groupBox_18->setStyleSheet(QLatin1String("background-color: rgb(47, 53, 58);\n"
"border-radius :3px;"));
        gridLayout_9 = new QGridLayout(groupBox_18);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(7);
        gridLayout_9->setVerticalSpacing(0);
        gridLayout_9->setContentsMargins(17, 3, 29, 1);
        label_35 = new QLabel(groupBox_18);
        label_35->setObjectName(QStringLiteral("label_35"));
        sizePolicy.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy);
        label_35->setMaximumSize(QSize(16777215, 30));
        QFont font10;
        font10.setFamily(QStringLiteral("Corbel"));
        font10.setPointSize(11);
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(50);
        label_35->setFont(font10);
        label_35->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_9->addWidget(label_35, 0, 0, 1, 1);

        label_36 = new QLabel(groupBox_18);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setMaximumSize(QSize(16777215, 30));
        label_36->setFont(font10);
        label_36->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_9->addWidget(label_36, 1, 0, 1, 1);

        telCl = new QLineEdit(groupBox_18);
        telCl->setObjectName(QStringLiteral("telCl"));
        telCl->setMaximumSize(QSize(16777215, 30));
        telCl->setFont(font8);
        telCl->setStyleSheet(QLatin1String("#telCl{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(42, 49, 55);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#telCl:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));

        gridLayout_9->addWidget(telCl, 2, 2, 1, 1);

        label_37 = new QLabel(groupBox_18);
        label_37->setObjectName(QStringLiteral("label_37"));
        sizePolicy.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy);
        label_37->setMaximumSize(QSize(16777215, 30));
        label_37->setFont(font10);
        label_37->setStyleSheet(QLatin1String("color: rgb(243, 249, 255);\n"
"font: 11pt \"Corbel\";\n"
"border-radius :3px;\n"
"padding : 2px;"));

        gridLayout_9->addWidget(label_37, 2, 0, 1, 1);

        clientListe = new QComboBox(groupBox_18);
        clientListe->setObjectName(QStringLiteral("clientListe"));
        sizePolicy7.setHeightForWidth(clientListe->sizePolicy().hasHeightForWidth());
        clientListe->setSizePolicy(sizePolicy7);
        clientListe->setMaximumSize(QSize(122, 26));
        clientListe->setFont(font6);
        clientListe->setStyleSheet(QLatin1String("#clientListe{\n"
"	color: rgb(130, 164, 189);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(42, 49, 55);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#clientListe:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));

        gridLayout_9->addWidget(clientListe, 2, 3, 1, 1);

        actualiser = new QLabel(groupBox_18);
        actualiser->setObjectName(QStringLiteral("actualiser"));
        sizePolicy5.setHeightForWidth(actualiser->sizePolicy().hasHeightForWidth());
        actualiser->setSizePolicy(sizePolicy5);
        actualiser->setMaximumSize(QSize(33, 16777215));
        actualiser->setFont(font4);
        actualiser->setStyleSheet(QLatin1String("\n"
"#actualiser{\n"
"	color: rgb(130, 164, 189);\n"
"border-radius :8px;\n"
"padding :3px;\n"
"image: url(:/img/icon/actualiser.png);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#actualiser:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));
        actualiser->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_9->addWidget(actualiser, 2, 4, 1, 1);

        nomCl = new QLineEdit(groupBox_18);
        nomCl->setObjectName(QStringLiteral("nomCl"));
        sizePolicy4.setHeightForWidth(nomCl->sizePolicy().hasHeightForWidth());
        nomCl->setSizePolicy(sizePolicy4);
        nomCl->setMaximumSize(QSize(16777215, 30));
        nomCl->setFont(font8);
        nomCl->setStyleSheet(QLatin1String("#nomCl{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(42, 49, 55);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#nomCl:hover{\n"
"	color: rgb(5, 255, 247);\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));

        gridLayout_9->addWidget(nomCl, 0, 2, 1, 1);

        adresseCl = new QLineEdit(groupBox_18);
        adresseCl->setObjectName(QStringLiteral("adresseCl"));
        sizePolicy4.setHeightForWidth(adresseCl->sizePolicy().hasHeightForWidth());
        adresseCl->setSizePolicy(sizePolicy4);
        adresseCl->setMaximumSize(QSize(16777215, 31));
        adresseCl->setFont(font8);
        adresseCl->setStyleSheet(QLatin1String("#adresseCl{\n"
"color: rgb(231, 255, 254);\n"
"border-radius : 4px;\n"
"padding :3px;\n"
"background-color: rgb(42, 49, 55);\n"
"border : 1px solid rgb(61, 77, 77);\n"
"}\n"
"#adresseCl:hover{\n"
"border : 1px solid rgb(108, 135, 133);\n"
"}"));

        gridLayout_9->addWidget(adresseCl, 1, 2, 1, 1);

        label_15 = new QLabel(groupBox_18);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setMaximumSize(QSize(16777215, 31));
        QFont font11;
        font11.setFamily(QStringLiteral("Corbel"));
        font11.setPointSize(13);
        font11.setUnderline(true);
        label_15->setFont(font11);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_15, 1, 3, 1, 1);


        verticalLayout_4->addWidget(groupBox_18);

        groupBox_20 = new QGroupBox(nouveauVente);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        sizePolicy2.setHeightForWidth(groupBox_20->sizePolicy().hasHeightForWidth());
        groupBox_20->setSizePolicy(sizePolicy2);
        groupBox_20->setMaximumSize(QSize(16777215, 50));
        groupBox_20->setStyleSheet(QStringLiteral("border-radius : 2px;"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_20);
        horizontalLayout_10->setSpacing(81);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(60, 0, 60, 0);
        cancel = new QToolButton(groupBox_20);
        cancel->setObjectName(QStringLiteral("cancel"));
        sizePolicy1.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy1);
        cancel->setMaximumSize(QSize(16777215, 28));
        cancel->setFont(font8);
        cancel->setStyleSheet(QLatin1String("#cancel:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :4px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"#cancel{\n"
"	color: rgb(216, 250, 255);\n"
"border-radius :4px;\n"
"background-color: rgb(59, 68, 77);\n"
"}"));

        horizontalLayout_10->addWidget(cancel);

        newClient = new QToolButton(groupBox_20);
        newClient->setObjectName(QStringLiteral("newClient"));
        sizePolicy7.setHeightForWidth(newClient->sizePolicy().hasHeightForWidth());
        newClient->setSizePolicy(sizePolicy7);
        newClient->setMaximumSize(QSize(16777215, 28));
        newClient->setFont(font8);
        newClient->setStyleSheet(QLatin1String("\n"
"#newClient:hover{\n"
"	font: 12pt \"Corbel\";\n"
"border-radius :4px;\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.0301508, y1:0.5, x2:0.944, y2:0.55, stop:0.0753769 rgba(6, 82, 96, 52), stop:0.784689 rgba(4, 111, 119, 57));\n"
"	color: rgb(27, 253, 238);\n"
"}\n"
"#newClient{\n"
"	color: rgb(203, 240, 255);\n"
"border-radius :4px;\n"
"background-color: rgb(59, 68, 77);\n"
"}"));

        horizontalLayout_10->addWidget(newClient);


        verticalLayout_4->addWidget(groupBox_20);

        modiff->addWidget(nouveauVente);

        verticalLayout_5->addWidget(modiff);


        retranslateUi(Modif);

        modiff->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(Modif);
    } // setupUi

    void retranslateUi(QFrame *Modif)
    {
        Modif->setWindowTitle(QApplication::translate("Modif", "GestArt", Q_NULLPTR));
        label->setText(QApplication::translate("Modif", "Modification des produits", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        modif_des->setPlaceholderText(QApplication::translate("Modif", "Designation", Q_NULLPTR));
        label_6->setText(QApplication::translate("Modif", "Prix                 :", Q_NULLPTR));
        label_2->setText(QApplication::translate("Modif", "Unite", Q_NULLPTR));
        label_4->setText(QApplication::translate("Modif", "Designation :", Q_NULLPTR));
        label_8->setText(QApplication::translate("Modif", "Reference     :", Q_NULLPTR));
        label_7->setText(QApplication::translate("Modif", "Quantite       :", Q_NULLPTR));
        modif_ref->setPlaceholderText(QApplication::translate("Modif", "Reference du produits", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("Modif", "         Images        ", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        annuler->setText(QApplication::translate("Modif", "Annuler", Q_NULLPTR));
        valider->setText(QApplication::translate("Modif", "Valider", Q_NULLPTR));
        label_3->setText(QApplication::translate("Modif", "Modification de quantite de vente", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_9->setText(QApplication::translate("Modif", "Quantite       :", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        annul_qtt->setText(QApplication::translate("Modif", "Annuler", Q_NULLPTR));
        valider_qt->setText(QApplication::translate("Modif", "Valider", Q_NULLPTR));
        label_80->setText(QApplication::translate("Modif", "Modification de quantite de Stock", Q_NULLPTR));
        groupBox_41->setTitle(QString());
        label_81->setText(QApplication::translate("Modif", "Quantite       :", Q_NULLPTR));
        groupBox_42->setTitle(QString());
        annul_qtt_4->setText(QApplication::translate("Modif", "Annuler", Q_NULLPTR));
        valider_qt_4->setText(QApplication::translate("Modif", "Valider", Q_NULLPTR));
        label_51->setText(QApplication::translate("Modif", "Nouveau quantite de produits", Q_NULLPTR));
        groupBox_25->setTitle(QString());
        label_52->setText(QApplication::translate("Modif", "Quantite       :", Q_NULLPTR));
        groupBox_26->setTitle(QString());
        annulQt->setText(QApplication::translate("Modif", "Annuler", Q_NULLPTR));
        validQt->setText(QApplication::translate("Modif", "Valider", Q_NULLPTR));
        label_27->setText(QApplication::translate("Modif", "Insertion des produits", Q_NULLPTR));
        groupBox_16->setTitle(QString());
        modif_des_p->setPlaceholderText(QApplication::translate("Modif", "Designation", Q_NULLPTR));
        label_28->setText(QApplication::translate("Modif", "Prix                 :", Q_NULLPTR));
        label_29->setText(QApplication::translate("Modif", "Unite", Q_NULLPTR));
        label_30->setText(QApplication::translate("Modif", "Designation :", Q_NULLPTR));
        label_31->setText(QApplication::translate("Modif", "Reference     :", Q_NULLPTR));
        label_32->setText(QApplication::translate("Modif", "Quantite       :", Q_NULLPTR));
        modif_ref_p->setPlaceholderText(QApplication::translate("Modif", "Reference du produits", Q_NULLPTR));
        groupBox_17->setTitle(QApplication::translate("Modif", "         Images        ", Q_NULLPTR));
        groupBox_15->setTitle(QString());
        annuler_p->setText(QApplication::translate("Modif", "Annuler", Q_NULLPTR));
        valider_p->setText(QApplication::translate("Modif", "Valider", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_11->setText(QApplication::translate("Modif", "Nom                              :", Q_NULLPTR));
        password->setPlaceholderText(QApplication::translate("Modif", "Nouveau mot de passe ", Q_NULLPTR));
        label_12->setText(QApplication::translate("Modif", "Username                   :", Q_NULLPTR));
        label_13->setText(QApplication::translate("Modif", "Password                    :", Q_NULLPTR));
        label_14->setText(QApplication::translate("Modif", "Prenom                       :", Q_NULLPTR));
        username->setPlaceholderText(QApplication::translate("Modif", "Votre pseudo", Q_NULLPTR));
        label_10->setText(QApplication::translate("Modif", "Confirm password   :", Q_NULLPTR));
        confpasswd->setPlaceholderText(QApplication::translate("Modif", "Confirmer vos mot de passe ", Q_NULLPTR));
        nom->setPlaceholderText(QApplication::translate("Modif", "Nom du compte", Q_NULLPTR));
        prenom->setPlaceholderText(QApplication::translate("Modif", "Votre prenom", Q_NULLPTR));
        label_5->setText(QApplication::translate("Modif", "Type Compte", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        annul_modif_user->setText(QApplication::translate("Modif", "Annuler", Q_NULLPTR));
        valider_modif_user->setText(QApplication::translate("Modif", "Valider", Q_NULLPTR));
        labelCompte->setText(QApplication::translate("Modif", "Compte User", Q_NULLPTR));
        label_38->setText(QApplication::translate("Modif", "Information client", Q_NULLPTR));
        groupBox_18->setTitle(QString());
        label_35->setText(QApplication::translate("Modif", "Nom client      :", Q_NULLPTR));
        label_36->setText(QApplication::translate("Modif", "Adresse            :", Q_NULLPTR));
        telCl->setPlaceholderText(QApplication::translate("Modif", "Telephone du client", Q_NULLPTR));
        label_37->setText(QApplication::translate("Modif", "Telephone       :", Q_NULLPTR));
        actualiser->setText(QString());
        nomCl->setPlaceholderText(QApplication::translate("Modif", "Nom du Client", Q_NULLPTR));
        adresseCl->setPlaceholderText(QApplication::translate("Modif", "Adresse du client", Q_NULLPTR));
        label_15->setText(QApplication::translate("Modif", "Liste clients", Q_NULLPTR));
        groupBox_20->setTitle(QString());
        cancel->setText(QApplication::translate("Modif", "Annuler", Q_NULLPTR));
        newClient->setText(QApplication::translate("Modif", "Valider", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Modif: public Ui_Modif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIF_H
