#include "wheel.h"
#include <QtMath>

Wheel::Wheel(QWidget *parent) : QGraphicsView(parent)
{

}

void Wheel::wheelEvent(QWheelEvent* pWheelEvent)
{
    // Do a wheel-based zoom about the cursor position
    double angle = pWheelEvent->angleDelta().y();
    double factor = qPow(1.0015, angle);

    auto targetViewportPos = pWheelEvent->pos();
    auto targetScenePos = mapToScene(pWheelEvent->pos());

    scale(factor, factor);
    centerOn(targetScenePos);
    QPointF deltaViewportPos = targetViewportPos - QPointF(viewport()->width() / 2.0, viewport()->height() / 2.0);
    QPointF viewportCenter = mapFromScene(targetScenePos) - deltaViewportPos;
    centerOn(mapToScene(viewportCenter.toPoint()));

    return;
}
