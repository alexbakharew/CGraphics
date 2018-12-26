#include <QApplication>
#include <QMainWindow>
#include "MyWidget.hpp"
#include <QSurfaceFormat>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QtWidgets>
#include <QGLWidget>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QSurfaceFormat format;
    format.setDepthBufferSize(24);
    QSurfaceFormat::setDefaultFormat(format);

    app.setApplicationName("");
    app.setApplicationVersion("");


    MyWidget widget{};

    auto qvbox = new QVBoxLayout{};
    qvbox->addWidget(&widget);

    auto groupbox = new QGroupBox{QObject::tr("")};

    groupbox->setLayout(qvbox);

    QMainWindow window{};
    window.setCentralWidget(groupbox);
    window.resize(QSize(800, 600));
    window.show();

    return app.exec();
}
