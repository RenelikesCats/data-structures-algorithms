#include <iostream>
#include "LinkedList.h"

using std::cout;
using std::endl;

LinkedList::Node::Node(const int value) {
    this->value = value;
    this->next = nullptr;
}

LinkedList::LinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
}

LinkedList::~LinkedList() {
    Node *current = head;
    while (current != nullptr) {
        Node *next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
    tail = nullptr;
}

void LinkedList::addLast(const int item) {
    Node *node = new Node(item);
    if (head == nullptr) {
        head = tail = node;
    } else {
        tail->next = node;
        tail = node;
    }
}

void LinkedList::addFirst(const int item) {
    Node *node = new Node(item);
    if (head == nullptr) {
        head = tail = node;
    } else {
        node->next = head;
        head = node;
    }
}

void LinkedList::printList() const {
    Node *current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

