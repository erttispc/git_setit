#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer(this);
    pQTimer->setInterval(1000);
    ui->progressBar->setValue(0);
    ui->progressBar2->setValue(0);
    connect(pQTimer, &QTimer::timeout,this, &MainWindow::updateProgressBar);
    setGameInfoText("Select playtime and press start", 0);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (pQTimer)delete pQTimer;
}

void MainWindow::on_playerBt1_clicked()
{
  currentPlayer=2;
}


void MainWindow::on_playerBt2_clicked()
{
  currentPlayer=1;
}


void MainWindow::on_timerBt1_clicked()
{
  gameTime=120;
  ui->progressBar->setRange(0,gameTime);
  ui->progressBar2->setRange(0,gameTime);
  ui->progressBar->setValue(gameTime);
  ui->progressBar2->setValue(gameTime);
  p1time=gameTime,p2time=gameTime;
  setGameInfoText("ready to play", 0);
}


void MainWindow::on_timerBt2_clicked()
{
  gameTime=600;
  ui->progressBar2->setRange(0,gameTime);
  ui->progressBar->setRange(0,gameTime);
  ui->progressBar->setValue(gameTime);
  ui->progressBar2->setValue(gameTime);
  p1time=gameTime,p2time=gameTime;
  setGameInfoText("ready to play", 0);
}


void MainWindow::on_startBt_clicked()
{
  currentPlayer=1;
  pQTimer->start();
  setGameInfoText("Game ongoing", 0);
}


void MainWindow::on_stopBt_clicked()
{
  pQTimer->stop();
  setGameInfoText("New game via start button", 0);
  ui->progressBar->setValue(0);
  ui->progressBar2->setValue(0);
}

void MainWindow::updateProgressBar(){
  switch(currentPlayer){
    case 1:
      p1time--;
      if (p1time==0)timeOut();
      ui->progressBar->setValue(p1time);
      break;
    case 2:
      p2time--;
      if (p2time==0)timeOut();
      ui->progressBar2->setValue(p2time);
      break;
    default:
      break;
  }
}

void MainWindow::setGameInfoText(QString x,int y){
  ui->label->setText(x);
}

void MainWindow::timeOut(){
  pQTimer->stop();
  if (p1time==0) {
    ui->label->setText("Player 2 won!");
  }
  else ui->label->setText("Player 1 won!");
}
