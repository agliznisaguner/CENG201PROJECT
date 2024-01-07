#include "cart.h"

Cart::Cart() {}

void Cart::addProduct(const Product& product) {
    products.push_back(product);
}

void Cart::removeProductById(int productId) {

    auto it = std::find_if(products.begin(), products.end(),
                           [productId](const Product& product) { return product.getId() == productId; });

    if (it != products.end()) {
        products.erase(it);
    }
}

// Function to get the vector of products in the cart
const QVector<Product>& Cart::getProducts() const {
    return products;
}

void Cart::clearCart() {
    products.clear();
}
