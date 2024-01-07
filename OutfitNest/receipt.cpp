// receipt.cpp

#include "receipt.h"
#include <QRandomGenerator>
#include <QDebug>

Receipt::Receipt(const Payment& payment)
    : payment(payment)
{
}

int Receipt::addPoint() {
    int addedPoints = payment.total() / 50;
    return addedPoints;
}

QString Receipt::orderNo() const {

    int orderNo = QRandomGenerator::global()->bounded(100000, 999999);

    return QString::number(orderNo);
}


QString Receipt::toString() const
{
    QString receiptString;

    // Sepetteki ürünleri al
    QVector<Product> products = payment.getCart().getProducts();

    // Her bir ürünü sırala
    for (const Product& product : products)
    {


        receiptString += QString("ID: %1, Name: %2, Cost: %3 TL\n")
                             .arg(product.getId())
                             .arg(product.getExplanation())
                             .arg(QString::number(product.getCost(), 'f', 2));

    }

    // Toplam tutarı ve uygulanan indirimi ekle
    receiptString += QString("\nTotal: %1 TL\nDiscount: %2\nGrand Total: %3 TL\n")
                         .arg(payment.total())
                         .arg(QString::fromStdString(payment.discountPercentage()))
                         .arg(payment.grandTotal());


    return receiptString;
}
