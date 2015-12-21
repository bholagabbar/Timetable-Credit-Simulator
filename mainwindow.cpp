#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QBitmap>
#include <QPixmap>
#include <QLabel>
#include <QtGui>
#include <QTimer>
#include <iostream>
using namespace std;
static int cnt1;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);//Setting up ui
    QPixmap a("C:/Users/User/Documents/Project1/ttpic.jpg");
    ui->pic2->setPixmap(a);
    ui->pic2->setMask(a.mask());
    ui->pic2->show();//Setting picture
    ui->load->setText("<font color=#d14b1e>Loading <b>UI</b></font>");
    this->ui->progressBar->setValue(8);//Timer with progress bar
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerEvent()));
    timer->start(40);
}

void MainWindow::TimerEvent()
{
  int value = this->ui->progressBar->value();
  this->ui->progressBar->setValue(value+1);
  cnt1++;
  if(cnt1==10)
  {
      ui->load->setText("<font color=#d14b1e>Loading <b>UI</b>.</font>");
  }
  else if(cnt1==20)
  {
      ui->load->setText("<font color=#d14b1e>Loading <b>UI</b>..</font>");
  }
  else if(cnt1==30)
  {
      ui->load->setText("<font color=#d14b1e>Loading <b>UI</b>...</font>");
  }
  else if(cnt1==40)
  {
      ui->load->setText("<font color=#d14b1e>Loading <b>UI</b>.</font>");
  }
  else if(cnt1==50)
  {
      ui->load->setText("<font color=#d14b1e>Loading UI..</font>");
  }
  else if(cnt1==60)
  {
      ui->load->setText("<font color=#d14b1e>Loading UI...</font>");
  }
  else if(cnt1==70)
  {
      ui->load->setText("<font color=#d14b1e>Loading UI.</font>");
  }
  else if(cnt1==80)
  {
      ui->load->setText("<font color=#d14b1e>Loading UI..</font>");
  }
  else if(cnt1==90)
  {
      ui->load->setText("<font color=#d14b1e>Loading UI...</font>");
  }
  if(value==100)
  {
       ui->load->setText("<font color=#d14b1e>DONE!</font>");
  }
  if(cnt1==108)\
  {
      this->hide();
      Dialog x;
      x.setModal(1);
      x.exec();
  }
}


MainWindow::~MainWindow()
{
    delete ui;
}

