#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QLineEdit>
#include <QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);        
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if ((ui->lineEdit->text().isEmpty()) || (ui->lineEdit_2->text().isEmpty())) {
        QMessageBox::warning(this, "Validation Error", "Please fill out all fields.");
        return;
    }
    QMessageBox::information(this, "Form Submitted","Name: ");
    this->close();
}

