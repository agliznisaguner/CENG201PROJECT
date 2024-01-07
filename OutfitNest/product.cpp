


#include "product.h"

enum class SIZE { XSMALL, SMALL, MEDIUM, LARGE, XLARGE };
// Default constructor



Product::Product() : id(0), cost(0.0), likeCount(0) {}

// Parameterized constructor
Product::Product(int id, QString picturePath, QString explanation, double cost, int likeCount)
    : id(id), picturePath(picturePath), explanation(explanation), cost(cost), likeCount(likeCount) {


}

Product::Product(const Product& temp)
    : id(temp.id),
    picturePath(temp.picturePath),
    explanation(temp.explanation),
    cost(temp.cost),
    likeCount(temp.likeCount) {}


Product::SIZE Product::getSelectedSize() const {
    return selectedSize;
}

QString Product::getSizeString() const {
    switch(getSelectedSize()) {
    case SIZE::XSMALL: return "XS";
    case SIZE::SMALL:  return "S";
    case SIZE::MEDIUM: return "M";
    case SIZE::LARGE:  return "L";
    case SIZE::XLARGE: return "XL";
    }
}

void Product::setSelectedSize(SIZE size) {
    selectedSize = size;
}


// Getter and Setter implementations
int Product::getId() const {
    return id;
}

void Product::setId(int value) {
    id = value;
}

QString Product::getPicturePath() const {
    return picturePath;
}

void Product::setPicturePath(const QString& value) {
    picturePath = value;
}

QString Product::getExplanation() const{
    return explanation;
}

void Product::setExplanation(const QString& value) {
    explanation = value;
}

void Product::saveComments()
{
    QString updatedComments = "";
    for(int i = 0; i < this->getComments().size(); i++){
        QString currentComment = this->getComments().at(i);
        for (int j= 0; j < currentComment.size(); j++){
            if(j !=  currentComment.size()-1){
                if(currentComment.at(j) == ':' && currentComment.at(j+1) == ' '){
                    updatedComments += ",";
                    j += 2;
                }
            }
            updatedComments += currentComment.at(j);
        }
        updatedComments += "-";
    }

    // this->comments.clear();

    QString workingDirectory = QCoreApplication::applicationDirPath();
    QString relativeFilePath = "product.txt";
    QString filePath = workingDirectory + "/" + relativeFilePath;
    QFile file(filePath);




    QTextStream in(&file);
    QString content;
    bool isCurrentProduct = false;
    QString newContent;

    QStringList fileContent;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            fileContent << in.readLine();
        }
        file.close();

    }



    bool found = false;
    for (int i = 0; i < fileContent.size(); ++i) {
        if (fileContent[i].startsWith("productid: ") && fileContent[i].mid(11) == QString::number(this->getId())) {
            for (int j = i; j < fileContent.size(); ++j) {
                if (fileContent[j].startsWith("comments: ")) {
                    fileContent[j] = "comments: " + updatedComments;
                    found = true;
                    break;
                }
            }
        }
        if (found) break;
    }



    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (const QString &line : fileContent) {
            out << line << "\n";
        }
        file.close();
    }


}

double Product::getCost() const {
    return cost;
}

void Product::setCost(double value) {
    cost = value;
}

int Product::getLikeCount() const {
    return likeCount;
}

void Product::setLikeCount(int value) {
    likeCount = value;
}

void Product::readComments()  {

    QString workDirec = QCoreApplication::applicationDirPath();
    QString relativeFilePath = "product.txt";
    QString filePath = workDirec + "/" + relativeFilePath;

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Unable to open file";
    }

    QTextStream in(&file);
    bool readingProduct = false; // Ürün okuma durumu
    QString commentsString;
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.contains("productstart:")) {
            readingProduct = true;
        } else if (line.contains("productend:") && readingProduct) {
            readingProduct = false;
        } else if (readingProduct) {
            if (line.contains("productid:")) {
                int idOfProduct = line.mid(line.indexOf(":") + 2).toInt();
                if(this->getId() != idOfProduct){
                    readingProduct = false;
                }else{
                    continue;
                }
            }else if(line.contains("comments: ")){
                commentsString = line.mid(line.indexOf(":" + 2 ));
                QVector<QString> t;
                QString comment = "";
                for(int i = 2; i < commentsString.size(); i++){
                    if(commentsString.at(i) == ','){
                        comment += ": ";
                    }else if(commentsString.at(i) == '-'){
                        if(!this->getComments().contains(comment)){
                            this->comments.push_back(comment);
                        }
                        comment = "";
                    }else{
                        comment += commentsString.at(i);
                    }
                }

            }
        }
    }

    file.close();
}
void Product::setComments(const QVector<QString>& value)  {
    comments = value;
}

// toQString implementation
QString Product::toQString() const {
    return QString("ID: %1 Price: %2").arg(id).arg(cost);
}
void Product::likeProduct() {
    likeCount++;
}

void Product::unlikeProduct() {
    if (likeCount > 0) likeCount--;
}
void Product::addComment( QString& comment) {

    this->comments.push_back(comment);


}

QVector<QString> Product::getComments() const
{
    return this->comments;
}
