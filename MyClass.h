#ifndef MYCLASS_H
#define MYCLASS_H
#include<QApplication>
#include<QVector>
#include<QPushButton>
#include<QVBoxLayout>

class MyClass : public QWidget
{
    Q_OBJECT
     QVector<QObject*> widgets;
     QPushButton* add_button;
     QVBoxLayout* m_layout;
     int count;
public:
    MyClass(QWidget* parent = nullptr);
    ~MyClass();
    void addNew(QObject* new_object);
private slots:
    void ClickedSLot();
};
#endif // MYCLASS_H
