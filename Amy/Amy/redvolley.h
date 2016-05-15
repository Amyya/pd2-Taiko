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

public slots:
    void red_check();
public slots:
    void move();
};

#endif // REDVOLLEY_H
