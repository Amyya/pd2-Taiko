#include "bluevolley.h"
#include <QTimer>
#include <QGraphicsScene>
#include "mainwindow.h"
#include <QDebug>
#include <QKeyEvent>
#include "ui_mainwindow.h"

BlueVolley::BlueVolley(QWidget *parent): QLabel(parent){

            setPixmap(QPixmap("image/volleyball.png"));
            setGeometry(800,200,70,70);
            show();
            lower();
            setScaledContents(true);

            QTimer * timer = new QTimer;
            connect(timer, SIGNAL(timeout()), this, SLOT(move()));

            timer->start(10);

}

void BlueVolley::move(){

    setGeometry(x()-2,y(),70,70);

    if(x() < -40){  //沒打到但超出螢幕

        QTimer::singleShot(0, parentWidget(), SLOT(addBlueCurrentNum()));
        delete this;
        qDebug() <<"Deleted";
        qDebug() <<"called addBlue";
    }
}

