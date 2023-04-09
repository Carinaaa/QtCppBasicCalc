
#include "mainwindow.h"
#include "ui_mainwindow.h"


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

void MainWindow::on_plus_clicked()
{
    ui->result->setText(QString::number(ui->first_number->text().toFloat() + ui->second_number->text().toFloat()));
}


void MainWindow::on_minus_clicked()
{
    ui->result->setText(QString::number( ui->first_number->text().toFloat() - ui->second_number->text().toFloat()));
}


void MainWindow::on_multiply_clicked()
{
    ui->result->setText(QString::number( ui->first_number->text().toFloat() * ui->second_number->text().toFloat()));
}


void MainWindow::on_divide_clicked()
{
    if(!ui->second_number->text().toFloat())
    {
        ui->result->setText("Division by 0");
    }
    else{
        ui->result->setText(QString::number( ui->first_number->text().toFloat() / ui->second_number->text().toFloat()));
    }
}

