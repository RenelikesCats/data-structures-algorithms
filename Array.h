
#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int *myArr;
    int capacity;
    int count;
public:
    Array(int size);
    ~Array();
    void insert(int value);
    void removeAt(int index);
    int findIndexOf(int value) const;
    int length() const;
    void print() const;
};

#endif //ARRAY_H
