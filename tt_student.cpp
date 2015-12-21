#include "tt_student.h"
#include "ui_tt_student.h"
#include"dialog.h"
#include"mainwindow.h"

TT_Student::TT_Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TT_Student)
{
    ui->setupUi(this);
}

TT_Student::~TT_Student()
{
    delete ui;
}
