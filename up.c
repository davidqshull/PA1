/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 1
 * Jan-Lucas Fitzanthony Ott, Anthony Fitznathan Pompili, David Quadragesimus Shull
 * March 28, 2017
 */

#include <stdio.h>
#include "read_array.c"

int main(void) {

    int size;
    int* heap = read_array(&size);
    
    int count;
    for (count = 0; count < size; count++) {
        int child = count;
        int parent = (child - 1) / 2;
        while (heap[parent] > heap[child]) {
            int temp = heap[parent];
            heap[parent] = heap[child];
            heap[child] = temp;
            child = parent;
            parent = (child - 1) / 2;
        }
    }

    int i;
    for (i = 0; i < size; i++) {
        printf("%d\n", heap[i]);
    }
    
    free(heap);
}