#include <iostream>
#include "LinkedList.h"
#include "include/Array.h"

using namespace std;


int main() {
    cout << "Array: " << endl;
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

    cout << endl << "\nLinkedList:" << endl;

    LinkedList *linked_list = new LinkedList();

    linked_list->addLast(10);
    linked_list->addLast(20);
    linked_list->addFirst(30);

    cout << linked_list->indexOf(30) << endl; // output: 0
    linked_list->printList(); // output: 30 10 20

    delete linked_list;
    linked_list = nullptr;

    return 0;
}
