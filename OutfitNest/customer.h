// Customer.h
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include <QString>
#include "Product.h"
#include "Cart.h"
#include <set>
#include <QCoreApplication>
#include <QFile>

using namespace std;

enum class Gender{
    Male,
    Female
};

class Customer {
    std::set<int> likedProductIds;
public:
    // Constructors
    Customer(QString name, QString surname, Gender gender,
              QString email, QString password);

    // Destructor
    ~Customer();

    //Public Attributes
    QString name;
    QString surname;
    QString email;
    QString password;
    Gender gender;
    int point;
    Cart cart;
    QVector<Product> favorites;
    QVector<Product> previousOrders;
    Cart getCartObject();
    void addPoint(int amount);


    // Member functions
    int myPoints() const;
    bool isCartEmpty(Product prod);
    bool addFavorite(Product prod);
    void removeFavorite(int id);
    QVector<Product> getFavorites();
    void setFavorites(QString favorites, QVector<Product> products );

    void addCart(Product prod);
    void removeCart(int id);
    QVector<Product>  getCart();
    bool likeProduct(int productId);
    bool hasLikedProduct(int productId) const;
    void addCartToPreviousOrders(QVector<Product> cart);
    bool hasInpreviousOrders(Product& p);
    void setPreviousOrders(QString previousIDs, QVector<Product> products);
    void saveFavorites();
    void savePreviousOrders();
private:
    void removePrevious(int id);
};

#endif // CUSTOMER_H
