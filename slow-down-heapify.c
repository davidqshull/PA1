#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#define MAX_SIZE 1572864
#define MAX_LEVEL (int) log2(MAX_SIZE)

int main() {
        int* arr = malloc(sizeof(int) * MAX_SIZE);

        int idx = 0;

        int shift;
        int i;
        for (shift = 0; shift < MAX_LEVEL; shift++) {
            for (i = 0; i < (1 << shift); i++) {
                arr[idx++] = MAX_LEVEL - shift;
            }
        }

        for (; idx < MAX_SIZE;) {
            arr[idx++] = 0;
        }

        printf("%d\n", MAX_SIZE);
        for (i = 0; i < MAX_SIZE; i++) {
            printf("%d\n", arr[i]);
        }
}