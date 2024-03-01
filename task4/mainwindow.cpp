#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCheckBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::adddTask);
    connect(ui->removeButton, &QPushButton::clicked, this, &MainWindow::removeeTask);
   // connect(ui->Remove_all, &QPushButton::clicked, this, &MainWindow::removeall);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::removeeTask()
{
    // QCheckBox* newcheck = new QCheckBox("Done",this);
    QString task = ui->addTask->text();
    if (!task.isEmpty()) {
        ui->listWidget->addItem(task);
        ui->addTask->clear();
    } else {
        QMessageBox::warning(this, "Warning", "Please enter a task.");
    }
}
void MainWindow::adddTask()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    // item->setFlags(item>flags()ll);

    if (item != nullptr) {
        delete item;
    } else {
        QMessageBox::warning(this, "Warning", "Please select a task to remove.");
    }
}


void MainWindow::on_Remove_all_clicked()
{
    ui->listWidget->clear();
}

