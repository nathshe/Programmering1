#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->knapp, SIGNAL(clicked()),this, SLOT(summera()) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::summera()
{
    // t1 tilldelas innehållet i rutan "tal1".
    QString t1 = ui->tal1->text();
    QString t2 = ui->tal2->text();
    double dt1 = t1.toDouble();
    double dt2 = t2.toDouble();
    double summa =  dt1 + dt2;
    QString s = QString::number(summa);
    ui->label->setText(s);
}
