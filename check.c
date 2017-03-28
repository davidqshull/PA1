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

    int i;
    for (i = 0; i < size; i++) {
        int left = i * 2 + 1;
        int right = left + 1;
        if (left < size) {
            if (heap[left] < heap[i]) {
                fprintf(stderr, "Left child %d is less than parent at %d. %d vs %d\n",
                    left, i, heap[left], heap[i]);
            }
        }
        if (right < size) {
            if (heap[right] < heap[i]) {
                fprintf(stderr, "Right child %d is less than parent at %d. %d vs %d\n",
                    right, i, heap[right], heap[i]);
            }
        }
    }

    free(heap);
}