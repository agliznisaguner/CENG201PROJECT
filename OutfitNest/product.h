#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include <QVector>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QCoreApplication>
#include <QSet>
#include <QFile>


class Product {

private:
    int id;
    QString picturePath;
    QString explanation;
    double cost;
    int likeCount;
    void convertCommentsToVector(QString comments);
public:
    QVector<QString> comments;
    enum class SIZE { XSMALL, SMALL, MEDIUM, LARGE, XLARGE};
    SIZE selectedSize; //instance for enum
    // Constructors
    Product();
    Product(int id, QString picturePath, QString explanation, double cost, int likeCount);
    Product(const Product& temp);

    // Getter and Setter functions
    int getId() const;
    void setId(int value);

    QString getPicturePath() const;
    void setPicturePath(const QString& value);

    QString getExplanation() const;
    void setExplanation(const QString& value);
    void saveComments();

    double getCost() const;
    void setCost(double value);

    int getLikeCount() const;
    void setLikeCount(int value);

    void readComments() ;
    void setComments(const QVector<QString>& value)  ;

    void addComment( QString &comment);
    QVector<QString> getComments()const;
    void likeProduct();
    void unlikeProduct();

    SIZE getSelectedSize() const;
    void setSelectedSize(SIZE size);
    QString getSizeString() const;


    // Helper function to convert to QString
    QString toQString() const;
};

#endif // PRODUCT_H

