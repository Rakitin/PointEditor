#include "PointsModel.h"

PointsModel::PointsModel(Points &points, QObject *parent) :
    QAbstractTableModel(parent),
    m_points(points)
{
}

int PointsModel::rowCount(const QModelIndex &parent) const
{
    if(parent.isValid())
        return 0;
    return m_points.count();
}

int PointsModel::columnCount(const QModelIndex &parent) const
{
    if(parent.isValid())
            return 0;
        return 2;
}

QVariant PointsModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid())
           return QVariant();
       if(index.row() < 0 && index.row() > m_points.count())
           return QVariant();
       if(role != Qt::DisplayRole && role != Qt::EditRole)
           return QVariant();

       switch (index.column()) {
         case(0):
             return QVariant(m_points.at(index.row()).x());
         case(1):
             return QVariant(m_points.at(index.row()).y());
         default:
             return QVariant();
         }
}
