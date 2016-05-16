#include "mainwindow.h"
#include <QApplication>
/*#include <QGraphicsScene>
#include <QGraphicsView>*/


/*
    QGraphicsScene 可丟一個圖案
    QGraphicsItem 如果創造一個圖形，利用item放進scene
    QGraphicsView 可控制哪個圖案要出現
*/

int main(int argc, char *argv[])
{



    QApplication a(argc, argv);
    Taiko w;
    w.show();

    return a.exec();
}
