/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *logInPage;
    QLabel *logoLabel1;
    QLabel *nameTab;
    QLabel *logo_label1;
    QLabel *passwordTab;
    QPushButton *gotoSignUp;
    QLineEdit *password_login;
    QLineEdit *email_login;
    QLabel *logoLabel2;
    QLabel *label_5;
    QPushButton *loginButton;
    QWidget *signUpPage;
    QLineEdit *email_input_signup;
    QLineEdit *password_input_signup;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *name_input_signup;
    QLabel *label_6;
    QPushButton *signUpButton;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *surname_input_signup;
    QLabel *logo_label2;
    QPushButton *pass_to_loginPage;
    QWidget *mainPage;
    QStackedWidget *changingPage;
    QWidget *mainProductPage;
    QStackedWidget *productsPage;
    QWidget *femaleProducts;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QPushButton *femaleProduct1;
    QPushButton *femaleProduct3;
    QPushButton *femaleProduct5;
    QPushButton *femaleProduct10;
    QPushButton *femaleProduct4;
    QPushButton *femaleProduct6;
    QPushButton *femaleProduct2;
    QPushButton *femaleProduct12;
    QPushButton *femaleProduct9;
    QPushButton *femaleProduct11;
    QPushButton *femaleProduct8;
    QPushButton *femaleProduct7;
    QPushButton *femaleProduct13;
    QPushButton *femaleProduct14;
    QPushButton *femaleProduct15;
    QPushButton *femaleProduct16;
    QPushButton *femaleProduct17;
    QPushButton *femaleProduct18;
    QPushButton *femaleProduct19;
    QPushButton *femaleProduct20;
    QWidget *maleProducts;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QPushButton *maleProduct7;
    QPushButton *maleProduct12;
    QPushButton *maleProduct15;
    QPushButton *maleProduct5;
    QPushButton *maleProduct8;
    QPushButton *maleProduct11;
    QPushButton *maleProduct3;
    QPushButton *maleProduct9;
    QPushButton *maleProduct1;
    QPushButton *maleProduct16;
    QPushButton *maleProduct4;
    QPushButton *maleProduct10;
    QPushButton *maleProduct14;
    QPushButton *maleProduct6;
    QPushButton *maleProduct2;
    QPushButton *maleProduct18;
    QPushButton *maleProduct19;
    QPushButton *maleProduct20;
    QPushButton *maleProduct17;
    QPushButton *maleProduct13;
    QPushButton *femaleButton;
    QPushButton *maleButton;
    QWidget *individualProductPage;
    QLabel *product_image;
    QPushButton *product_favoriteButton;
    QPushButton *product_sendToCart;
    QLabel *product_cost;
    QPushButton *likeButton;
    QLabel *likeCountLabel;
    QTextEdit *commentTextEdit;
    QPushButton *submitCommentButton;
    QListWidget *commentListWidget;
    QLabel *product_explaination;
    QComboBox *sizeComboBox;
    QLabel *sizeLabel;
    QLabel *likeLabel;
    QWidget *profilePage;
    QLabel *welcomeLabel;
    QComboBox *favoritesComboBox;
    QLabel *label_8;
    QPushButton *discardButton;
    QPushButton *sendFavoriteToCartButton;
    QLabel *pointsLabel;
    QComboBox *prevOrderComboBox;
    QLabel *label_13;
    QPushButton *prevOrderToProduct;
    QLabel *label_14;
    QWidget *cartPage;
    QPushButton *buyButton;
    QComboBox *myPurchasesComboBox;
    QPushButton *removeButton;
    QLabel *label_10;
    QWidget *page;
    QLabel *label_9;
    QTextEdit *receiptLabel;
    QLabel *orderNoLabel;
    QPushButton *mainScreenButton;
    QPushButton *profileButton;
    QPushButton *cartButton;
    QPushButton *logoutButton;
    QLabel *label_11;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(890, 618);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 10, 861, 581));
        logInPage = new QWidget();
        logInPage->setObjectName("logInPage");
        logoLabel1 = new QLabel(logInPage);
        logoLabel1->setObjectName("logoLabel1");
        logoLabel1->setGeometry(QRect(300, 50, 381, 161));
        logoLabel1->setStyleSheet(QString::fromUtf8("font: 300 35pt \"Arial MT Std Light\";"));
        nameTab = new QLabel(logInPage);
        nameTab->setObjectName("nameTab");
        nameTab->setGeometry(QRect(110, 180, 261, 101));
        nameTab->setStyleSheet(QString::fromUtf8("font: 300 25pt \"Arial MT Std Light\";"));
        nameTab->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        logo_label1 = new QLabel(logInPage);
        logo_label1->setObjectName("logo_label1");
        logo_label1->setGeometry(QRect(220, 90, 101, 91));
        passwordTab = new QLabel(logInPage);
        passwordTab->setObjectName("passwordTab");
        passwordTab->setGeometry(QRect(80, 280, 291, 71));
        passwordTab->setStyleSheet(QString::fromUtf8("font: 300 25pt \"Arial MT Std Light\";"));
        passwordTab->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gotoSignUp = new QPushButton(logInPage);
        gotoSignUp->setObjectName("gotoSignUp");
        gotoSignUp->setGeometry(QRect(440, 420, 151, 41));
        gotoSignUp->setStyleSheet(QString::fromUtf8("font: 300 10pt \"DejaVu Sans\";"));
        password_login = new QLineEdit(logInPage);
        password_login->setObjectName("password_login");
        password_login->setGeometry(QRect(400, 280, 251, 51));
        password_login->setEchoMode(QLineEdit::Password);
        email_login = new QLineEdit(logInPage);
        email_login->setObjectName("email_login");
        email_login->setGeometry(QRect(400, 210, 251, 51));
        email_login->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Times New Roman\";"));
        logoLabel2 = new QLabel(logInPage);
        logoLabel2->setObjectName("logoLabel2");
        logoLabel2->setGeometry(QRect(310, 150, 371, 41));
        logoLabel2->setStyleSheet(QString::fromUtf8("font: 300 13pt \"Arial MT Std Light\";"));
        label_5 = new QLabel(logInPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 420, 191, 41));
        label_5->setStyleSheet(QString::fromUtf8("font: 300 11pt \"Arial MT Std Light\";"));
        loginButton = new QPushButton(logInPage);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(350, 340, 181, 71));
        loginButton->setStyleSheet(QString::fromUtf8("font: 300 20pt \"DejaVu Sans\";"));
        stackedWidget->addWidget(logInPage);
        signUpPage = new QWidget();
        signUpPage->setObjectName("signUpPage");
        email_input_signup = new QLineEdit(signUpPage);
        email_input_signup->setObjectName("email_input_signup");
        email_input_signup->setGeometry(QRect(410, 320, 251, 51));
        email_input_signup->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Times New Roman\";"));
        password_input_signup = new QLineEdit(signUpPage);
        password_input_signup->setObjectName("password_input_signup");
        password_input_signup->setGeometry(QRect(410, 390, 251, 51));
        password_input_signup->setEchoMode(QLineEdit::Password);
        label_7 = new QLabel(signUpPage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(90, 380, 291, 71));
        label_7->setStyleSheet(QString::fromUtf8("font: 300 25pt \"Arial MT Std Light\";"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(signUpPage);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 20, 311, 181));
        label->setStyleSheet(QString::fromUtf8("font: 300 35pt \"Arial MT Std Light\";"));
        label_3 = new QLabel(signUpPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 150, 261, 101));
        label_3->setStyleSheet(QString::fromUtf8("font: 300 25pt \"Arial MT Std Light\";"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        name_input_signup = new QLineEdit(signUpPage);
        name_input_signup->setObjectName("name_input_signup");
        name_input_signup->setGeometry(QRect(410, 180, 251, 51));
        name_input_signup->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Times New Roman\";"));
        label_6 = new QLabel(signUpPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(120, 290, 261, 101));
        label_6->setStyleSheet(QString::fromUtf8("font: 300 25pt \"Arial MT Std Light\";"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        signUpButton = new QPushButton(signUpPage);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setGeometry(QRect(360, 450, 181, 61));
        signUpButton->setStyleSheet(QString::fromUtf8("font: 300 20pt \"Arial MT Std Light\";"));
        label_4 = new QLabel(signUpPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 240, 291, 71));
        label_4->setStyleSheet(QString::fromUtf8("font: 300 25pt \"Arial MT Std Light\";"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(signUpPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 120, 261, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 300 13pt \"Arial MT Std Light\";"));
        surname_input_signup = new QLineEdit(signUpPage);
        surname_input_signup->setObjectName("surname_input_signup");
        surname_input_signup->setGeometry(QRect(410, 250, 251, 51));
        surname_input_signup->setStyleSheet(QString::fromUtf8("font: 300 16pt \"Times New Roman\";"));
        logo_label2 = new QLabel(signUpPage);
        logo_label2->setObjectName("logo_label2");
        logo_label2->setGeometry(QRect(230, 70, 101, 91));
        pass_to_loginPage = new QPushButton(signUpPage);
        pass_to_loginPage->setObjectName("pass_to_loginPage");
        pass_to_loginPage->setGeometry(QRect(10, 10, 121, 91));
        pass_to_loginPage->setIconSize(QSize(90, 90));
        stackedWidget->addWidget(signUpPage);
        mainPage = new QWidget();
        mainPage->setObjectName("mainPage");
        changingPage = new QStackedWidget(mainPage);
        changingPage->setObjectName("changingPage");
        changingPage->setGeometry(QRect(0, 100, 851, 501));
        mainProductPage = new QWidget();
        mainProductPage->setObjectName("mainProductPage");
        productsPage = new QStackedWidget(mainProductPage);
        productsPage->setObjectName("productsPage");
        productsPage->setGeometry(QRect(0, 50, 851, 441));
        femaleProducts = new QWidget();
        femaleProducts->setObjectName("femaleProducts");
        scrollArea_2 = new QScrollArea(femaleProducts);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(10, 20, 831, 421));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 815, 1042));
        scrollAreaWidgetContents_2->setMinimumSize(QSize(809, 0));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName("gridLayout_2");
        femaleProduct1 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct1->setObjectName("femaleProduct1");
        femaleProduct1->setMinimumSize(QSize(170, 200));
        femaleProduct1->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct1, 0, 0, 1, 1);

        femaleProduct3 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct3->setObjectName("femaleProduct3");
        femaleProduct3->setMinimumSize(QSize(170, 200));
        femaleProduct3->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct3, 0, 2, 1, 1);

        femaleProduct5 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct5->setObjectName("femaleProduct5");
        femaleProduct5->setMinimumSize(QSize(170, 200));
        femaleProduct5->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct5, 1, 0, 1, 1);

        femaleProduct10 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct10->setObjectName("femaleProduct10");
        femaleProduct10->setMinimumSize(QSize(170, 200));
        femaleProduct10->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct10, 2, 1, 1, 1);

        femaleProduct4 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct4->setObjectName("femaleProduct4");
        femaleProduct4->setMinimumSize(QSize(170, 200));
        femaleProduct4->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct4, 0, 3, 1, 1);

        femaleProduct6 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct6->setObjectName("femaleProduct6");
        femaleProduct6->setMinimumSize(QSize(170, 200));
        femaleProduct6->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct6, 1, 1, 1, 1);

        femaleProduct2 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct2->setObjectName("femaleProduct2");
        femaleProduct2->setMinimumSize(QSize(170, 200));
        femaleProduct2->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct2, 0, 1, 1, 1);

        femaleProduct12 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct12->setObjectName("femaleProduct12");
        femaleProduct12->setMinimumSize(QSize(170, 200));
        femaleProduct12->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct12, 2, 3, 1, 1);

        femaleProduct9 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct9->setObjectName("femaleProduct9");
        femaleProduct9->setMinimumSize(QSize(170, 200));
        femaleProduct9->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct9, 2, 0, 1, 1);

        femaleProduct11 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct11->setObjectName("femaleProduct11");
        femaleProduct11->setMinimumSize(QSize(170, 200));
        femaleProduct11->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct11, 2, 2, 1, 1);

        femaleProduct8 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct8->setObjectName("femaleProduct8");
        femaleProduct8->setMinimumSize(QSize(170, 200));
        femaleProduct8->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct8, 1, 3, 1, 1);

        femaleProduct7 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct7->setObjectName("femaleProduct7");
        femaleProduct7->setMinimumSize(QSize(170, 200));
        femaleProduct7->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct7, 1, 2, 1, 1);

        femaleProduct13 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct13->setObjectName("femaleProduct13");
        femaleProduct13->setMinimumSize(QSize(170, 200));
        femaleProduct13->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct13, 3, 0, 1, 1);

        femaleProduct14 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct14->setObjectName("femaleProduct14");
        femaleProduct14->setMinimumSize(QSize(170, 200));
        femaleProduct14->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct14, 3, 1, 1, 1);

        femaleProduct15 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct15->setObjectName("femaleProduct15");
        femaleProduct15->setMinimumSize(QSize(170, 200));
        femaleProduct15->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct15, 3, 2, 1, 1);

        femaleProduct16 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct16->setObjectName("femaleProduct16");
        femaleProduct16->setMinimumSize(QSize(170, 200));
        femaleProduct16->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct16, 3, 3, 1, 1);

        femaleProduct17 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct17->setObjectName("femaleProduct17");
        femaleProduct17->setMinimumSize(QSize(170, 200));
        femaleProduct17->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct17, 4, 0, 1, 1);

        femaleProduct18 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct18->setObjectName("femaleProduct18");
        femaleProduct18->setMinimumSize(QSize(170, 200));
        femaleProduct18->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct18, 4, 1, 1, 1);

        femaleProduct19 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct19->setObjectName("femaleProduct19");
        femaleProduct19->setMinimumSize(QSize(170, 200));
        femaleProduct19->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct19, 4, 2, 1, 1);

        femaleProduct20 = new QPushButton(scrollAreaWidgetContents_2);
        femaleProduct20->setObjectName("femaleProduct20");
        femaleProduct20->setMinimumSize(QSize(170, 200));
        femaleProduct20->setIconSize(QSize(170, 200));

        gridLayout_2->addWidget(femaleProduct20, 4, 3, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        productsPage->addWidget(femaleProducts);
        maleProducts = new QWidget();
        maleProducts->setObjectName("maleProducts");
        scrollArea = new QScrollArea(maleProducts);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 20, 831, 411));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 815, 1042));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        maleProduct7 = new QPushButton(scrollAreaWidgetContents);
        maleProduct7->setObjectName("maleProduct7");
        maleProduct7->setMinimumSize(QSize(170, 200));
        maleProduct7->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct7, 1, 2, 1, 1);

        maleProduct12 = new QPushButton(scrollAreaWidgetContents);
        maleProduct12->setObjectName("maleProduct12");
        maleProduct12->setMinimumSize(QSize(170, 200));
        maleProduct12->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct12, 2, 3, 1, 1);

        maleProduct15 = new QPushButton(scrollAreaWidgetContents);
        maleProduct15->setObjectName("maleProduct15");
        maleProduct15->setMinimumSize(QSize(170, 200));
        maleProduct15->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct15, 3, 2, 1, 1);

        maleProduct5 = new QPushButton(scrollAreaWidgetContents);
        maleProduct5->setObjectName("maleProduct5");
        maleProduct5->setMinimumSize(QSize(170, 200));
        maleProduct5->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct5, 1, 0, 1, 1);

        maleProduct8 = new QPushButton(scrollAreaWidgetContents);
        maleProduct8->setObjectName("maleProduct8");
        maleProduct8->setMinimumSize(QSize(170, 200));
        maleProduct8->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct8, 1, 3, 1, 1);

        maleProduct11 = new QPushButton(scrollAreaWidgetContents);
        maleProduct11->setObjectName("maleProduct11");
        maleProduct11->setMinimumSize(QSize(170, 200));
        maleProduct11->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct11, 2, 2, 1, 1);

        maleProduct3 = new QPushButton(scrollAreaWidgetContents);
        maleProduct3->setObjectName("maleProduct3");
        maleProduct3->setMinimumSize(QSize(170, 200));
        maleProduct3->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct3, 0, 2, 1, 1);

        maleProduct9 = new QPushButton(scrollAreaWidgetContents);
        maleProduct9->setObjectName("maleProduct9");
        maleProduct9->setMinimumSize(QSize(170, 200));
        maleProduct9->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct9, 2, 0, 1, 1);

        maleProduct1 = new QPushButton(scrollAreaWidgetContents);
        maleProduct1->setObjectName("maleProduct1");
        maleProduct1->setMinimumSize(QSize(170, 200));
        maleProduct1->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct1, 0, 0, 1, 1);

        maleProduct16 = new QPushButton(scrollAreaWidgetContents);
        maleProduct16->setObjectName("maleProduct16");
        maleProduct16->setMinimumSize(QSize(170, 200));
        maleProduct16->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct16, 3, 3, 1, 1);

        maleProduct4 = new QPushButton(scrollAreaWidgetContents);
        maleProduct4->setObjectName("maleProduct4");
        maleProduct4->setMinimumSize(QSize(170, 200));
        maleProduct4->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct4, 0, 3, 1, 1);

        maleProduct10 = new QPushButton(scrollAreaWidgetContents);
        maleProduct10->setObjectName("maleProduct10");
        maleProduct10->setMinimumSize(QSize(170, 200));
        maleProduct10->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct10, 2, 1, 1, 1);

        maleProduct14 = new QPushButton(scrollAreaWidgetContents);
        maleProduct14->setObjectName("maleProduct14");
        maleProduct14->setMinimumSize(QSize(170, 200));
        maleProduct14->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct14, 3, 1, 1, 1);

        maleProduct6 = new QPushButton(scrollAreaWidgetContents);
        maleProduct6->setObjectName("maleProduct6");
        maleProduct6->setMinimumSize(QSize(170, 200));
        maleProduct6->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct6, 1, 1, 1, 1);

        maleProduct2 = new QPushButton(scrollAreaWidgetContents);
        maleProduct2->setObjectName("maleProduct2");
        maleProduct2->setMinimumSize(QSize(170, 200));
        maleProduct2->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct2, 0, 1, 1, 1);

        maleProduct18 = new QPushButton(scrollAreaWidgetContents);
        maleProduct18->setObjectName("maleProduct18");
        maleProduct18->setMinimumSize(QSize(170, 200));
        maleProduct18->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct18, 4, 1, 1, 1);

        maleProduct19 = new QPushButton(scrollAreaWidgetContents);
        maleProduct19->setObjectName("maleProduct19");
        maleProduct19->setMinimumSize(QSize(170, 200));
        maleProduct19->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct19, 4, 2, 1, 1);

        maleProduct20 = new QPushButton(scrollAreaWidgetContents);
        maleProduct20->setObjectName("maleProduct20");
        maleProduct20->setMinimumSize(QSize(170, 200));
        maleProduct20->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct20, 4, 3, 1, 1);

        maleProduct17 = new QPushButton(scrollAreaWidgetContents);
        maleProduct17->setObjectName("maleProduct17");
        maleProduct17->setMinimumSize(QSize(170, 200));
        maleProduct17->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct17, 4, 0, 1, 1);

        maleProduct13 = new QPushButton(scrollAreaWidgetContents);
        maleProduct13->setObjectName("maleProduct13");
        maleProduct13->setMinimumSize(QSize(170, 200));
        maleProduct13->setIconSize(QSize(170, 200));

        gridLayout->addWidget(maleProduct13, 3, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        maleProduct5->raise();
        maleProduct3->raise();
        maleProduct7->raise();
        maleProduct8->raise();
        maleProduct4->raise();
        maleProduct6->raise();
        maleProduct1->raise();
        maleProduct2->raise();
        maleProduct10->raise();
        maleProduct9->raise();
        maleProduct11->raise();
        maleProduct12->raise();
        maleProduct14->raise();
        maleProduct15->raise();
        maleProduct16->raise();
        maleProduct18->raise();
        maleProduct19->raise();
        maleProduct20->raise();
        maleProduct17->raise();
        maleProduct13->raise();
        productsPage->addWidget(maleProducts);
        femaleButton = new QPushButton(mainProductPage);
        femaleButton->setObjectName("femaleButton");
        femaleButton->setGeometry(QRect(130, 10, 281, 31));
        maleButton = new QPushButton(mainProductPage);
        maleButton->setObjectName("maleButton");
        maleButton->setGeometry(QRect(440, 10, 281, 31));
        changingPage->addWidget(mainProductPage);
        individualProductPage = new QWidget();
        individualProductPage->setObjectName("individualProductPage");
        product_image = new QLabel(individualProductPage);
        product_image->setObjectName("product_image");
        product_image->setGeometry(QRect(30, 90, 341, 371));
        product_favoriteButton = new QPushButton(individualProductPage);
        product_favoriteButton->setObjectName("product_favoriteButton");
        product_favoriteButton->setGeometry(QRect(640, 290, 161, 61));
        product_sendToCart = new QPushButton(individualProductPage);
        product_sendToCart->setObjectName("product_sendToCart");
        product_sendToCart->setGeometry(QRect(640, 360, 161, 61));
        product_cost = new QLabel(individualProductPage);
        product_cost->setObjectName("product_cost");
        product_cost->setGeometry(QRect(20, 50, 261, 41));
        product_cost->setStyleSheet(QString::fromUtf8("font: 9pt \"Times New Roman\";\n"
"font: 20pt \"Times New Roman\";"));
        likeButton = new QPushButton(individualProductPage);
        likeButton->setObjectName("likeButton");
        likeButton->setGeometry(QRect(640, 230, 51, 51));
        likeButton->setIconSize(QSize(50, 50));
        likeCountLabel = new QLabel(individualProductPage);
        likeCountLabel->setObjectName("likeCountLabel");
        likeCountLabel->setGeometry(QRect(694, 246, 63, 20));
        commentTextEdit = new QTextEdit(individualProductPage);
        commentTextEdit->setObjectName("commentTextEdit");
        commentTextEdit->setGeometry(QRect(370, 140, 251, 51));
        submitCommentButton = new QPushButton(individualProductPage);
        submitCommentButton->setObjectName("submitCommentButton");
        submitCommentButton->setGeometry(QRect(430, 197, 131, 29));
        commentListWidget = new QListWidget(individualProductPage);
        commentListWidget->setObjectName("commentListWidget");
        commentListWidget->setGeometry(QRect(370, 240, 256, 192));
        product_explaination = new QLabel(individualProductPage);
        product_explaination->setObjectName("product_explaination");
        product_explaination->setGeometry(QRect(30, 10, 281, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        font.setBold(true);
        product_explaination->setFont(font);
        sizeComboBox = new QComboBox(individualProductPage);
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->addItem(QString());
        sizeComboBox->setObjectName("sizeComboBox");
        sizeComboBox->setGeometry(QRect(700, 138, 101, 31));
        sizeLabel = new QLabel(individualProductPage);
        sizeLabel->setObjectName("sizeLabel");
        sizeLabel->setGeometry(QRect(640, 140, 49, 21));
        QFont font1;
        font1.setPointSize(15);
        sizeLabel->setFont(font1);
        likeLabel = new QLabel(individualProductPage);
        likeLabel->setObjectName("likeLabel");
        likeLabel->setGeometry(QRect(719, 236, 61, 40));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        likeLabel->setFont(font2);
        changingPage->addWidget(individualProductPage);
        profilePage = new QWidget();
        profilePage->setObjectName("profilePage");
        welcomeLabel = new QLabel(profilePage);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(30, 0, 791, 61));
        welcomeLabel->setStyleSheet(QString::fromUtf8("font: 26pt \"Times New Roman\";"));
        welcomeLabel->setAlignment(Qt::AlignCenter);
        favoritesComboBox = new QComboBox(profilePage);
        favoritesComboBox->setObjectName("favoritesComboBox");
        favoritesComboBox->setGeometry(QRect(270, 100, 351, 101));
        favoritesComboBox->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        favoritesComboBox->setMaxVisibleItems(3);
        favoritesComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);
        favoritesComboBox->setIconSize(QSize(80, 80));
        label_8 = new QLabel(profilePage);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 60, 351, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";"));
        label_8->setAlignment(Qt::AlignCenter);
        discardButton = new QPushButton(profilePage);
        discardButton->setObjectName("discardButton");
        discardButton->setGeometry(QRect(630, 100, 181, 41));
        sendFavoriteToCartButton = new QPushButton(profilePage);
        sendFavoriteToCartButton->setObjectName("sendFavoriteToCartButton");
        sendFavoriteToCartButton->setGeometry(QRect(630, 160, 181, 41));
        pointsLabel = new QLabel(profilePage);
        pointsLabel->setObjectName("pointsLabel");
        pointsLabel->setGeometry(QRect(270, 210, 331, 51));
        pointsLabel->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";"));
        pointsLabel->setAlignment(Qt::AlignCenter);
        prevOrderComboBox = new QComboBox(profilePage);
        prevOrderComboBox->setObjectName("prevOrderComboBox");
        prevOrderComboBox->setGeometry(QRect(20, 100, 221, 51));
        label_13 = new QLabel(profilePage);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(50, 70, 161, 21));
        label_13->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_13->setAlignment(Qt::AlignCenter);
        prevOrderToProduct = new QPushButton(profilePage);
        prevOrderToProduct->setObjectName("prevOrderToProduct");
        prevOrderToProduct->setGeometry(QRect(60, 160, 141, 41));
        label_14 = new QLabel(profilePage);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 190, 211, 51));
        changingPage->addWidget(profilePage);
        cartPage = new QWidget();
        cartPage->setObjectName("cartPage");
        buyButton = new QPushButton(cartPage);
        buyButton->setObjectName("buyButton");
        buyButton->setGeometry(QRect(370, 270, 131, 51));
        myPurchasesComboBox = new QComboBox(cartPage);
        myPurchasesComboBox->setObjectName("myPurchasesComboBox");
        myPurchasesComboBox->setGeometry(QRect(210, 100, 451, 141));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(12);
        myPurchasesComboBox->setFont(font3);
        myPurchasesComboBox->setIconSize(QSize(100, 100));
        removeButton = new QPushButton(cartPage);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(700, 140, 121, 51));
        label_10 = new QLabel(cartPage);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(210, 50, 451, 41));
        label_10->setStyleSheet(QString::fromUtf8("font: 16pt \"Times New Roman\";"));
        label_10->setAlignment(Qt::AlignCenter);
        changingPage->addWidget(cartPage);
        page = new QWidget();
        page->setObjectName("page");
        label_9 = new QLabel(page);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(210, 370, 411, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(15);
        font4.setBold(true);
        label_9->setFont(font4);
        receiptLabel = new QTextEdit(page);
        receiptLabel->setObjectName("receiptLabel");
        receiptLabel->setGeometry(QRect(130, 90, 581, 281));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(14);
        receiptLabel->setFont(font5);
        receiptLabel->setReadOnly(true);
        orderNoLabel = new QLabel(page);
        orderNoLabel->setObjectName("orderNoLabel");
        orderNoLabel->setGeometry(QRect(150, 35, 541, 31));
        orderNoLabel->setFont(font4);
        changingPage->addWidget(page);
        mainScreenButton = new QPushButton(mainPage);
        mainScreenButton->setObjectName("mainScreenButton");
        mainScreenButton->setGeometry(QRect(10, 0, 121, 91));
        mainScreenButton->setIconSize(QSize(90, 90));
        profileButton = new QPushButton(mainPage);
        profileButton->setObjectName("profileButton");
        profileButton->setGeometry(QRect(109, 11, 91, 71));
        profileButton->setIconSize(QSize(50, 50));
        cartButton = new QPushButton(mainPage);
        cartButton->setObjectName("cartButton");
        cartButton->setGeometry(QRect(670, 10, 91, 71));
        cartButton->setIconSize(QSize(60, 60));
        logoutButton = new QPushButton(mainPage);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(760, 10, 81, 71));
        logoutButton->setIconSize(QSize(60, 60));
        label_11 = new QLabel(mainPage);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(330, -60, 311, 181));
        label_11->setStyleSheet(QString::fromUtf8("font: 300 20pt \"Arial MT Std Light\";"));
        label_12 = new QLabel(mainPage);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(320, 30, 261, 41));
        label_12->setStyleSheet(QString::fromUtf8("font: 300 10pt \"Arial MT Std Light\";"));
        stackedWidget->addWidget(mainPage);
        changingPage->raise();
        profileButton->raise();
        cartButton->raise();
        logoutButton->raise();
        label_11->raise();
        label_12->raise();
        mainScreenButton->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 890, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        changingPage->setCurrentIndex(0);
        productsPage->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logoLabel1->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">OUTFIT NEST</span></p></body></html>", nullptr));
        nameTab->setText(QCoreApplication::translate("MainWindow", "E-mail", nullptr));
        logo_label1->setText(QString());
        passwordTab->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        gotoSignUp->setText(QCoreApplication::translate("MainWindow", "Sign Up!", nullptr));
        logoLabel2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Cause' We Never Go Out Of Style</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Dont Have An Account?", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "LOG IN", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">OUTFIT NEST</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "E-mail", nullptr));
        signUpButton->setText(QCoreApplication::translate("MainWindow", "SIGN UP!", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Surname", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Cause' We Never Go Out Of Style</p></body></html>", nullptr));
        logo_label2->setText(QString());
        pass_to_loginPage->setText(QString());
        femaleProduct1->setText(QString());
        femaleProduct3->setText(QString());
        femaleProduct5->setText(QString());
        femaleProduct10->setText(QString());
        femaleProduct4->setText(QString());
        femaleProduct6->setText(QString());
        femaleProduct2->setText(QString());
        femaleProduct12->setText(QString());
        femaleProduct9->setText(QString());
        femaleProduct11->setText(QString());
        femaleProduct8->setText(QString());
        femaleProduct7->setText(QString());
        femaleProduct13->setText(QString());
        femaleProduct14->setText(QString());
        femaleProduct15->setText(QString());
        femaleProduct16->setText(QString());
        femaleProduct17->setText(QString());
        femaleProduct18->setText(QString());
        femaleProduct19->setText(QString());
        femaleProduct20->setText(QString());
        maleProduct7->setText(QString());
        maleProduct12->setText(QString());
        maleProduct15->setText(QString());
        maleProduct5->setText(QString());
        maleProduct8->setText(QString());
        maleProduct11->setText(QString());
        maleProduct3->setText(QString());
        maleProduct9->setText(QString());
        maleProduct1->setText(QString());
        maleProduct16->setText(QString());
        maleProduct4->setText(QString());
        maleProduct10->setText(QString());
        maleProduct14->setText(QString());
        maleProduct6->setText(QString());
        maleProduct2->setText(QString());
        maleProduct18->setText(QString());
        maleProduct19->setText(QString());
        maleProduct20->setText(QString());
        maleProduct17->setText(QString());
        maleProduct13->setText(QString());
        femaleButton->setText(QCoreApplication::translate("MainWindow", "FEMALE", nullptr));
        maleButton->setText(QCoreApplication::translate("MainWindow", "MALE", nullptr));
        product_image->setText(QString());
        product_favoriteButton->setText(QCoreApplication::translate("MainWindow", "FAVORITE", nullptr));
        product_sendToCart->setText(QCoreApplication::translate("MainWindow", "ADD TO CART", nullptr));
        product_cost->setText(QString());
        likeButton->setText(QString());
        likeCountLabel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        submitCommentButton->setText(QCoreApplication::translate("MainWindow", "Make Comment", nullptr));
        product_explaination->setText(QString());
        sizeComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "XSMALL", nullptr));
        sizeComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "SMALL", nullptr));
        sizeComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "MEDIUM", nullptr));
        sizeComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "LARGE", nullptr));
        sizeComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "XLARGE", nullptr));

        sizeLabel->setText(QCoreApplication::translate("MainWindow", "Size:", nullptr));
        likeLabel->setText(QCoreApplication::translate("MainWindow", "LIKES", nullptr));
        welcomeLabel->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Your Favorites", nullptr));
        discardButton->setText(QCoreApplication::translate("MainWindow", "Discard From Favorites", nullptr));
        sendFavoriteToCartButton->setText(QCoreApplication::translate("MainWindow", "Send to Cart", nullptr));
        pointsLabel->setText(QCoreApplication::translate("MainWindow", "Your Points:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Previous Purchases", nullptr));
        prevOrderToProduct->setText(QCoreApplication::translate("MainWindow", "Go the Product Page", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Make some comments to get points!", nullptr));
        buyButton->setText(QCoreApplication::translate("MainWindow", "BUY", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "REMOVE PRODUCT", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "YOUR CART", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Your purchase has been successfully completed!", nullptr));
        orderNoLabel->setText(QString());
        mainScreenButton->setText(QString());
        profileButton->setText(QString());
        cartButton->setText(QString());
        logoutButton->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-style:italic;\">OUTFIT NEST</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Cause' We Never Go Out Of Style</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
