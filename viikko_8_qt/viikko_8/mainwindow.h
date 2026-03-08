#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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
    void timeOut();

public slots:
    void updateProgressBar();
    void setGameInfoText(QString,int);


private slots:
    void on_playerBt1_clicked();
    void on_playerBt2_clicked();
    void on_timerBt1_clicked();
    void on_timerBt2_clicked();
    void on_startBt_clicked();
    void on_stopBt_clicked();

private:
    Ui::MainWindow *ui;
    int p1time,p2time,currentPlayer,gameTime;
    QTimer *pQTimer;
};
#endif // MAINWINDOW_H
