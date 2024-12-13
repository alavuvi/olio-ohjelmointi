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

void MainWindow::on_btnCount_clicked()
{
    counter++;
    QString s = QString::number(counter);
 //   qDebug()<<"klikkasit Counter buttonia";
    ui->labelInfo->setText(QString("Painiketta Counter painettu %1 kertaa").arg(s));
    ui->txtResult->setText(s);
}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    QString s = QString::number(counter);
 //   qDebug()<<"klikkasit Reset buttonia";
    ui->labelInfo->setText(QString("Painiketta Counter painettu %1 kertaa").arg(s));
    ui->txtResult->setText(s);
}
