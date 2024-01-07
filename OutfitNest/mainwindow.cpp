#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "customer.h"
#include "product.h"
#include <QPixmap>
#include <QIcon>
#include <fstream>
#include <QListWidget>
#include <QLabel>
#include "customer.h"
#include <QDir>
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include <QDebug>
#include "payment.h"
#include "receipt.h"

#include <QTextEdit>

using namespace std;

//Needed Declarations
Product::SIZE selectedSize;

//the user that will use the program
Customer user("Taylor","Swift",Gender::Female,"taylorswift13@gmail.com","karmaisacat1313");

//The Products
QVector<Product> getProductsVector();
QVector<Product> products = getProductsVector();
Product prod1 = products[0];
Product prod2 = products[1];
Product prod3 = products[2];
Product prod4 = products[3];
Product prod5 = products[4];
Product prod6 = products[5];
Product prod7 = products[6];
Product prod8 = products[7];
Product prod9 = products[8];
Product prod10 = products[9];
Product prod11 = products[10];
Product prod12 = products[11];
Product prod13 = products[12];
Product prod14 = products[13];
Product prod15 = products[14];
Product prod16 = products[15];
Product prod17 = products[16];
Product prod18 = products[17];
Product prod19 = products[18];
Product prod20 = products[19];
Product prod21 = products[20];
Product prod22 = products[21];
Product prod23 = products[22];
Product prod24 = products[23];
Product prod25 = products[24];
Product prod26 = products[25];
Product prod27 = products[26];
Product prod28 = products[27];
Product prod29 = products[28];
Product prod30 = products[29];
Product prod31 = products[30];
Product prod32 = products[31];
Product prod33 = products[32];
Product prod34 = products[33];
Product prod35 = products[34];
Product prod36 = products[35];
Product prod37 = products[36];
Product prod38 = products[37];
Product prod39 = products[38];
Product prod40 = products[39];


//The Product that's shown right now
Product* currentProduct = &prod1;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    connect(ui->sizeComboBox, SIGNAL(currentTextChanged(const QString &)), this, SLOT(on_sizeComboBox_currentTextChanged(const QString &)));//tempered
    ui->setupUi(this);
    connect(ui->likeButton, &QPushButton::clicked, this, &MainWindow::on_likeButtonClicked);
    connect(ui->submitCommentButton, &QPushButton::clicked, this, &MainWindow::on_submitCommentButtonClicked);

    this->setFixedSize(this->width(), this->height());
    this->setWindowTitle("Outfit Nest");

    //product icons
    QPixmap prodicon1(prod1.getPicturePath());
    ui->femaleProduct1->setIcon(prodicon1);
    ui->femaleProduct1->setFlat(true);
    ui->femaleProduct1->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon2(prod2.getPicturePath());
    ui->femaleProduct2->setIcon(prodicon2);
    ui->femaleProduct2->setFlat(true);
    ui->femaleProduct2->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon3(prod3.getPicturePath());
    ui->femaleProduct3->setIcon(prodicon3);
    ui->femaleProduct3->setFlat(true);
    ui->femaleProduct3->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon4(prod4.getPicturePath());
    ui->femaleProduct4->setIcon(prodicon4);
    ui->femaleProduct4->setFlat(true);
    ui->femaleProduct4->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon5(prod5.getPicturePath());
    ui->femaleProduct5->setIcon(prodicon5);
    ui->femaleProduct5->setFlat(true);
    ui->femaleProduct5->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon6(prod6.getPicturePath());
    ui->femaleProduct6->setIcon(prodicon6);
    ui->femaleProduct6->setFlat(true);
    ui->femaleProduct6->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon7(prod7.getPicturePath());
    ui->femaleProduct7->setIcon(prodicon7);
    ui->femaleProduct7->setFlat(true);
    ui->femaleProduct7->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon8(prod8.getPicturePath());
    ui->femaleProduct8->setIcon(prodicon8);
    ui->femaleProduct8->setFlat(true);
    ui->femaleProduct8->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon9(prod9.getPicturePath());
    ui->femaleProduct9->setIcon(prodicon9);
    ui->femaleProduct9->setFlat(true);
    ui->femaleProduct9->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon10(prod10.getPicturePath());
    ui->femaleProduct10->setIcon(prodicon10);
    ui->femaleProduct10->setFlat(true);
    ui->femaleProduct10->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon11(prod11.getPicturePath());
    ui->femaleProduct11->setIcon(prodicon11);
    ui->femaleProduct11->setFlat(true);
    ui->femaleProduct11->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon12(prod12.getPicturePath());
    ui->femaleProduct12->setIcon(prodicon12);
    ui->femaleProduct12->setFlat(true);
    ui->femaleProduct12->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon13(prod13.getPicturePath());
    ui->maleProduct1->setIcon(prodicon13);
    ui->maleProduct1->setFlat(true);
    ui->maleProduct1->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon14(prod14.getPicturePath());
    ui->maleProduct2->setIcon(prodicon14);
    ui->maleProduct2->setFlat(true);
    ui->maleProduct2->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon15(prod15.getPicturePath());
    ui->maleProduct3->setIcon(prodicon15);
    ui->maleProduct3->setFlat(true);
    ui->maleProduct3->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon16(prod16.getPicturePath());
    ui->maleProduct4->setIcon(prodicon16);
    ui->maleProduct4->setFlat(true);
    ui->maleProduct4->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon17(prod17.getPicturePath());
    ui->maleProduct5->setIcon(prodicon17);
    ui->maleProduct5->setFlat(true);
    ui->maleProduct5->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon18(prod18.getPicturePath());
    ui->maleProduct6->setIcon(prodicon18);
    ui->maleProduct6->setFlat(true);
    ui->maleProduct6->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon19(prod19.getPicturePath());
    ui->maleProduct7->setIcon(prodicon19);
    ui->maleProduct7->setFlat(true);
    ui->maleProduct7->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon20(prod20.getPicturePath());
    ui->maleProduct8->setIcon(prodicon20);
    ui->maleProduct8->setFlat(true);
    ui->maleProduct8->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon21(prod21.getPicturePath());
    ui->maleProduct9->setIcon(prodicon21);
    ui->maleProduct9->setFlat(true);
    ui->maleProduct9->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon22(prod22.getPicturePath());
    ui->maleProduct10->setIcon(prodicon22);
    ui->maleProduct10->setFlat(true);
    ui->maleProduct10->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon23(prod23.getPicturePath());
    ui->maleProduct11->setIcon(prodicon23);
    ui->maleProduct11->setFlat(true);
    ui->maleProduct11->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon24(prod24.getPicturePath());
    ui->maleProduct12->setIcon(prodicon24);
    ui->maleProduct12->setFlat(true);
    ui->maleProduct12->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon25(prod25.getPicturePath());
    ui->maleProduct13->setIcon(prodicon25);
    ui->maleProduct13->setFlat(true);
    ui->maleProduct13->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon26(prod26.getPicturePath());
    ui->maleProduct14->setIcon(prodicon26);
    ui->maleProduct14->setFlat(true);
    ui->maleProduct14->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon27(prod27.getPicturePath());
    ui->maleProduct15->setIcon(prodicon27);
    ui->maleProduct15->setFlat(true);
    ui->maleProduct15->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon28(prod28.getPicturePath());
    ui->maleProduct16->setIcon(prodicon28);
    ui->maleProduct16->setFlat(true);
    ui->maleProduct16->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon29(prod29.getPicturePath());
    ui->maleProduct17->setIcon(prodicon29);
    ui->maleProduct17->setFlat(true);
    ui->maleProduct17->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon30(prod30.getPicturePath());
    ui->maleProduct18->setIcon(prodicon30);
    ui->maleProduct18->setFlat(true);
    ui->maleProduct18->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon31(prod31.getPicturePath());
    ui->maleProduct19->setIcon(prodicon31);
    ui->maleProduct19->setFlat(true);
    ui->maleProduct19->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon32(prod32.getPicturePath());
    ui->maleProduct20->setIcon(prodicon32);
    ui->maleProduct20->setFlat(true);
    ui->maleProduct20->setStyleSheet("QPushButton { background-color: transparent }");

    //new added female products
    QPixmap prodicon33(prod33.getPicturePath());
    ui->femaleProduct13->setIcon(prodicon33);
    ui->femaleProduct13->setFlat(true);
    ui->femaleProduct13->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon34(prod34.getPicturePath());
    ui->femaleProduct14->setIcon(prodicon34);
    ui->femaleProduct14->setFlat(true);
    ui->femaleProduct14->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon35(prod35.getPicturePath());
    ui->femaleProduct15->setIcon(prodicon35);
    ui->femaleProduct15->setFlat(true);
    ui->femaleProduct15->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon36(prod36.getPicturePath());
    ui->femaleProduct16->setIcon(prodicon36);
    ui->femaleProduct16->setFlat(true);
    ui->femaleProduct16->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon37(prod37.getPicturePath());
    ui->femaleProduct17->setIcon(prodicon37);
    ui->femaleProduct17->setFlat(true);
    ui->femaleProduct17->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon38(prod38.getPicturePath());
    ui->femaleProduct18->setIcon(prodicon38);
    ui->femaleProduct18->setFlat(true);
    ui->femaleProduct18->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon39(prod39.getPicturePath());
    ui->femaleProduct19->setIcon(prodicon39);
    ui->femaleProduct19->setFlat(true);
    ui->femaleProduct19->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap prodicon40(prod40.getPicturePath());
    ui->femaleProduct20->setIcon(prodicon40);
    ui->femaleProduct20->setFlat(true);
    ui->femaleProduct20->setStyleSheet("QPushButton { background-color: transparent }");

    ui->receiptLabel->setStyleSheet("background-color: transparent;");

    //system icons
    QPixmap icon(":/res/resources/logo1.png");
    QIcon winicon(icon);
    this->setWindowIcon(winicon);

    int w = ui->logo_label1->width();
    int h = ui->logo_label1->height();
    ui->logo_label1->setPixmap(icon.scaled(w,h, Qt::KeepAspectRatio) );
    ui->logo_label2->setPixmap(icon.scaled(w,h, Qt::KeepAspectRatio) );

    QPixmap bagIcon(":/res/resources/shopping bag.png");
    ui->cartButton->setIcon(bagIcon);
    ui->cartButton->setFlat(true);
    ui->cartButton->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap profIcon(":/res/resources/profile.png");
    ui->profileButton->setIcon(profIcon);
    ui->profileButton->setFlat(true);
    ui->profileButton->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap logoutIcon(":/res/resources/logout.png");
    ui->logoutButton->setIcon(logoutIcon);
    ui->logoutButton->setFlat(true);
    ui->logoutButton->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap backIcon(":/res/resources/backLogo.png");
    ui->mainScreenButton->setIcon(backIcon);
    ui->mainScreenButton->setFlat(true);
    ui->mainScreenButton->setStyleSheet("QPushButton { background-color: transparent }");
    ui->pass_to_loginPage->setIcon(backIcon);
    ui->pass_to_loginPage->setFlat(true);
    ui->pass_to_loginPage->setStyleSheet("QPushButton { background-color: transparent }");

    QPixmap notLikedIcon(":/res/resources/kalpLogoNotLiked.png");
    ui->likeButton->setIcon(notLikedIcon);
    ui->likeButton->setFlat(true);
    ui->likeButton->setStyleSheet("QPushButton { background-color: transparent }");

}

//Deconstructor
MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::closeEvent(QCloseEvent *event)
{
    if(!(ui->stackedWidget->currentIndex() == 0 || ui->stackedWidget->currentIndex() == 1)){
        on_logoutButton_clicked();
    }
}


//page changing buttons
void MainWindow::on_gotoSignUp_clicked(){ui->stackedWidget->setCurrentIndex(1);}


//Login-SignUp
void MainWindow::on_signUpButton_clicked()
{
    //Signs up the customer, it saves the data somewhere.

    //make a new customer and replace it with the user

    if(ui->name_input_signup->text().toStdString().length() < 3){
        QMessageBox::warning(this, "Sign up Failed", "You need to enter at least 3 characters for name tab");
        ui->name_input_signup->clear();
    }else if(ui->surname_input_signup->text().toStdString() == ""){
        QMessageBox::warning(this, "Sign up Failed", "You need to enter at least 3 characters for surname tab");
        ui->surname_input_signup->clear();
    }else if(!ui->email_input_signup->text().contains(".com")){
        QMessageBox::warning(this, "Sign up Failed", "Please Enter valid e-mail adress");
        ui->email_input_signup->clear();
    }else if(ui->password_input_signup->text().toStdString().length() < 3){
        QMessageBox::warning(this, "Sign up Failed", "Please Enter at least 3 characters for password");
        ui->email_input_signup->clear();
    }else if(isRegistered(ui->email_input_signup->text())){
        QMessageBox::warning(this, "This mail is a member of outift", "Please Enter different mail");
    }else{
        user = Customer(
            ui->name_input_signup->text(),
            ui->surname_input_signup->text(),
            Gender::Male,
            ui->email_input_signup->text(),
            ui->password_input_signup->text()
            );

        QString workingDirectory = QCoreApplication::applicationDirPath();
        QString relativeFilePath = "customerData.txt";
        QString filePath = workingDirectory + "/" + relativeFilePath;
        QFile file(filePath);

        //write the data of the user
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream stream(&file);
            stream << QString::fromStdString("Name: " + user.name.toStdString() + "\n");
            stream << QString::fromStdString("Surname: " + user.surname.toStdString() + "\n");
            stream << QString::fromStdString("Email: " + user.email.toStdString() + "\n");
            stream << QString::fromStdString("Password: " + user.password.toStdString() + "\n");
            stream << QString::fromStdString("Favorites: \n");
            stream << QString::fromStdString("Previous Orders: \n");
            stream << "-------------\n"; //Separator for multiple entries
            file.close();
        }
        ui->stackedWidget->setCurrentIndex(0);
    }


}


bool MainWindow::isRegistered(QString emailEntered)
{
    QString workingDirectory = QCoreApplication::applicationDirPath();
    QString relativeFilePath = "customerData.txt";
    QString filePath = workingDirectory + "/" + relativeFilePath;
    QFile file(filePath);


    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
         // Create a QTextStream to read from the file
         QTextStream stream(&file);

         // Variables to store email and password
         QString email;



         // Read the content of the file line by line
         while (!stream.atEnd()) {
            QString line = stream.readLine();

            // Extracting email and password from the lines
            if (line.startsWith("Email: ")) {
                email = line.mid(7); // Assuming "Email: " is 7 characters long
            }
            // Check for the separator line to identify the end of an entry
            if (line == "-------------") {
                // Perform comparison with user-provided values

                if ( emailEntered == email )  {
                    file.close();  // Close the file after successful login
                    return true;
                }
                // Reset variables for the next entry
                email.clear();
            }
         }
         // Close the file
         file.close();
    }
    return false;

}

void MainWindow::on_loginButton_clicked()
{
    //checks the data if its correct, then it logs in!
    QPixmap notLikedIcon(":/res/resources/kalpLogoNotLiked.png");
    ui->likeButton->setIcon(notLikedIcon);

    // Get the application's working directory
    QString workingDirectory = QCoreApplication::applicationDirPath();
    QString relativeFilePath = "customerData.txt";
    QString filePath = workingDirectory + "/" + relativeFilePath;
    QFile file(filePath);
    bool isTrueData = false;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
         // Create a QTextStream to read from the file
         QTextStream stream(&file);

         // Variables to store email and password
         QString email;
         QString password;
         QString name;
         QString surname;
         QString favorites;
         QString previousOrders;


         // Read the content of the file line by line
         while (!stream.atEnd()) {
            QString line = stream.readLine();

            // Extracting email and password from the lines

            if (line.startsWith("Name: ")) {
                name = line.mid(6); // Assuming "Email: " is 6 characters long
            }else if (line.startsWith("Surname: ")) {
                surname = line.mid(9); // Assuming "Email: " is 7 characters long
            } else if (line.startsWith("Email: ")) {
                email = line.mid(7); // Assuming "Email: " is 7 characters long
            } else if (line.startsWith("Password: ")) {
                password = line.mid(10); // Assuming "Password: " is 10 characters long
            }else if (line.startsWith("Favorites: ")) {
                favorites = line.mid(11); // Assuming "Favorites: " is 11 characters long
            }else if (line.startsWith("Previous Orders: ")){
                previousOrders = line.mid(17);
            }

            // Check for the separator line to identify the end of an entry
            if (line == "-------------") {
                // Perform comparison with user-provided values
                QString userInputEmail = ui->email_login->text();
                QString userInputPassword = ui->password_login->text();

                if ( (userInputEmail == email)  &&  (userInputPassword == password) ) {
                    file.close();  // Close the file after successful login
                    Customer temp(name, surname, Gender::Male, email, password);
                    user = Customer(temp);
                    isTrueData = true;
                    user.setFavorites(favorites,products);
                    user.setPreviousOrders(previousOrders,products);

                    if (user.getFavorites().size() != 0){
                        for (Product  p: user.getFavorites()){

                            ui->favoritesComboBox->addItem(QIcon(p.getPicturePath()), p.getExplanation() );
                        }
                    }

                    //Sets Previous Orders combobox
                    for(Product prod : user.previousOrders){
                        QIcon icon(prod.getPicturePath());
                        QString explanation = prod.getExplanation();
                        ui->prevOrderComboBox->addItem(icon, explanation);

                    }

                    //go to the main page!
                    ui->stackedWidget->setCurrentIndex(2);
                    break;
                }
                // Reset variables for the next entry
                email.clear();
                password.clear();
            }


         }

         // Close the file
         file.close();
    }


    if (!isTrueData){
         QMessageBox::warning(this, "Match couldn't found", "There is no user for mail");
         ui->email_login->clear();
         ui->password_login->clear();


    }


}


//Gets products
QVector<Product> getProductsVector(){
    //file
    QVector<Product> products;
    QFile file(":/res/resources/product1.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Unable to open file";
    }

    QTextStream in(&file);
    Product currentProduct; // Geçici bir ProductStruct nesnesi
    bool readingProduct = false; // Ürün okuma durumu

    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.contains("productstart:")) {
            readingProduct = true;
            currentProduct = Product(); // Yeni bir ürün başladığında ProductStruct'i sıfırla
        } else if (line.contains("productend:") && readingProduct) {
            products.push_back(currentProduct); // Ürün okuma tamamlandığında vektöre ekle
            readingProduct = false;
        } else if (readingProduct) {
            if (line.contains("productid:")) {
                currentProduct.setId(line.mid(line.indexOf(":") + 2).toInt());
            }if (line.contains("productpath:")) {
                currentProduct.setPicturePath( line.mid(line.indexOf(":") + 2) );
            } else if (line.contains("productexp:")) {
                currentProduct.setExplanation(line.mid(line.indexOf(":") + 2));
            } else if (line.contains("cost:")) {
                currentProduct.setCost(line.mid(line.indexOf(":") + 2).toInt());
            }else if (line.contains("Number of likes: ")){
                currentProduct.setLikeCount((line.mid(line.indexOf(":") + 2).toInt()));
            }
        }
    }

    file.close();
    return products;

}

//product pages
void MainWindow::on_maleButton_clicked(){ui->productsPage->setCurrentIndex(1);}
void MainWindow::on_femaleButton_clicked(){ui->productsPage->setCurrentIndex(0);}

//Menu Buttons
void MainWindow::on_mainScreenButton_clicked(){
    QPixmap notLikedIcon(":/res/resources/kalpLogoNotLiked.png");
    ui->likeButton->setIcon(notLikedIcon);
    ui->changingPage->setCurrentIndex(0);
}
void MainWindow::on_logoutButton_clicked(){

    ui->stackedWidget->setCurrentIndex(0);


    ui->favoritesComboBox->clear();
    ui->prevOrderComboBox->clear();

    user.saveFavorites();
    user.savePreviousOrders();




    ui->email_login->clear();
    ui->password_login->clear();
}



//Product Buttons!
void MainWindow::on_productButtonClicked(Product& product)
{
    //Make the current product shown
    currentProduct = &product;
     ui->commentListWidget->clear();
    currentProduct->readComments();



    //Change the Product Page
    ui->changingPage->setCurrentIndex(1);
    ui->product_explaination->setText(QString(product.getExplanation()));
    QPixmap productIcon(product.getPicturePath());
    int width = ui->product_image->width();
    int height = ui->product_image->height();
    ui->product_image->setPixmap(productIcon.scaled(width, height, Qt::KeepAspectRatio));
    ui->product_cost->setText(QString::number(product.getCost(), 'f', 2) + " TL");
    ui->likeCountLabel->setText(QString::number(product.getLikeCount())); // Like sayısını güncelle
    displayCommentsForProduct(product);


}

//For Female Products
void MainWindow::on_femaleProduct1_clicked(){on_productButtonClicked(prod1);}
void MainWindow::on_femaleProduct2_clicked(){on_productButtonClicked(prod2);}
void MainWindow::on_femaleProduct3_clicked(){on_productButtonClicked(prod3);}
void MainWindow::on_femaleProduct4_clicked(){on_productButtonClicked(prod4);}
void MainWindow::on_femaleProduct5_clicked(){on_productButtonClicked(prod5);}
void MainWindow::on_femaleProduct6_clicked(){on_productButtonClicked(prod6);}
void MainWindow::on_femaleProduct7_clicked(){on_productButtonClicked(prod7);}
void MainWindow::on_femaleProduct8_clicked(){on_productButtonClicked(prod8);}
void MainWindow::on_femaleProduct9_clicked(){on_productButtonClicked(prod9);}
void MainWindow::on_femaleProduct10_clicked(){on_productButtonClicked(prod10);}
void MainWindow::on_femaleProduct11_clicked(){on_productButtonClicked(prod11);}
void MainWindow::on_femaleProduct12_clicked(){on_productButtonClicked(prod12);}
void MainWindow::on_femaleProduct13_clicked(){on_productButtonClicked(prod33);}
void MainWindow::on_femaleProduct14_clicked(){on_productButtonClicked(prod34);}
void MainWindow::on_femaleProduct15_clicked(){on_productButtonClicked(prod35);}
void MainWindow::on_femaleProduct16_clicked(){on_productButtonClicked(prod36);}
void MainWindow::on_femaleProduct17_clicked(){on_productButtonClicked(prod37);}
void MainWindow::on_femaleProduct18_clicked(){on_productButtonClicked(prod38);}
void MainWindow::on_femaleProduct19_clicked(){on_productButtonClicked(prod39);}
void MainWindow::on_femaleProduct20_clicked(){on_productButtonClicked(prod40);}

//For Male Products
void MainWindow::on_maleProduct1_clicked(){on_productButtonClicked(prod13);}
void MainWindow::on_maleProduct2_clicked(){on_productButtonClicked(prod14);}
void MainWindow::on_maleProduct3_clicked(){on_productButtonClicked(prod15);}
void MainWindow::on_maleProduct4_clicked(){on_productButtonClicked(prod16);}
void MainWindow::on_maleProduct5_clicked(){on_productButtonClicked(prod17);}
void MainWindow::on_maleProduct6_clicked(){on_productButtonClicked(prod18);}
void MainWindow::on_maleProduct7_clicked(){on_productButtonClicked(prod19);}
void MainWindow::on_maleProduct8_clicked(){on_productButtonClicked(prod20);}
void MainWindow::on_maleProduct9_clicked(){on_productButtonClicked(prod21);}
void MainWindow::on_maleProduct10_clicked(){on_productButtonClicked(prod22);}
void MainWindow::on_maleProduct11_clicked(){on_productButtonClicked(prod23);}
void MainWindow::on_maleProduct12_clicked(){on_productButtonClicked(prod24);}
void MainWindow::on_maleProduct13_clicked(){on_productButtonClicked(prod25);}
void MainWindow::on_maleProduct14_clicked(){on_productButtonClicked(prod26);}
void MainWindow::on_maleProduct15_clicked(){on_productButtonClicked(prod27);}
void MainWindow::on_maleProduct16_clicked(){on_productButtonClicked(prod28);}
void MainWindow::on_maleProduct17_clicked(){on_productButtonClicked(prod29);}
void MainWindow::on_maleProduct18_clicked(){on_productButtonClicked(prod30);}
void MainWindow::on_maleProduct19_clicked(){on_productButtonClicked(prod31);}
void MainWindow::on_maleProduct20_clicked(){on_productButtonClicked(prod32);}

//Product Page Buttons
void MainWindow::on_product_favoriteButton_clicked(){
    if(user.addFavorite(*currentProduct)){
        ui->favoritesComboBox->addItem(QIcon(currentProduct->getPicturePath()), currentProduct->getExplanation() );
    }

}

QString sizeToString(Product::SIZE size) {
    switch(size) {
    case Product::SIZE::XSMALL: return "XSMALL";
    case Product::SIZE::SMALL: return "SMALL";
    case Product::SIZE::MEDIUM: return "MEDIUM";
    case Product::SIZE::LARGE: return "LARGE";
    case Product::SIZE::XLARGE: return "XLARGE";
    default: return ""; // Handle default case if necessary
    }
}


void MainWindow::on_product_sendToCart_clicked(){
    user.addCart(*currentProduct);
    QIcon icon(currentProduct->getPicturePath());
    QString explanation = currentProduct->getExplanation();
    QString size = sizeToString(currentProduct->getSelectedSize()); // Use your method to convert enum to QString


    // Add an item to the combo box with an icon and text
    ui->myPurchasesComboBox->addItem(icon, explanation + " - " + size);

}

//Goes to profile page
void MainWindow::on_profileButton_clicked()
{
    ui->changingPage->setCurrentIndex(2);
    ui->welcomeLabel->setText(QString::fromStdString( ("Welcome, " + user.name.toStdString() + " " + user.surname.toStdString()) ) );
    ui->pointsLabel->setText(QString::fromStdString( ("Your Points: " +  to_string( user.myPoints()) )));

}


void MainWindow::on_discardButton_clicked()
{
    QString expl = ui->favoritesComboBox->currentText();
    for(Product prod : user.getFavorites()){
        if( prod.getExplanation() == expl ){
            user.removeFavorite(prod.getId());
        }
    }
    ui->favoritesComboBox->removeItem(ui->favoritesComboBox->currentIndex());
}


void MainWindow::on_sendFavoriteToCartButton_clicked()
{
    QString expl = ui->favoritesComboBox->currentText();
    for(Product prod : user.getFavorites()){
        if( prod.getExplanation()== expl ){

            QIcon icon(prod.getPicturePath());
            QString explanation = prod.getExplanation();
            QString size = sizeToString(prod.getSelectedSize()); // Use your method to convert enum to QString


            // Add an item to the combo box with an icon and text
            ui->myPurchasesComboBox->addItem(icon, explanation + " - " + size);
            user.addCart(prod);
        }

    }

   // ui->myPurchasesComboBox->addItem();
}

//Goes to cart page
void MainWindow::on_cartButton_clicked()
{
    ui->changingPage->setCurrentIndex(3);
}

void MainWindow::on_buyButton_clicked()
{

    ui->changingPage->setCurrentIndex(4);

    Payment payment(user,user.getCartObject() ,Discount::NoDiscount);


    if(user.myPoints() < 100){
        payment.setDiscount(Discount::NoDiscount);
    } else if (user.myPoints() > 100 && user.myPoints() < 200){
        user.addPoint(-100);
        payment.setDiscount(Discount::D10);
    } else if (user.myPoints() > 200 && user.myPoints() < 300){
        user.addPoint(-200);
        payment.setDiscount(Discount::D20);
    }else if (user.myPoints() > 300){
        user.addPoint(-300);
        payment.setDiscount(Discount::D50);
    }


    Receipt receipt(payment);

    ui->orderNoLabel->setText(QString::fromStdString("ORDER NO: " + receipt.orderNo().toStdString()));

    user.addPoint(receipt.addPoint());

    ui->receiptLabel->setText(receipt.toString()); 

    //handle the cart
    ui->myPurchasesComboBox->clear();
    user.addCartToPreviousOrders(user.cart.getProducts());
    for(Product prod : user.cart.getProducts()){
        ui->prevOrderComboBox->addItem(QIcon(prod.getPicturePath()), prod.getExplanation());
    }
    user.cart.clearCart();

}
void MainWindow::on_likeButtonClicked() {
    if (!currentProduct) {
        return; // Eğer currentProduct null ise fonksiyondan çık
    }

    int productId = currentProduct->getId();
    if (user.hasLikedProduct(productId)) {
        QMessageBox::information(this, "Like", "You have already liked this product.");
        return;
    }

    if (user.likeProduct(productId)) {
        currentProduct->likeProduct();
        ui->likeCountLabel->setText(QString::number(currentProduct->getLikeCount()));
    }
}

void MainWindow::on_submitCommentButtonClicked() {
    if (!currentProduct) {
        return; // Eğer currentProduct null ise fonksiyondan çık
    }

    // Kullanıcı tarafından girilen yorumu al
    QString comment = ui->commentTextEdit->toPlainText().trimmed();

    // Yorum boş değilse, ürüne ekle ve yorum listesini güncelle
    if (!comment.isEmpty()) {

        if(user.hasInpreviousOrders(*currentProduct)){
            QString c = user.name  + " "+  user.surname +": "+ comment;
            (currentProduct)->addComment(c);
             currentProduct->saveComments();
            displayCommentsForProduct(*currentProduct);

            ui->commentTextEdit->clear(); // Yorum yazma alanını temizle
        }else{
            QMessageBox::warning(this, "invalid", "you can only make comment for product you bought");
            ui->commentTextEdit->clear();
        }

    }
}

void MainWindow::displayCommentsForProduct(const Product &product) {

    ui->commentListWidget->clear();

    for ( QString comment : product.getComments()) {
        ui->commentListWidget->addItem(comment);
    }
}

void MainWindow::on_removeButton_clicked()
{

    if(ui->myPurchasesComboBox->count() != 0) {
        // combo box boş değil
        int comboBoxIndex = ui->myPurchasesComboBox->currentIndex();
        int productId = user.cart.getProducts().at(comboBoxIndex).getId();

        ui->myPurchasesComboBox->removeItem(comboBoxIndex);

        user.cart.removeProductById(productId);
    }else{
        QMessageBox::warning(this, "alrady empty", "no found product to remove");
    }

}


void MainWindow::on_sizeComboBox_currentTextChanged(const QString &arg1)
{

    Product::SIZE selectedSize;
    if (arg1 == "XSMALL") {
        selectedSize = Product::SIZE::XSMALL;
    } else if (arg1 == "SMALL") {
        selectedSize = Product::SIZE::SMALL;
    } else if (arg1 == "MEDIUM") {
        selectedSize = Product::SIZE::MEDIUM;
    } else if (arg1 == "LARGE") {
        selectedSize = Product::SIZE::LARGE;
    } else if (arg1 == "XLARGE") {
        selectedSize = Product::SIZE::XLARGE;
    }

    currentProduct->setSelectedSize(selectedSize);

}


void MainWindow::on_pass_to_loginPage_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_likeButton_clicked()
{
    QPixmap likedIcon(":/res/resources/kalpLogoLiked.png");
    ui->likeButton->setIcon(likedIcon);
}

void MainWindow::on_prevOrderToProduct_clicked()
{
    QString expl = ui->prevOrderComboBox->currentText();
    Product* theProduct = nullptr;
    for (Product& prod : products) {
        if (prod.getExplanation() == expl) {
            theProduct = &prod;
            break;
        }
    }
    if (theProduct) {
        on_productButtonClicked(*theProduct);
    }
}


void MainWindow::on_submitCommentButton_clicked()
{
    //if commented give them a little treat :3
    user.addPoint(1);
}

