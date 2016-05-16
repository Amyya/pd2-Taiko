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

    ui->finalscore->setVisible(false);
    ui->yourscore->setVisible(false);

}

Taiko::~Taiko()
{
    delete ui;
}

void Taiko::on_Start_clicked()   //當Start被點擊時遊戲開始
{
    play();
}

void Taiko::Count_Down(){   //倒數計時
    value = ui->Time_LCD->value();
    qDebug()<<"count value";
    qDebug()<<value;
    if(value>0){
        ui->Time_LCD->display(value-1);
    }
    else{
        //改為結束背景

        QPixmap background("image/hqdefault.jpg");
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
        ui->finalscore->setVisible(true);
        ui->yourscore->setVisible(true);

        QString final = QString::number(ini_score);
        QString labelText_Score = "<b><FONT COLOR='#ff0000' FONT SIZE = 24>";
        labelText_Score .append(final);
        labelText_Score .append("</i></b></P>");
        ui->finalscore->setText(labelText_Score);

        Timer->~QTimer();
    }
}

void Taiko::on_Exit_clicked(){
    qApp->quit();
}

void Taiko::on_GameOver_clicked()
{
    qApp->quit();
}

void Taiko::on_Restart_clicked()
{
    play();
    ini_score = 0;
    ui->Score_LCD->display(0);
    ui->Restart->setVisible(false);   //結束畫面按鈕不要出現
    ui->GameOver->setVisible(false);
    ui->Time->setVisible(true);
    ui->Score->setVisible(true);

}

void Taiko::appearTarget(){   //隨機出現鼓面
    //srand( time( 0 ) );
    qDebug()<<"appear value";
    qDebug()<<value;
    if(value > 0){   //若還有時間繼續產生
        randVolley = rand()%2;

        if(randVolley==0){   //決定是紅或藍排球
            blue = new BlueVolley(this);
            BlueLog.push_back(blue);
            qDebug()<<"BlueLog.size()";
            qDebug()<<BlueLog.size();
            qDebug()<<BlueCurrentNum;
        }
        else if(randVolley==1){
            red = new RedVolley(this);
            RedLog.push_back(red);
            qDebug()<<"RedLog.size()";
            qDebug()<<RedLog.size();
            qDebug()<<RedCurrentNum;
        }

        randTime = rand()%1000 + 500;
        //qDebug()<<"8";
        QTimer::singleShot(randTime, this, SLOT(appearTarget()));
       // qDebug()<<"9";
    }
}


/*void Taiko::appearTarget(){   //隨機出現鼓面
    srand( time( 0 ) );

    if(value > 0){   //若還有時間繼續產生
        randVolley = rand()%2;

        if(randVolley==0){   //決定是紅或藍排球
            qDebug()<<"Red out";
            target_Red = new QLabel(this);
            target_Red->setGeometry(730,190,71,61);
            target_Red->setPixmap(QPixmap ("image/QH6L2w0a_400x400.png"));
            target_Red->setVisible(true);
            red_timer = new QTimer(this);
            //connect(red_timer,  QTimer::timeout, this, [this]{ volleyMove(target_Red,red_timer); });
            QTimer::singleShot(10, this, [this]{ volleyMove(target_Red,red_timer); });
            red_timer->start(10);
        }
        else if(randVolley==3){
            qDebug()<<"Blue out";
            target_Blue = new QLabel(this);
            qDebug()<<"1";
            target_Blue->setGeometry(730,190,71,61);
            qDebug()<<"2";
            target_Blue->setPixmap(QPixmap ("image/volleyball.png"));
            qDebug()<<"3";
            target_Blue->setVisible(true);
            qDebug()<<"4";
            blue_timer = new QTimer(this);
            qDebug()<<"5";
            connect(blue_timer,  QTimer::timeout, this, [this]{ volleyMove(target_Blue,blue_timer); });
            qDebug()<<"6";
            blue_timer->start(10);
            qDebug()<<"7";
        }

        randTime = rand()%300 + 500;
        qDebug()<<"8";
        QTimer::singleShot(randTime, this, SLOT(appearTarget()));
        qDebug()<<"9";
    }
}

void Taiko::volleyMove(QLabel* target_Volley, QTimer* target_timer)
{
    get_target_Volley = target_Volley;
    get_target_timer = target_timer;
    target_Volley->setGeometry(target_Volley->x()-5,target_Volley->y(),101,101);

    if(target_Volley->x() <= -220)   //220?????
    {
        //target_Volley->~QLabel();
    }
    QTimer::singleShot(10, this, [this]{ volleyMove(get_target_Volley,get_target_timer); });
}*/

void Taiko::keyPressEvent(QKeyEvent *event){

    if(event->key()==Qt::Key_X){

        if(BlueLog.size() != BlueCurrentNum){
        if(BlueLog.at(BlueCurrentNum)->x()>=0 && BlueLog.at(BlueCurrentNum)->x()<=100)
        {
                addScore();
                delete BlueLog.at(BlueCurrentNum);
                qDebug()<<"Blue add success";
                BlueCurrentNum++;
            }
        }


    }
    if(event->key()==Qt::Key_Z){
        if(RedLog.size() != RedCurrentNum){
        if(RedLog.at(RedCurrentNum)->x()>=0 && RedLog.at(RedCurrentNum)->x()<=100)
        {
            addScore();
            delete RedLog.at(RedCurrentNum);
            qDebug()<<"Red add success";
            RedCurrentNum++;
            }
        }
    }


}



void Taiko::addScore()
{
    if(value>0){
        ini_score+=10;
        ui->Score_LCD->display(ini_score);
    }
}

void Taiko::addBlueCurrentNum()
{
    BlueCurrentNum++;
    qDebug()<<"Blue Cur";
    qDebug()<<BlueCurrentNum;

}

void Taiko::addRedCurrentNum()
{
    RedCurrentNum++;
    qDebug()<<"Red Cur";
    qDebug()<<RedCurrentNum;

}

void Taiko::play(){
    QPixmap play_background("image/background.png");   //改為遊戲背景
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

    ui->Time_LCD->display(30);   //30秒倒數計時!!!!!
    value= 30;

    Timer = new QTimer(this);   //QTimer為內建計時器，要使用一定要設定為pointer的型態
    connect(Timer, SIGNAL(timeout()), this, SLOT(Count_Down()));   //connect把一個發送訊號和接收訊號的東西連在一起
                                                                //(Timer:發出訊號/在SIGNAL內放要發出的訊號，也就是計時器計時到底會發出的訊號/把訊號傳到this也就是這個程式/SLOT為接收訊號的東西)
    Timer->start(1000);   //開始計時單位為毫秒
    qDebug()<<"play value";
    qDebug()<<value;
    appearTarget();
}
