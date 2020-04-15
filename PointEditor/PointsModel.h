#pragma once

#include <QAbstractTableModel>
#include <Points.h>

class PointsModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit PointsModel(Points &points, QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;

    QVariant data(const QModelIndex &index, int role) const;

private:
    Points &m_points;

};

