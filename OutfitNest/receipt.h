// receipt.h

#ifndef RECEIPT_H
#define RECEIPT_H

#include "payment.h"

class Receipt
{
public:
    Receipt(const Payment& payment);

    QString toString() const;
    int addPoint();
    QString orderNo() const;

private:
    Payment payment;
};

#endif // RECEIPT_H
