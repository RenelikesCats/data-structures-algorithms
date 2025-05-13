#include <iostream>

using namespace std;
#include "Array.h";

int main() {
    Array *arr = new Array(3); // declaring custom dynamic array with size of 3

    arr->insert(10);
    arr->insert(20);
    arr->insert(30);
    arr->insert(40);
    arr->insert(50);

    cout << arr->findIndexOf(30) << endl; // output:2

    cout << arr->findIndexOf(400) << endl; // output: -1

    arr->removeAt(1); // removes index at 1 (20)

    cout << arr->findIndexOf(1) << endl; //  output: -1

    cout << arr->length() << endl; // prints length of array. output: 4

    arr->print(); //prints all values in array. output: 10 30 40 50

    delete arr;
    arr = nullptr;

    return 0;
}
