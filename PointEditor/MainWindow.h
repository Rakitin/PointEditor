#pragma once

#include <QMainWindow>
#include "Points.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionPoints_triggered();

private:
    Ui::MainWindow *ui;
    Points m_points;
};
