#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPushButton* btn = new QPushButton(this);
    btn->setFixedSize(20,20);

}

MainWindow::~MainWindow()
{
    delete ui;
}

