// payment.h

#ifndef PAYMENT_H
#define PAYMENT_H

#include "customer.h"
#include "cart.h"

// Discount enum tanımı
enum Discount
{
    NoDiscount,
    D10,
    D20,
    D50
};

class Payment
{
public:
    Payment(Customer customer, Cart cart, Discount discount);

    double grandTotal() const;
    double total() const;
    double applyDiscount() const;
    Customer getCustomer() const;
    Cart getCart() const;
    void setDiscount(Discount discount);
    Discount getDiscount();
    string discountPercentage() const;

private:
    Customer customer;
    Cart cart;
    Discount discount; // Discount enum'u için üye değişken
};

#endif // PAYMENT_H
