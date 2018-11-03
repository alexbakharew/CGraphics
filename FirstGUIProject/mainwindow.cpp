#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QPainter>
#include <QLabel>
#include <QDoubleSpinBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QLabel lblRadius(new QLabel("Radius", this));
    lblRadius.move(10,10);
    auto radius = new QDoubleSpinBox(this);
    radius->setRange(1, 300);
    radius->setSingleStep(0.1);
    radius->setValue(150);
    radius->move(10, 30);

    QLabel lblStep(new QLabel("Step", this));
    lblStep.move(10,50);
    auto step = new QDoubleSpinBox(this);
    radius->setRange(0.01, 1);
    radius->setSingleStep(0.01);
    radius->setValue(0.1);
    radius->move(10, 70);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *event)
{
    const double radius = 150;
    const double step = 0.1;

    const double pi = 4 * atan(1);
    const double end = 2 * pi + step;


    QPointF p1(radius, 0);

    QPainter ptr(this);
    ptr.setPen(Qt::blue);
    const QPointF center(width() / 2, height() / 2);
    for(double t = step; t < end; t += step)
    {
        QPointF p2(cos(t), sin(t));
        p2 *= radius;
        ptr.drawLine(p1 + center, p2 + center);
        p1 = p2;
    }
}
