#include "mainwindow.h"
#include "pushbutton.h"
#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QSlider>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window = new QWidget;
    QWidget *pushbutton = new PushButton(window);
    pushbutton->setToolTip("SkillBox");


    QSlider *slider = new QSlider(Qt::Horizontal, window);
    slider->setMinimum(0);
    slider->setMaximum(100);

    QVBoxLayout *layout = new QVBoxLayout(window);
    layout->addWidget(pushbutton);
    layout->addWidget(slider);

    QObject::connect(slider, &QSlider::valueChanged, [pushbutton, slider](int newValue)
    {
        PushButton *c = dynamic_cast<PushButton*>(pushbutton);
        if(c)
        {
            if(newValue >=0 && newValue < 33)
                c->setGreen();
            else if(newValue >=33 && newValue < 66)
                c->setYellow();
            else if(newValue >=66 && newValue <= 100)
                c->setRed();
        }

    });
    window->setFixedSize(1000, 500);
    window->show();
    return a.exec();
}
