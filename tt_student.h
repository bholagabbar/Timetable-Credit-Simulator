#ifndef TT_STUDENT_H
#define TT_STUDENT_H

#include <QDialog>

namespace Ui {
class TT_Student;
}

class TT_Student : public QDialog
{
    Q_OBJECT

public:
    explicit TT_Student(QWidget *parent = 0);
    ~TT_Student();

private:
    Ui::TT_Student *ui;
};

#endif // TT_STUDENT_H
