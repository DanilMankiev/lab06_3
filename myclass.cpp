#include"MyClass.h"
MyClass::MyClass()
{
}
void MyClass::addNew(QObject* new_object){
    widgets.append(new_object);
    for(int i = 0;i<widgets.size()-1;++i){
        QObject::connect(widgets[i],SIGNAL(valueChanged(int)),widgets[widgets.size()-1],SLOT(setValue(int)));
        QObject::connect(widgets[widgets.size()-1],SIGNAL(valueChanged(int)),widgets[i],SLOT(setValue(int)));
    }

}
void MyClass::setValue(int value){
    emit valueChanged(value);
}
