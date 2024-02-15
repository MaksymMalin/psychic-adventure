#include "array.h"
#include <iostream>

Array::Array(int size, int step)
    : initialSize(size), step(step), arr(new int[size]), currentIndex(0), currentSize(size) {}

Array::~Array() {
    delete[] arr;
}

void Array::showElements() const {
    std::cout << "Elements: ";
    for (int i = 0; i < currentIndex; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void Array::expandArray(int size) {
    int* newArr = new int[currentSize + size];
    for (int i = 0; i < currentIndex; i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    currentSize += size;
}

int Array::getSize() const {
    return currentSize;
}

int Array::getElemSize() const {
    return currentIndex;
}

void Array::setValue(int val) {
    if (currentIndex >= currentSize) {
        expandArray(step);
    }
    arr[currentIndex++] = val;
}

void Array::setArray(int* pArr, int size) {
    expandArray(size);
    for (int i = 0; i < size; i++) {
        arr[currentIndex++] = pArr[i];
    }
}
