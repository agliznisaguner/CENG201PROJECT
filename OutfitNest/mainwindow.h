#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "product.h"
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void closeEvent(QCloseEvent *event) override;


private slots:
    void on_productButtonClicked(Product& product);

    void on_likeButtonClicked();

    void on_submitCommentButtonClicked();
    void displayCommentsForProduct(const Product &product);

    void on_gotoSignUp_clicked();

    void on_signUpButton_clicked();

    void on_loginButton_clicked();

    void on_maleButton_clicked();

    void on_femaleButton_clicked();

    void on_mainScreenButton_clicked();

    void on_logoutButton_clicked();

    void on_femaleProduct1_clicked();

    void on_femaleProduct2_clicked();

    void on_femaleProduct3_clicked();

    void on_femaleProduct4_clicked();

    void on_femaleProduct5_clicked();

    void on_femaleProduct6_clicked();

    void on_femaleProduct7_clicked();

    void on_femaleProduct8_clicked();

    void on_femaleProduct9_clicked();

    void on_femaleProduct10_clicked();

    void on_femaleProduct11_clicked();

    void on_femaleProduct12_clicked();

    void on_maleProduct1_clicked();
    void on_maleProduct2_clicked();
    void on_maleProduct3_clicked();
    void on_maleProduct4_clicked();
    void on_maleProduct5_clicked();
    void on_maleProduct6_clicked();
    void on_maleProduct7_clicked();
    void on_maleProduct8_clicked();
    void on_maleProduct9_clicked();
    void on_maleProduct10_clicked();
    void on_maleProduct11_clicked();
    void on_maleProduct12_clicked();

    void on_product_favoriteButton_clicked();

    void on_product_sendToCart_clicked();

    void on_profileButton_clicked();

    void on_discardButton_clicked();

    void on_sendFavoriteToCartButton_clicked();

    void on_cartButton_clicked();

    void on_buyButton_clicked();

    void on_femaleProduct13_clicked();

    void on_femaleProduct14_clicked();

    void on_femaleProduct15_clicked();

    void on_femaleProduct16_clicked();

    void on_femaleProduct17_clicked();

    void on_femaleProduct18_clicked();

    void on_femaleProduct19_clicked();

    void on_femaleProduct20_clicked();

    void on_maleProduct13_clicked();

    void on_maleProduct14_clicked();

    void on_maleProduct15_clicked();

    void on_maleProduct16_clicked();

    void on_maleProduct17_clicked();

    void on_maleProduct18_clicked();

    void on_maleProduct19_clicked();

    void on_maleProduct20_clicked();

    void on_removeButton_clicked();

    void on_sizeComboBox_currentTextChanged(const QString &arg1);

    void on_pass_to_loginPage_clicked();

    void on_likeButton_clicked();

    void on_prevOrderToProduct_clicked();


    void on_submitCommentButton_clicked();

private:
    Ui::MainWindow *ui;
    bool isRegistered(QString email);
    QListWidget *commentListWidget;
};
#endif // MAINWINDOW_H
