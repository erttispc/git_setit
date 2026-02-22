#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

void SetEditNum(int num);

private slots:
    void on_plusButton_clicked();

    void on_minusButton_clicked();

    void on_pushButton1_clicked();

    void on_pushButton2_clicked();

    void on_pushButton3_clicked();

    void on_enterButton_clicked();

    void on_clearButton_clicked();

    void on_pushButton4_clicked();

    void on_pushButton5_clicked();

    void on_pushButton6_clicked();

    void on_pushButton7_clicked();

    void on_pushButton8_clicked();

    void on_pushButton9_clicked();

    void on_pushButton0_clicked();

    void on_divButton_clicked();

    void on_multButton_clicked();

private:
    Ui::MainWindow *ui;
    int num1;
    int num2;
    float result;
    int tila = 0;
};
#endif // MAINWINDOW_H
