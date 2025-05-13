#include<iostream>
#include "Array.h"

using namespace std;

Array::Array(const int size) {
    this->myArr = new int[size];
    this->capacity = size;
    count = 0;
}

Array::~Array() {
    delete[] myArr;
}

void Array::insert(const int value) {
    if (count == capacity) {
        int newCapacity = capacity * 2;
        int *tempArr = new int[newCapacity];

        for (int i = 0; i < count; i++) {
            tempArr[i] = myArr[i];
        }
        delete[] myArr;
        myArr = tempArr;
        capacity = newCapacity;
    }
    myArr[count++] = value;
}

void Array::removeAt(const int index) {
    if (index < 0 || index >= count) {
        throw out_of_range("Index out of range");
    }
    for (int i = index; i < count; i++) {
        myArr[i] = myArr[i + 1];
    }
    count--;
}

int Array::findIndexOf(const int value) const {
    for (int i = 0; i < count; i++) {
        if (myArr[i] == value) {
            return i;
        }
    }
    return -1;
}

int Array::length() const {
    return count;
}

void Array::print() const {
    for (int i = 0; i < count; i++) {
        cout << myArr[i] << " ";
    }
}


