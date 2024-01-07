#ifndef CART_H
#define CART_H

#include <vector>
#include "product.h"
using namespace std;

class Cart {
private:
    QVector<Product> products;

public:
    Cart();
    void addProduct(const Product& product);
    void removeProductById(int productId);
    const QVector<Product>& getProducts() const;
    void clearCart();

};

#endif // CART_H
