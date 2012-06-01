#include <QUrl>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_returnPressed()
{
    QString text = ui->lineEdit->text();
    ui->webView->load(QUrl(text));
}

void MainWindow::on_webView_urlChanged(const QUrl &arg1)
{
    ui->lineEdit->setText(arg1.toString());
}
