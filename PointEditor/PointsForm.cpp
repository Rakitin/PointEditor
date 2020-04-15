#include "PointsForm.h"
#include "ui_PointsForm.h"
#include "PointsModel.h"

PointsForm::PointsForm(Points &points, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PointsForm)
//  ,
//    m_points(points)
{
    ui->setupUi(this);

    PointsModel *model = new PointsModel(points, ui->tableView);
    ui->tableView->setModel(model);

}

PointsForm::~PointsForm()
{
    delete ui;
}
