#ifndef TAIKO_H
#define TAIKO_H

#include <QMainWindow>
#include <QLabel>
#include <bluevolley.h>
#include <redvolley.h>
#include <vector>

namespace Ui {
class Taiko;
}

class Taiko : public QMainWindow
{
    Q_OBJECT

public:
    explicit Taiko(QWidget *parent = 0);
    ~Taiko();
    QTimer *Timer;

    Ui::Taiko *ui;

    int value=30, randVolley=0, randTime=0, ini_score=0;

    void keyPressEvent(QKeyEvent *event);
    //void keyPressEvent(QKeyEvent *event);
    //QLabel* get_target_Volley;
    //QTimer* get_target_timer;

    void addScore();
    void play();

public slots:


    void addBlueCurrentNum();
    void addRedCurrentNum();


private slots:

    void on_Start_clicked();

    void Count_Down();

    void on_Exit_clicked();

    void on_GameOver_clicked();

    void on_Restart_clicked();

    void appearTarget();

private:
    QLabel* target_Red;
    QTimer* red_timer;
    QLabel* target_Blue;
    QTimer* blue_timer;
    BlueVolley *blue;
    RedVolley *red;
    std::vector<BlueVolley*> BlueLog;
    std::vector<RedVolley*> RedLog;
    int BlueCurrentNum=0;
    int RedCurrentNum=0;
};

#endif // TAIKO_H

