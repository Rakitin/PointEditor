#pragma once

#include <QGraphicsItem>

class PointItem : public QObject, QGraphicsItem
{
public:
    PointItem(QObject *parent = nullptr);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};
