#include "bluevolley.h"
#include <QTimer>
#include <QGraphicsScene>
#include "mainwindow.h"
#include <QDebug>
#include <QKeyEvent>
#include "ui_mainwindow.h"

BlueVolley::BlueVolley(QWidget *parent): QLabel(parent){

    //setFocusPolicy(Qt::StrongFocus);

    setPixmap(QPixmap("image/volleyball.png"));   //傳入圖
    setGeometry(800,200,70,70);   //設定Pixmap大小
    show();   //顯示
    setScaledContents(true);   //讓圖案能完整出現在範圍內

    QTimer * timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));   //移動藍排球

    timer->start(10);   //每10毫秒發送一次訊號

}

void BlueVolley::move(QLabel *rvolley, QTimer *T,bool &Out){

    setGeometry(x()-2,y(),70,70);   //藍排球向左移2

    if(x() < -40){   //超出螢幕則delete

        delete this;
        QTimer::singleShot(0, parentWidget(), SLOT(blue_false()));
        qDebug() <<"Deleted";
    }
}

void BlueVolley::blue_check(){   //在範圍內按到則加分
    if(x() >= 50-50 && x() <= 50+50){
        delete this;   //按到就消掉
        QTimer::singleShot(0, parentWidget(), SLOT(blue_false()));
        QTimer::singleShot(0, parentWidget(), SLOT(blue_point()));
    }
}
