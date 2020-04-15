#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <PointsForm.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_points.pushBack(QPoint(10, 20));

    QWidget *pointsForm = new PointsForm(m_points, this);
    ui->dockWidgetPoints->setWidget(pointsForm);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionPoints_triggered()
{
    ui->dockWidgetPoints->show();
}
