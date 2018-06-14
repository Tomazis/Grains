#ifndef WHEEL_H
#define WHEEL_H

#include <QGraphicsView>
#include <QWheelEvent>
#include <QWidget>

class Wheel : public QGraphicsView
{
public:
    Wheel(QWidget* parent = 0);
protected:
    virtual void wheelEvent(QWheelEvent *event);
};
#endif // WHEEL_H
