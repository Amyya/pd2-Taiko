#ifndef BLUEVOLLEY_H
#define BLUEVOLLEY_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QLabel>


class BlueVolley: public QLabel{
    Q_OBJECT
public:
    BlueVolley(QWidget *parent=0);

public slots:
    void move();

private:

};

#endif // BLUEVOLLEY_H
