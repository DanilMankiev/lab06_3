#ifndef MYCLASS_H
#define MYCLASS_H
#include<QApplication>

class MyClass : public QObject
{
    Q_OBJECT
    QObject* array[5];
    int countOfNumbers;
public:
    MyClass();
    void addNew(QObject* new_object);
    public slots:
    void setValue(int value);
    signals:
    void valueChanged(int value);
};
#endif // MYCLASS_H
