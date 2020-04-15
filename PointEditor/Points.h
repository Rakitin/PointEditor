#pragma once

#include <QObject>
#include <QList>
#include <QPoint>

class Points : public QObject
{
    Q_OBJECT

public:
    explicit Points(QObject *parent = 0);

    void pushBack(const QPoint &point);

    int count() const;

    const QPoint& at(int i) const;

signals:
    void pushed();

private:
    QList<QPoint> m_points;

};
