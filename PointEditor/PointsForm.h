#pragma once

#include <QWidget>
#include <Points.h>
#include "PointsModel.h"

namespace Ui {
class PointsForm;
}

class PointsForm : public QWidget
{
    Q_OBJECT

public:
    explicit PointsForm(Points &points, QWidget *parent = nullptr);
    ~PointsForm();

private:
    Ui::PointsForm *ui;
//    Points &m_points;
};
