#ifndef STUDENT_TT_H
#define STUDENT_TT_H

#include <QDialog>
#include <QListWidget>
#include <QListWidgetItem>

namespace Ui {
class Student_TT;
}

class Student_TT : public QDialog
{
    Q_OBJECT

public:
    explicit Student_TT(QWidget *parent = 0);
    //static int counter;
    ~Student_TT();
public slots:
    void on_Student_TT_accepted(QString a, QString b, QString c);
    void checkCredits();
private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_listWidget_itemSelectionChanged();

    void on_listWidget_2_itemClicked(QListWidgetItem *item);

    void on_listWidget_2_clicked(const QModelIndex &index);

    void on_listWidget_3_clicked(const QModelIndex &index);

    void on_listWidget_3_itemClicked(QListWidgetItem *item);

    void on_listWidget_4_itemSelectionChanged();

    void on_listWidget_4_itemClicked(QListWidgetItem *item);

    void on_pushButton_clicked();

    void on_listWidget_5_itemClicked(QListWidgetItem *item);

    void on_gbutton_clicked();

    void on_Student_TT_accepted();

private:
    Ui::Student_TT *ui;
};
//int counter=0;


#endif // STUDENT_TT_H
