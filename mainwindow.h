#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
   void TimerEvent();

private slots:

    void on_progressBar_valueChanged(int value);

private:
    Ui::MainWindow *ui;

    //friend class Dialog;
};

#endif // MAINWINDOW_H
