
#ifndef LINKEDLIST_H
#define LINKEDLIST_H



class LinkedList {
private:
    class Node {
    public:
        int value;
        Node* next;

        Node(int value);
    };

    Node* head;
    Node* tail;

public:
    LinkedList();
    void addLast(int item);
    void addFirst(int item);
    int indexOf(int item) const;
    bool contains(int item) const;
    void printList() const;
    ~LinkedList();

};



#endif //LINKEDLIST_H
