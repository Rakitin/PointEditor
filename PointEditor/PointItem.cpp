#include <QPainter>
#include "PointItem.h"

PointItem::PointItem(QObject *parent) :
    QObject(parent),
    QGraphicsItem()
{

}

QRectF PointItem::boundingRect() const
{
    return QRectF(0,0,10,10);
}

void PointItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
    painter->setBrush(Qt::black);
    painter->drawEllipse(QRect(0, 0, 10, 10));
}
