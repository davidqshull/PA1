/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 1
 * Jan-Lucas Fitzanthony Ott, Anthony Fitznathan Pompili, David Quadragesimus Shull
 * March 28, 2017
 */

#include <stdio.h>
#include "read_array.c"

void heapify(int* heap, int i, int size) {
    int left = i * 2 + 1;
    int right = left + 1;
    int child = left;
    if (left >= size) return; // base case - hit a leaf
    if (right < size) { // has right child
        if (heap[left] > heap[right]) {
            child = right; // take smaller child
        }
    }

    if (heap[child] < heap[i]) { // if child is smaller than parent
        int temp = heap[i]; // swap the child up, parent down
        heap[i] = heap[child];
        heap[child] = temp;
        heapify(heap, child, size); // recursive call
    }
}

int main(void) {

    int size;
    int* heap = read_array(&size);

    int count;
    // for each parent node
    for (count = size / 2; count >= 0; count--) {
        heapify(heap, count, size);
    }

    int i;
    for (i = 0; i < size; i++) {
        printf("%d\n", heap[i]);
    }

    free(heap);
}