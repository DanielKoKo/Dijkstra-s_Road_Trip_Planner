#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "binarysearchtree.h"
#include "stadium.h"
#include "souvenir.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

    //Displays all stadiums in preorder
    void displayPreOrder(StadiumNode *) const;

private slots:
    void on_american_button_clicked();

    void on_national_button_clicked();

    void on_major_button_clicked();

private:
    Ui::MainWindow *ui;

    BinarySearchTree b_amer;   //American binary tree
    BinarySearchTree b_nat;    //National binary tree
    BinarySearchTree b_major;  //All stadiums binary tree
};
#endif // MAINWINDOW_H
