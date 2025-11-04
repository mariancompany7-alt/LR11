#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Firm.h"
#include <QMessageBox>

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

void MainWindow::on_createObj_clicked()
{
    if(ui->lineEdit->text() == nullptr || ui->lineEdit_2->text() == nullptr) {
        QMessageBox::critical(this, "Error", "You need to fill all fields");
    } else if(ui->lineEdit->text() == nullptr && ui->lineEdit_2->text() == nullptr){
        QMessageBox::critical(this, "Error", "You need to fill all fields");
    }
    else {
        Firm* ptr = new Firm();
        QMessageBox::information(this, "Object created successfully!", "");
    }
}

void MainWindow::on_createObj_2_clicked()
{
    Firm object(ui->lineEdit->text(), ui->lineEdit_2->text().toInt());
    ui->label->setText("\nResult:" + object.toString());
}

void MainWindow::on_createObj_3_clicked()
{
    QApplication::exit();
}
