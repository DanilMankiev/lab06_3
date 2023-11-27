#include "mainwindow.h"

#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QLabel>
#include<QScrollBar>
#include<QPushButton>
#include"MyClass.h"



int main(int argc, char *argv[])
{
    MyClass widgetCollection;
    QApplication a(argc, argv);
    QPushButton* button = new QPushButton;

    QWidget *window = new QWidget;
    window ->setWindowTitle("Age:");

    QLabel *label = new QLabel("Lable");
    widgetCollection.addNew(label);

    QScrollBar* scrollbar = new QScrollBar;
    widgetCollection.addNew(scrollbar);

    QSlider *slider = new QSlider(Qt::Horizontal);
    widgetCollection.addNew(slider);

    QSpinBox *spinbox = new QSpinBox;
    widgetCollection.addNew(spinbox);

    slider->setRange(1,100);
    spinbox->setValue(77);

    QHBoxLayout * layout = new QHBoxLayout;
    layout -> addWidget(spinbox);
    layout -> addWidget(slider);
    layout ->addWidget(scrollbar);
    layout-> addWidget(label);

    window->setLayout(layout);
    window->show();
    return a.exec();
}
