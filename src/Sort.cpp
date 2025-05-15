#include "../include/Sort.h"

#include <vector>


void Sort::bubbleSort(std::vector<int> *vec) {
    const int size = vec->size();

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if ((*vec)[j] > (*vec)[j + 1]) {
                int temp = (*vec)[j];
                (*vec)[j] = (*vec)[j + 1];
                (*vec)[j + 1] = temp;
            }
        }
    }
}
