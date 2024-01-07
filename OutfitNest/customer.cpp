// Customer.cpp
#include "Customer.h"
#include <QString>
#include "qdebug.h"

using namespace std;

QVector<Product> favorites;
QVector<Product> previousOrders;
Cart cart;

Customer::Customer(QString name, QString surname, Gender gender,
                   QString email, QString password)
    : name(name), surname(surname), gender(gender),
    email(email), password(password), point(0){
}

Customer::~Customer() {

}
bool Customer::isCartEmpty(Product prod){
    return cart.getProducts().empty();
}
bool Customer::addFavorite(Product prod){
    int checker = 0;
    for(Product product : favorites){
        if(prod.getId() == product.getId()){
            checker++;
            }
    }

    if (checker == 0){
        favorites.push_back(prod);
            return true;
    }
    else
            return false;
}

void Customer::removeFavorite(int id){
    int index = 0;
    for(Product product : favorites){
        if(product.getId() == id){
            favorites.erase(favorites.begin() + index);
            break;
        }
        index++;
    }
}

void Customer::removePrevious(int id)
{
    int index = 0;
    for(Product product : this->previousOrders){
        if(product.getId() == id){
            this->previousOrders.erase(previousOrders.begin() + index);
            break;
        }
        index++;
    }
}


QVector<Product> Customer::getFavorites(){
    return favorites;
}

void Customer::setFavorites(QString favorites, QVector<Product> products)
{
    QString id = "";
    for(int i = 0 ; i < favorites.length(); i++){
        if(favorites.at(i) == ','){
            for (Product product : products){
                if(product.getId() == id.toInt()){
                    this->addFavorite(product);
                    break;
                }
            }
            id = "";
        }else{
            id += favorites.at(i);
        }
    }
}

void Customer::addCart(Product prod){
    this->cart.addProduct(prod);
}

void Customer::removeCart(int id){
    this->cart.removeProductById(id);
}

QVector<Product>  Customer::getCart(){
    return this->cart.getProducts();
}

//getter
int Customer::myPoints() const {
    return point;
}
void Customer::addPoint(int amount) {
    point += amount;
}
Cart Customer::getCartObject() {
    return cart;
}
bool Customer::likeProduct(int productId) {

    if (likedProductIds.find(productId) != likedProductIds.end()) {
        return false;
    }


    likedProductIds.insert(productId);
    return true;
}

bool Customer::hasLikedProduct(int productId) const {

    return likedProductIds.find(productId) != likedProductIds.end();
}

void Customer::addCartToPreviousOrders(QVector<Product> cart)
{
    for(int i = 0; i< cart.size() ; i++){
        previousOrders.push_back(cart.at(i));

    }
}

bool Customer::hasInpreviousOrders(Product& p)
{
    bool flag;
    for(int i = 0; i< previousOrders.size() ; i++){
        if(previousOrders.at(i).getId() == p.getId()){
            flag = true;
            break;
        }
    }

    return flag;
}

void Customer::setPreviousOrders(QString previousIDs, QVector<Product> products)
{
    QString id = "";
    for(int i = 0 ; i < previousIDs.length(); i++){
        if(previousIDs.at(i) == ','){
            for (Product product : products){
                if(product.getId() == id.toInt()){
                    this->previousOrders.push_back(product);
                    break;
                }
            }
            id = "";
        }else{
            id += previousIDs.at(i);
        }
    }
}

void Customer::saveFavorites()
{
    QString favorites = "";
    for(Product p: this->getFavorites()){
        favorites += QString::number(p.getId()) + ",";

    }

    for(Product p :this->getFavorites()){
        this->removeFavorite(p.getId());
    }

    QString workingDirectory = QCoreApplication::applicationDirPath();
    QString relativeFilePath = "customerData.txt";
    QString filePath = workingDirectory + "/" + relativeFilePath;
    QFile file(filePath);

    QStringList fileContent;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            fileContent << in.readLine();
        }
        file.close();

    }

    // Değiştirmek istediğiniz yeni favoriler


    bool found = false;
    for (int i = 0; i < fileContent.size(); ++i) {
        if (fileContent[i].startsWith("Email: ") && fileContent[i].mid(7) == this->email) {
            for (int j = i; j < fileContent.size(); ++j) {
                if (fileContent[j].startsWith("Favorites: ")) {
                    fileContent[j] = "Favorites: " + favorites;
                    found = true;
                    break;
                }
            }
        }
        if (found) break;
    }

    if (found && file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const QString &line : fileContent) {
            out << line << "\n";
        }
        file.close();
    }
}

void Customer::savePreviousOrders()
{
    QString previousOrders = "";
    for(Product p: this->previousOrders){
        previousOrders += QString::number(p.getId()) + ",";

    }

    for(Product p :this->previousOrders){
        this->removePrevious(p.getId());
    }

    QString workingDirectory = QCoreApplication::applicationDirPath();
    QString relativeFilePath = "customerData.txt";
    QString filePath = workingDirectory + "/" + relativeFilePath;
    QFile file(filePath);

    QStringList fileContent;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            fileContent << in.readLine();
        }
        file.close();

    }

    // Değiştirmek istediğiniz yeni favoriler


    bool found = false;
    for (int i = 0; i < fileContent.size(); ++i) {
        if (fileContent[i].startsWith("Email: ") && fileContent[i].mid(7) == this->email) {
            for (int j = i; j < fileContent.size(); ++j) {
                if (fileContent[j].startsWith("Previous Orders: ")) {
                    fileContent[j] = "Previous Orders: " + previousOrders;
                    found = true;
                    break;
                }
            }
        }
        if (found) break;
    }

    if (found && file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const QString &line : fileContent) {
            out << line << "\n";
        }
        file.close();
    }
}



