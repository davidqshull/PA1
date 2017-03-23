/**
 * CSC 335 - Analysis of Algorithms
 * Programming Assignment 1
 * Jan-Lucas Fitzanthony Ott, Anthony Fitznathan Pompili, David Quadragesimus Shull
 * March 28, 2017
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void) {

    char *line;
    size_t size;
    int array_size;

    getline(&line, &size, stdin);
    array_size = atoi(line);

    int heap[array_size];

    int count = 0;

    while(getline(&line, &size, stdin) != -1) {
        heap[count] = atoi(line);
        int child = count;
        int parent = child / 2;
        while(heap[parent] > heap[child]) {
            int temp = heap[parent];
            heap[parent] = heap[child];
            heap[child] = temp;
            child = parent;
            parent = child / 2;
        }
        count++;
    }

    for(int i = 0; i < array_size; i++) {
        printf("%d\n", heap[i]);
    }
}
