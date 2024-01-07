// payment.cpp

#include "payment.h"

Payment::Payment(Customer customer, Cart cart, Discount discount)
    : customer(customer), cart(cart), discount(discount)
{
}


void Payment::setDiscount(Discount discount) {
    this->discount = discount;
}

Discount Payment::getDiscount() {
    return discount;
}

Customer Payment::getCustomer() const {
    return customer;
}

Cart Payment::getCart() const {
    return cart;
}

double Payment::grandTotal() const
{

    return total() - applyDiscount();
}

double Payment::total() const
{
    double total = 0.0;
    for(Product product : cart.getProducts()) {
        total += product.getCost();
    }

    return total;

}

string Payment::discountPercentage() const{
    switch(discount){
    case NoDiscount:
        return " No Discount";
    case D10:
        return " %10";
    case D20:
        return " %20";
    case D50:
        return " %50";
    }


}

double Payment::applyDiscount() const
{

    double discountPercentage = 0.0;

    switch (discount)
    {
    case NoDiscount:
        discountPercentage = 0.0;
        break;
    case D10:
        discountPercentage = 10.0;
        break;
    case D20:
        discountPercentage = 20.0;
        break;
    case D50:
        discountPercentage = 50.0;
        break;
    }

    double discountAmount = (total() * discountPercentage) / 100;

    return discountAmount;
}
