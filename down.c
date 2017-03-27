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
    // for each parent node
    for (count = (size - 1) / 2; count > 0; count--) {
        int parent = count;
        
        int invalid = 1;
        while (invalid) {
            int left = parent * 2;
            int right = left + 1;

            int child;
            // bounds check
            if (left >= size) {
                break; // we hit the bottom of the heap. current node is valid.
            } else if (right >= size) {
                child = left; // no right child, only check left
            } else {
                // find the smaller of the children
                if (heap[left] > heap[right]) {
                    child = right;
                } else {
                    child = left;
                }
            }
            
            // if the parent is greater than the smaller child
            if (heap[parent] > heap[child]) {
                // swap parent down to child
                int temp = heap[parent];
                heap[parent] = heap[child];
                heap[child] = temp;

                // move parent index
                parent = child;
                // loop to find next child
            } else {
                // if less or equal, this sub-tree is a valid heap. break the loop
                invalid = 0; // break;
            }
        }

    }

    int i;
    for (i = 0; i < size; i++) {
        printf("%d\n", heap[i]);
    }

    free(heap);
}