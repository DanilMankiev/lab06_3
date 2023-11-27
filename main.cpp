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
    QApplication a(argc, argv);
    QWidget *window = new QWidget;
    window ->setWindowTitle("Age:");

    MyClass widgetCollection;




    widgetCollection.show();
    return a.exec();
}
