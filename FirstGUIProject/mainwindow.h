#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QDoubleSpinBox>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *event);
private:
    QDoubleSpinBox* radius;
    QDoubleSpinBox* step;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
