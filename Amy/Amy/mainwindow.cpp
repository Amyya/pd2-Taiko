#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QTimer>
#include <stdlib.h>
#include <ctime>
#include <QDebug>
#include <bluevolley.h>
#include <redvolley.h>

Taiko::Taiko(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Taiko)
{
    ui->setupUi(this);


    QPixmap background("image/73690cacb7031cfba94a0febf11b7a63d4d30832dcfe0bd91e38b739f6fb9517.jpg");   //放入開始畫面背景
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this->setPalette(palette);

    this->setFixedSize(800,550);   //固定視窗大小不要被任意拉動

    ui->Pika->setPixmap(QPixmap ("image/025Pikachu_XY_anime_3.png"));
    ui->Pika->setVisible(true);   //setVisible是內建的
    ui->Volley->setPixmap(QPixmap ("image/volleyball-ball-4235.png"));
    ui->Volley->setVisible(true);

    ui->RedVolley->setVisible(false);   //遊戲畫面的按鍵提示先不要出現
    ui->BlueVolley->setVisible(false);
    ui->Z_text->setVisible(false);
    ui->X_text->setVisible(false);

    ui->Time_LCD->setVisible(false);  //計時計分在開始畫面先不要出現
    ui->Score_LCD->setVisible(false);

    ui->Restart->setVisible(false);   //結束畫面先不要出現
    ui->GameOver->setVisible(false);
    ui->label_2->setVisible(false);

}

Taiko::~Taiko()
{
    delete ui;
}

void Taiko::on_Start_clicked()   //當Start被點擊時遊戲開始
{
   StartGame();
}

void Taiko::StartGame()
{

    QPixmap play_background("image/圖片2.png");   //改為遊戲背景
    play_background = play_background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, play_background);
    this->setPalette(palette);

    //開始畫面的東西消掉
    ui->Pika->setVisible(false);   //讓label消失(setVisible是內建的)
    ui->Volley->setVisible(false);
    ui->Start->setVisible(false);
    ui->Exit->setVisible(false);

    ui->RedVolley->setPixmap(QPixmap ("image/QH6L2w0a_400x400.png"));
    ui->RedVolley->setVisible(true);
    ui->BlueVolley->setPixmap(QPixmap ("image/volleyball.png"));
    ui->BlueVolley->setVisible(true);

    QString Z_text = "<b><FONT COLOR='#ffffff' FONT SIZE = 40>";
    Z_text .append("Z");
    Z_text .append("</i></b></P></br>");
    ui->Z_text->setText(Z_text);

    QString X_text = "<b><FONT COLOR='#ffffff' FONT SIZE = 40>";
    X_text .append("X");
    X_text .append("</i></b></P></br>");
    ui->X_text->setText(X_text);

    ui->Z_text->setVisible(true);
    ui->X_text->setVisible(true);


    //計時計分顯示
    QString labelText_Time = "<b><FONT COLOR='#aa00ff' FONT SIZE = 14>";   //<b>粗體(<P>換行<i>斜體)
    labelText_Time .append("Time:   ");   //括號內可放參數也可直接放字串
    labelText_Time .append("</i></b></P></br>");
    ui->Time->setText(labelText_Time);

    QString labelText_Score = "<b><FONT COLOR='#aa00ff' FONT SIZE = 14>";
    labelText_Score .append("Score:   ");
    labelText_Score .append("</i></b></P></br>");
    ui->Score->setText(labelText_Score);

    ui->Time_LCD->setVisible(true);
    ui->Score_LCD->setVisible(true);

    ui->Time_LCD->display(3);   //30秒倒數計時

    Timer = new QTimer(this);   //QTimer為內建計時器，要使用一定要設定為pointer的型態
    connect(Timer, SIGNAL(timeout()), this, SLOT(Count_Down()));   //connect把一個發送訊號和接收訊號的東西連在一起
                                                                //(Timer:發出訊號/在SIGNAL內放要發出的訊號，也就是計時器計時到底會發出的訊號/把訊號傳到this也就是這個程式/SLOT為接收訊號的東西)
    Timer->start(1000);   //開始計時單位為毫秒
    appearTarget();
    qDebug()<<"appear";

}


void Taiko::Count_Down(){   //倒數計時
   value = ui->Time_LCD->value();
   qDebug()<<"Count down";
   qDebug()<<value;

    if(value>0){
        ui->Time_LCD->display(value-1);
    }
    else{
        QPixmap background("image/hqdefault.jpg");   //放入開始畫面背景
        background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, background);
        this->setPalette(palette);

        ui->Restart->setVisible(true);
        ui->GameOver->setVisible(true);

        ui->Time_LCD->setVisible(false);
        ui->Score_LCD->setVisible(false);
        ui->RedVolley->setVisible(false);
        ui->BlueVolley->setVisible(false);
        ui->Z_text->setVisible(false);
        ui->X_text->setVisible(false);
        ui->Time->setVisible(false);
        ui->Score->setVisible(false);
        ui->label_2->setVisible(true);

        QString final = QString::number(ini_score);
        QString labelText_Score = "<b><FONT COLOR='#ff0000' FONT SIZE = 24>";
        labelText_Score .append(final);
        labelText_Score .append("</i></b></P>");
        ui->finalscore->setText(labelText_Score);

        Timer->~QTimer();
    }
}

void Taiko::on_Exit_clicked(){
    qApp->quit();   //關掉程式
}

void Taiko::on_GameOver_clicked()
{
    qApp->quit();
}

void Taiko::on_Restart_clicked()
{

    StartGame();
    ui->Restart->setVisible(false);   //結束畫面按鈕不要出現
    ui->GameOver->setVisible(false);
    ui->finalscore->setVisible(false);
    ui->Time_LCD->display(3);

}

void Taiko::appearTarget(){   //隨機出現鼓面
    randVolley = rand()%10;
    if(out[randVolley] == false){
       Label[randVolley] = new QLabel(this);
       Label[randVolley]->setGeometry(800,200,70,70);
       Label[randVolley]->setPixmap(QPixmap("image/volleyball.png"));
       Label[randVolley]->setVisible(true);
       time[randVolley] = new QTimer(this);
       out[randVolley] = true;
       connect(time[randVolley], &QTimer::timeout(), this, [this]{move()});

    }


   /* qDebug()<<"In appear";
    qDebug()<<value;
    if(value > 0){   //若還有時間繼續產生
        randVolley = rand()%2;

        if(randVolley==0){   //決定是紅或藍排球
            bluev = true;
            blue = new BlueVolley(this);

            qDebug()<<"6";
        }
        else if(randVolley==1){
            redv = true;
            red = new RedVolley(this);

            qDebug()<<"7";
        }

        randTime = rand()%1000 + 500;
        qDebug()<<"8";
        QTimer::singleShot(randTime, this, SLOT(appearTarget()));
        qDebug()<<"9";
    }*/
}

void Taiko::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_Z && redv == true){
        QTimer::singleShot(0, red, SLOT(red_check()));
    }
    if(event->key()==Qt::Key_X && bluev == true){
        QTimer::singleShot(0, blue, SLOT(blue_check()));
    }
}


void Taiko::red_point(){
    ini_score = ui->Score_LCD->value();
    ui->Score_LCD->display(ini_score+10);

}

void Taiko::blue_point(){
    ini_score = ui->Score_LCD->value();
    ui->Score_LCD->display(ini_score+10);

}

void Taiko::red_false(){
    redv = false;
}

void Taiko::blue_false(){
    bluev = false;
}

