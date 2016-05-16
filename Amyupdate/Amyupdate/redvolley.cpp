#include "redvolley.h"
#include "bluevolley.h"
#include "mainwindow.h"
#include <QTimer>
#include <QGraphicsScene>
#include "ui_mainwindow.h"
#include <QDebug>
#include <QKeyEvent>


RedVolley::RedVolley(QWidget *parent): QLabel(parent){

    setPixmap(QPixmap("image/QH6L2w0a_400x400.png"));
    setGeometry(800,200,70,70);
    setScaledContents(true);   //設定圖的大小
    show();
    lower();
    QTimer * timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(10);

}

void RedVolley::move(){

    setGeometry(x()-2,y(),70,70);

    if(x() < -40){
        QTimer::singleShot(0, parentWidget(), SLOT(addRedCurrentNum()));
        delete this;
        qDebug() <<"Deleted";
    }

}

