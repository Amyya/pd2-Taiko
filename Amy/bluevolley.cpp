#include "bluevolley.h"
#include <QTimer>
#include <QGraphicsScene>
#include "mainwindow.h"
#include <QDebug>
#include <QKeyEvent>
#include "ui_mainwindow.h"

//extern Ui::Taiko *game; //an external global object game

BlueVolley::BlueVolley(QWidget *parent): QLabel(parent){

            //draw graphics
            setPixmap(QPixmap("image/volleyball.png"));
            setGeometry(800,200,70,70);
            show();
            setScaledContents(true);


        //make the face move
            QTimer * timer = new QTimer;
            connect(timer, SIGNAL(timeout()), this, SLOT(move()));

        //start the timer
            timer->start(10);

}

void BlueVolley::move(){
    //increase score
     //game->score->increase();

    //move face
    setGeometry(x()-2,y(),70,70);
    //out of screen
    if(x() < -40){

        QTimer::singleShot(0, parentWidget(), SLOT(addBlueCurrentNum()));
        delete this;
        qDebug() <<"Deleted";
        qDebug() <<"called addBlue";
    }
}

