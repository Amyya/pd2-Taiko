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
    void blue_check();
public slots:
    void move(QLabel *rvolley, QTimer *T, bool &Out);
};

#endif // BLUEVOLLEY_H

