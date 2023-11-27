#ifndef MYCLASS_H
#define MYCLASS_H
#include<QApplication>
#include<QVector>

class MyClass : public QObject
{
    Q_OBJECT
     QVector<QObject*> widgets;
public:
    MyClass();
    void addNew(QObject* new_object);
    public slots:
    void setValue(int value);
    signals:
    void valueChanged(int value);
};
#endif // MYCLASS_H
