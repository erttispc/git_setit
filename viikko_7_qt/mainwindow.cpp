#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Alkutila";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plusButton_clicked()
{
    if (tila == 2){
    //haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 =n1.toInt();
    //haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 =n2.toInt();
    qDebug() << num1 << "+" << num2;

    result = num1 + num2;

    QString r = QString::number(result);
    ui->num3Edit->setText(r);
    // tila = 0;
    qDebug() << "Nykyinen tila: " << tila;
    }
}

void MainWindow::on_minusButton_clicked()
{
    if (tila == 2){
    //haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 =n1.toInt();
    //haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 =n2.toInt();
    qDebug() << num1 << "-" << num2;

    result = num1 - num2;

    QString r = QString::number(result);
    ui->num3Edit->setText(r);
    // tila = 0;
    qDebug() << "Nykyinen tila: " << tila;
    }
}

void MainWindow::on_divButton_clicked()
{
    if (tila == 2){
    //haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 =n1.toInt();
    //haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 =n2.toInt();
    qDebug() << num1 << "/" << num2;

    result = (float)num1 / num2;

    QString r = QString::number(result);
    ui->num3Edit->setText(r);
    // tila = 0;
    qDebug() << "Nykyinen tila: " << tila;
    }

}

void MainWindow::on_multButton_clicked()
{
    if (tila == 2){
    //haetaan num1
    QString n1 = ui->num1Edit->text();
    num1 =n1.toInt();
    //haetaan num2
    QString n2 = ui->num2Edit->text();
    num2 =n2.toInt();
    qDebug() << num1 << "*" << num2;

    result = num1 * num2;

    QString r = QString::number(result);
    ui->num3Edit->setText(r);
    // tila = 0;
    qDebug() << "Nykyinen tila: " << tila;
    }

}

void MainWindow::SetEditNum(int num)
{
    if (tila == 0){
        qDebug() << "Tila 0: kirjoitetaan num1";
        //ui->num1Edit->setText(QString::number(num));
        QString lukunyt = ui->num1Edit->text();
        lukunyt += QString::number(num);
        ui->num1Edit->setText(lukunyt);
    }
    else if (tila == 1){
        qDebug() << "Tila 1: kirjoitetaan num2";
        //ui->num2Edit->setText(QString::number(num));
        QString lukunyt = ui->num2Edit->text();
        lukunyt += QString::number(num);
        ui->num2Edit->setText(lukunyt);
    }else{
        qDebug() << "vaara tila: ei voi syottaa numeroa";
    }

}

void MainWindow::on_enterButton_clicked()
{
    qDebug() << "Nykyinen tila: " << tila;
    if (tila<2)tila++;
    else tila=0;
    qDebug() << "Uusi tila: " << tila;
}



void MainWindow::on_clearButton_clicked()
{
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->num3Edit->clear();
    tila = 0;
    qDebug() << "Puhdistettu, palataan tilaan: " << tila;
}


void MainWindow::on_pushButton1_clicked()
{
    SetEditNum(1);
}


void MainWindow::on_pushButton2_clicked()
{
    SetEditNum(2);
}


void MainWindow::on_pushButton3_clicked()
{
    SetEditNum(3);
}

void MainWindow::on_pushButton4_clicked()
{
    SetEditNum(4);
}


void MainWindow::on_pushButton5_clicked()
{
    SetEditNum(5);
}


void MainWindow::on_pushButton6_clicked()
{
    SetEditNum(6);
}


void MainWindow::on_pushButton7_clicked()
{
    SetEditNum(7);
}


void MainWindow::on_pushButton8_clicked()
{
    SetEditNum(8);
}

void MainWindow::on_pushButton9_clicked()
{
    SetEditNum(9);
}


void MainWindow::on_pushButton0_clicked()
{
    SetEditNum(0);
}
