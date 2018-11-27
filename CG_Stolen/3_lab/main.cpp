#include <QApplication>
#include <QMainWindow>
#include <MyWidget.hpp>
#include <QSurfaceFormat>
#include <QSlider>
#include <QVBoxLayout>
#include <QGroupBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QSurfaceFormat format;
    format.setDepthBufferSize(24);
    QSurfaceFormat::setDefaultFormat(format);

    app.setApplicationName("");
    app.setApplicationVersion("");

    // slider for setting aprroximation
    auto approxSlider = new QSlider{Qt::Horizontal};
    approxSlider->setTickPosition(QSlider::NoTicks);
    approxSlider->setValue(4);
    approxSlider->setMinimum(4);
    approxSlider->setMaximum(64);
    approxSlider->setSingleStep(1);

    // slider for setting "brightness" of diffuse light
    auto brightSlider = new QSlider{Qt::Horizontal};
    brightSlider->setTickPosition(QSlider::NoTicks);
    brightSlider->setValue(50);
    brightSlider->setMinimum(0);
    brightSlider->setMaximum(64);
    brightSlider->setSingleStep(1);

    // slider for setting ambient part of light
    auto ambientSlider = new QSlider{Qt::Horizontal};
    ambientSlider->setTickPosition(QSlider::NoTicks);
    ambientSlider->setValue(50);
    ambientSlider->setMinimum(0);
    ambientSlider->setMaximum(200);
    ambientSlider->setSingleStep(1);

    auto widget = new MyWidget{};
    // connecting sliders to widget
    QObject::connect(approxSlider, &QSlider::valueChanged, widget, &MyWidget::onApproxChange);
    QObject::connect(brightSlider, &QSlider::valueChanged, widget, &MyWidget::onBrightChange);
    QObject::connect(ambientSlider, &QSlider::valueChanged, widget, &MyWidget::onAmbientChange);

    auto qvbox = new QVBoxLayout{};
    qvbox->addWidget(widget, 9);

    qvbox->addWidget(approxSlider);
    qvbox->addWidget(brightSlider);
    qvbox->addWidget(ambientSlider);

    auto groupbox = new QGroupBox(QObject::tr("1) Aprroximation\n2) Brightness3) Material"));
    groupbox->setLayout(qvbox);

    QMainWindow window{};
    window.setCentralWidget(groupbox);
    window.resize(QSize(800, 600));
    window.show();

    return app.exec();
}
