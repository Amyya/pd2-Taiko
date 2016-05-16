#ifndef REDVOLLEY_H
#define REDVOLLEY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QLabel>


class RedVolley: public QLabel{
    Q_OBJECT
public:
    RedVolley(QWidget *parent=0);
   //void keyPressEvent(QKeyEvent *event);
public slots:
    void move();
private:
    bool canBePush=false;
};

#endif // REDVOLLEY_H
