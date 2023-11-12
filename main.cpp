#include "mainwindow.h"

#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QLabel>
#include<QScrollBar>
#include"MyClass.h"



int main(int argc, char *argv[])
{
    MyClass massive;
    QApplication a(argc, argv);
    QWidget *window = new QWidget;
    window ->setWindowTitle("Age:");
    QLabel *label = new QLabel("QWERTY");
    massive.addNew(label);
    QScrollBar* scrollbar = new QScrollBar;
    massive.addNew(scrollbar);
    QSlider *slider = new QSlider(Qt::Horizontal);
    massive.addNew(slider);
    QSpinBox *spinbox = new QSpinBox;
    massive.addNew(spinbox);
    slider->setRange(1,100);
    spinbox->setValue(50);


    QHBoxLayout * layout = new QHBoxLayout;
    layout -> addWidget(spinbox);
    layout -> addWidget(slider);
    layout ->addWidget(scrollbar);
    layout-> addWidget(label);
    window->setLayout(layout);
    window->show();
    return a.exec();
}
