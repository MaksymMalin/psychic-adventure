/*Написати клас Array (динамічний масив).
Котрий повинен виділити пам'ять, видалити за собою пам'ять.

Мати члени:

    (Початковий) Розмір масиву,
    Крок, з яким масив збільшується,
    вказівник на масив,
    індекс поточного елементу масиву.

Методи:

    конструктор (з перевірками та виділенням пам’яті),
    деструктор (повернення пам’яті),
    showElements()  - показати елементи масиву,
    expandArray(int size)   -  розширити масив,
    int getSize()  - отримати розмір масиву,
    int getElemSize()  - отримати фактичний розмір масиву (скільки елем збережено),
    setValue(int  val)  - додати елемент в масив
    setArray(int  * pArr ,  int size)  - додати звичайний масив в Array

Файли для завантаження:  array.h,  array.cpp
*/

#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int initialSize;
    int step;
    int* arr;
    int currentIndex;
    int currentSize;

public:
    Array(int size = 10, int step = 5);
    ~Array();

    void showElements() const;
    void expandArray(int size);
    int getSize() const;
    int getElemSize() const;
    void setValue(int val);
    void setArray(int* pArr, int size);
};

#endif
