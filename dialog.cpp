#include "dialog.h"
#include "ui_dialog.h"
#include "QMessageBox"
#include <string>
#include"student_tt.h"
#include <QWidget>
#include <QDesktopServices>
#include <QUrl>
#include <mainwindow.h>
#include <QLayout>
#include <Qt>
#include <QFileInfo>
using namespace std;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

bool fileExists(QString path)
{

    QFileInfo checkFile(path);
    // check if file exists and if yes: Is it really a file and no directory?
    if (checkFile.exists() && checkFile.isFile()) {
        return true;
    } else {
        return false;
    }
}

void Dialog::on_pushButton_clicked()
{

QString name=ui->lineEdit->text().toUpper();
QString reg=ui->lineEdit_2->text().toUpper();//got Reg no
QString stream;//getting stream
if(!reg.contains("BCE")&&!reg.contains("BME")&&!reg.contains("BEE")&&!reg.contains("BEC")&&!reg.contains("BCL"))
{
    //QMessageBox::information(this,tr("Error!"),tr("Please Enter Correct Registration Number!"));
    QMessageBox x;
    x.setText("<font color='black'>\tPlease Enter Correct Registration Number! </font>");
    x.setWindowTitle("Error");
    x.exec();
}
else if(reg.size()!=9||!reg.startsWith("15"))
{
    QMessageBox x;
    x.setText("<font color='black'>\tYou MUST be a FIRST YEAR Student with a Registration Number like 15XXXNNNN!</font>");
    x.setWindowTitle("Error");
    x.exec();
}
else//Automatically Extracting School
{
    if(!fileExists(reg))//checking if file exists
    {
        if(reg.contains("BCE"))
        {
            stream="SCSE";
        }
        else if(reg.contains("BME"))
        {
            stream="SMBS";
        }
        else if(reg.contains("BEC"))
        {
            stream="SENSE";
        }
        else if(reg.contains("BEE"))
        {
            stream="SELECT";
        }
        else if(reg.contains("BCL"))
        {
            stream="SMBS";
        }
        Student_TT win;
        win.on_Student_TT_accepted(name,reg,stream);//Sending details
        win.exec();
    }
}

}

void Dialog::on_pushButton_2_clicked()//for opening vit website
{

    QUrl x(QUrl::fromEncoded("http://chennai.vit.ac.in/"));
    QDesktopServices::openUrl(x);
}


