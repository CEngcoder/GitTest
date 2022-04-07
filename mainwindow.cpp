#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton* btn = new QPushButton(this);
    btn->setFixedSize(20,20);

    QLabel* label = new QLabel(this);
    label->setFixedSize(100,100);
    label->setText("增加按钮");


}

MainWindow::~MainWindow()
{
    delete ui;
}

