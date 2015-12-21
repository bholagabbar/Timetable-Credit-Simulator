#include "student_tt.h"
#include "ui_student_tt.h"
#include "dialog.h"
#include "QListWidgetItem"
#include "QListWidget"
#include <QString>
#include <string>
#include <QMessageBox>
#include <QApplication>
#include <QDesktopServices>
#include <QDateTime>
#include <QFile>
#include <QDesktopServices>
#include <QUrl>
QString reguse;
void Student_TT::checkCredits()
{
    int cnt=0;
    if(!ui->m1->text().contains('-'))//Getting credits from predefined slots
    {
        cnt+=5;
    }
    if(!ui->m1_2->text().contains('-'))
    {
        cnt+=3;
    }
    if(!ui->m1_3->text().contains('-'))
    {
        cnt+=3;
    }
    if(!ui->m1_4->text().contains('-'))
    {
        cnt+=4;
    }
    if(!ui->m1_5->text().contains('-'))
    {
        cnt+=2;
    }
    QString x=QString::number(cnt);
    ui->ccount->setText(x);
    if(cnt>=11&&cnt<=15)
    {
        ui->tryx->setStyleSheet("QLabel {color : green}");
        ui->gbutton->setEnabled(1);
    }
    else
    {
        ui->tryx->setStyleSheet("QLabel { color : red}");
        ui->gbutton->setEnabled(0);
    }



    }

    Student_TT::Student_TT(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::Student_TT)
    {
        ui->setupUi(this);
    }

    Student_TT::~Student_TT()
    {
        delete ui;
    }

    void Student_TT::on_Student_TT_accepted(QString a,QString b,QString c)
    {
        reguse=b;
        ui->name->setText("NAME: "+a);
        ui->reg->setText("REG.NO: "+b);
        ui->stm->setText("SCHOOL: "+c);
    }

    void Student_TT::on_listWidget_itemClicked(QListWidgetItem *item)//List clicked
    {
        if(item->isSelected())
        {
            QString a=ui->m1->text();

            if(a!=item->text())
            {

                QString x1=item->text();
                ui->sub1->setStyleSheet("QLabel {color : green; }");
                ui->m1->setStyleSheet("QLabel {color : deepskyblue; }");
                ui->w1->setStyleSheet("QLabel {color : deepskyblue; }");
                ui->f1->setStyleSheet("QLabel {color : deepskyblue; }");//Setting colours to labels
                ui->lab1->setStyleSheet("QLabel {color : deepskyblue; }");
                ui->lab1_2->setStyleSheet("QLabel {color : deepskyblue; }");
                ui->m1->setText(x1);//Setting text
                ui->w1->setText(x1);
                ui->f1->setText(x1);
                ui->lab1->setText(x1+"L");
                ui->lab1_2->setText(x1+"L");

            }
            else
            {
                ui->sub1->setStyleSheet("QLabel {color : black; }");
                QString x1=ui->m1_8->text();//Unused
                ui->m1->setStyleSheet("QLabel {color : green; }");
                ui->w1->setStyleSheet("QLabel {color : green; }");
                ui->f1->setStyleSheet("QLabel {color : green; }");//Setting colours to labels
                ui->lab1->setStyleSheet("QLabel {color : green; }");
                ui->lab1_2->setStyleSheet("QLabel {color : green; }");
                ui->m1->setText(x1);//Setting text
                ui->w1->setText(x1);
                ui->f1->setText(x1);
                ui->lab1->setText(x1);
                ui->lab1_2->setText(x1);

            }
        }
        checkCredits();//updating credits
    }



    void Student_TT::on_listWidget_2_itemClicked(QListWidgetItem *item)
    {
        if(item->isSelected())
        {
            QString a=ui->m1_2->text();//Its Physics


            if(a!=item->text())
            {

                QString x1=item->text();
                ui->sub2->setStyleSheet("QLabel {color : green; }");
                ui->m1_2->setStyleSheet("QLabel {color : orange; }");
                ui->tu1_2->setStyleSheet("QLabel {color : orange; }");
                ui->th1_2->setStyleSheet("QLabel {color : orange; }");//Setting colours to labels
                ui->lab2->setStyleSheet("QLabel {color : orange; }");
                ui->lab21->setStyleSheet("QLabel {color : orange; }");
                ui->m1_2->setText(x1);//Setting text
                ui->tu1_2->setText(x1);
                ui->th1_2->setText(x1);
                ui->lab2->setText(x1+"L");
                ui->lab21->setText(x1+"L");
            }
            else
            {
                QString x1=ui->m1_8->text();//Unused
                ui->sub2->setStyleSheet("QLabel {color : black; }");
                ui->m1_2->setStyleSheet("QLabel {color : green; }");
                ui->tu1_2->setStyleSheet("QLabel {color : green; }");
                ui->th1_2->setStyleSheet("QLabel {color : green; }");//Setting colours to labels
                ui->lab2->setStyleSheet("QLabel {color : green; }");
                ui->lab21->setStyleSheet("QLabel {color : green; }");
                ui->m1_2->setText(x1);//Setting text
                ui->tu1_2->setText(x1);
                ui->th1_2->setText(x1);
                ui->lab2->setText(x1);
                ui->lab21->setText(x1);


            }
        }
    checkCredits();//updating credits
    }


    void Student_TT::on_listWidget_3_itemClicked(QListWidgetItem *item)
    {
        if(item->isSelected())
        {
            QString a=ui->m1_3->text();//Its Chemistry


            if(a!=item->text())
            {

                QString x1=item->text();
                ui->sub3->setStyleSheet("QLabel {color : green; }");
                ui->m1_3->setStyleSheet("QLabel {color : magenta; }");
                ui->w1_3->setStyleSheet("QLabel {color : magenta; }");
                ui->f1_3->setStyleSheet("QLabel {color : magenta; }");
                ui->lab32->setStyleSheet("QLabel {color : magenta; }");
                ui->lab33->setStyleSheet("QLabel {color : magenta; }");
                ui->m1_3->setText(x1);//Setting text
                ui->w1_3->setText(x1);
                ui->f1_3->setText(x1);
                ui->lab32->setText(x1+"L");
                ui->lab33->setText(x1+"L");
            }
            else
            {
                QString x1=ui->m1_8->text();//Unused
                ui->sub3->setStyleSheet("QLabel {color : black; }");
                ui->m1_3->setStyleSheet("QLabel {color : green; }");
                ui->w1_3->setStyleSheet("QLabel {color : green; }");
                ui->f1_3->setStyleSheet("QLabel {color : green; }");//Setting colours to labels
                ui->lab32->setStyleSheet("QLabel {color : green; }");
                ui->lab33->setStyleSheet("QLabel {color : green; }");
                ui->m1_3->setText(x1);//Setting text
                ui->w1_3->setText(x1);
                ui->f1_3->setText(x1);
                ui->lab32->setText(x1);
                ui->lab33->setText(x1);


            }
        }

        checkCredits();//updating credits
    }


    void Student_TT::on_listWidget_4_itemClicked(QListWidgetItem *item)
    {
        if(item->isSelected())
        {
            QString a=ui->m1_4->text();//Maths
            if(a!=item->text())
            {

                QString x1=item->text();
                ui->sub4->setStyleSheet("QLabel {color : green; }");
                ui->m1_4->setStyleSheet("QLabel {color : darkcyan; }");
                ui->tu1_4->setStyleSheet("QLabel {color : darkcyan; }");
                ui->th1_4->setStyleSheet("QLabel {color :  darkcyan; }");
                ui->lab43->setStyleSheet("QLabel {color :  darkcyan; }");
                ui->lab44->setStyleSheet("QLabel {color :  darkcyan; }");
                ui->m1_4->setText(x1);//Setting text
                ui->tu1_4->setText(x1);
                ui->th1_4->setText(x1);
                ui->lab43->setText(x1+"L");
                ui->lab44->setText(x1+"L");
            }
            else
            {
                QString x1=ui->m1_8->text();//Unused
                ui->sub4->setStyleSheet("QLabel {color : black; }");
                ui->m1_4->setStyleSheet("QLabel {color : green; }");
                ui->tu1_4->setStyleSheet("QLabel {color : green; }");
                ui->th1_4->setStyleSheet("QLabel {color : green; }");//Setting colours to labels
                ui->lab43->setStyleSheet("QLabel {color : green; }");
                ui->lab44->setStyleSheet("QLabel {color : green; }");
                ui->m1_4->setText(x1);//Setting text
                ui->tu1_4->setText(x1);
                ui->th1_4->setText(x1);
                ui->lab43->setText(x1);
                ui->lab44->setText(x1);


            }
        }
        checkCredits();//Updating Credits
    }

void Student_TT::on_pushButton_clicked()//Information
{
    QMessageBox::information(this,tr("Information"),tr("1. There will be credits for each course marked in '[*no. of credits*]'\n2. Credits may be thought of as 'weightage'. More the credits, more important the subject will be.\n3. You must select a minimum of 11 credits and a maximum of 15 credits\n4. To select or change your course, just CLICK on the COURSE CODE"));
}

void Student_TT::on_listWidget_5_itemClicked(QListWidgetItem *item)
{
    if(item->isSelected())
    {
        QString a=ui->m1_5->text();//Maths
        if(a!=item->text())
        {

            QString x1=item->text();
            ui->sub5->setStyleSheet("QLabel {color : green; }");
            ui->m1_5->setStyleSheet("QLabel {color : lime; }");
            ui->f1_5->setStyleSheet("QLabel {color : lime; }");
            ui->m1_5->setText(x1);//Setting text
            ui->f1_5->setText(x1);
        }
        else
        {
            QString x1=ui->m1_8->text();//Unused
            ui->sub5->setStyleSheet("QLabel {color : black;}");
            ui->m1_5->setStyleSheet("QLabel {color : green;}");
            ui->f1_5->setStyleSheet("QLabel {color : green;}");
            ui->m1_5->setText(x1);//Setting text
            ui->f1_5->setText(x1);
        }
    }
    checkCredits();//Updating Credits
}

void Student_TT::on_gbutton_clicked()
{
    if(ui->gbutton->isEnabled())
    {

        QMessageBox::StandardButton reply;//Following code to generate confirmation
        reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to generate your FINAL Timetable?",QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes)
        {
            QWidget * w = QApplication::activeWindow();
            if(w)
            {
              QPixmap pixmap = QPixmap::grabWidget( w );
              QString a="C:/Users/User/Documents";
              a+="/";
              a+=reguse;
              a+=".jpg";
              pixmap.save(a);
            }
            QMessageBox::information(this,tr("Thank you!"),tr("Closing Application and Opening Location of your Saved Timetable.\n\nYou will find the file named as your Registration Number\n\nHave a Great Semester Ahead!"));
            QString path ="C:/Users/User/Documents";
            QUrl pathUrl = QUrl::fromLocalFile(path);
            QDesktopServices::openUrl(pathUrl);
            QApplication::quit();//QUITTING
        }
        else
        {
            //
        }

    }
}
