#include "Points.h"

Points::Points(QObject *parent) :
    QObject(parent)
{
}

void Points::pushBack(const QPoint &point)
{
    m_points.push_back(point);
    emit pushed();
}

int Points::count() const
{
    return m_points.count();
}

const QPoint &Points::at(int i) const
{
    return m_points.at(i);
}
