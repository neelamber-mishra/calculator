#include "mainwindow.h"
#include "./ui_mainwindow.h"

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
int a,b,s;

void MainWindow::on_add_clicked()
{
    a = ui->a->text().toInt();
    b = ui->b->text().toInt();
    s = a+b;
    ui->result->setText(QString::number(s));
}


void MainWindow::on_sub_clicked()
{
     a = ui->a->text().toInt();
    b = ui->b->text().toInt();
    s = a-b;
    ui->result->setText(QString::number(s));
}


void MainWindow::on_mul_clicked()
{
    a = ui->a->text().toInt();
    b = ui->b->text().toInt();
    s = a*b;
    ui->result->setText(QString::number(s));
}


void MainWindow::on_div_clicked()
{
     ui->result->setText(QString::number(0));
}

