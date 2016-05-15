#ifndef TAIKO_H
#define TAIKO_H

#include <QMainWindow>
#include <QLabel>
#include <bluevolley.h>
#include <redvolley.h>

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

    int value = 3, randVolley, randTime, ini_score=0;

    void keyPressEvent(QKeyEvent *event);

    bool redv = false;
    bool bluev = false;
    void StartGame();

public slots:
    void red_point();
    void blue_point();
    void red_false();
    void blue_false();
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
    QLabel*Label[10];
    QTimer*time[10];
    bool out[10];

};

#endif // TAIKO_H

