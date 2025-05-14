#include <iostream>
#include "../include/LinkedList.h"

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

int LinkedList::indexOf(const int item) const {
    int index = 0;
    const Node *current = head;
    while (current != nullptr) {
        if (current->value == item) {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

bool LinkedList::contains(const int item) const {
    return indexOf(item) != -1;
}

void LinkedList::removeFirst() {
    if (head == nullptr) {
        throw std::invalid_argument("List is empty");
    }
    Node *temp = head;
    head = head->next;

    delete temp;

    if (head == nullptr) {
        tail = nullptr;
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
