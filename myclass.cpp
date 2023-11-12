#include"MyClass.h"
MyClass::MyClass()
{
    countOfNumbers = 0;
}
void MyClass::addNew(QObject* new_object){
    array[MyClass::countOfNumbers-1] = new_object;
    for(int i = 0;i<MyClass::countOfNumbers-1;++i){
        QObject::connect(array[i],SIGNAL(valueChanged(int)),array[MyClass::countOfNumbers-1],SLOT(setValue(int)));
        QObject::connect(array[countOfNumbers-1],SIGNAL(valueChanged(int)),array[i],SLOT(setValue(int)));
    }
    MyClass::countOfNumbers++;
}
void MyClass::valueChanged(int value){

}
void MyClass::setValue(int value){
    emit valueChanged(value);
}
