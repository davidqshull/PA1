#include <stdio.h>
#include <stdlib.h>

int main() {
        int* arr = malloc(sizeof(int) * 1572864);
        
        int idx = 0;
        
        int i;
        for (i = 0; i < (1 << 0); i++) {
            arr[idx++] = 20;
        }
        for (i = 0; i < (1 << 1); i++) {
            arr[idx++] = 19;
        }
        for (i = 0; i < (1 << 2); i++) {
            arr[idx++] = 18;
        }
        for (i = 0; i < (1 << 3); i++) {
            arr[idx++] = 17;
        }
        for (i = 0; i < (1 << 4); i++) {
            arr[idx++] = 16;
        }
        for (i = 0; i < (1 << 5); i++) {
            arr[idx++] = 15;
        }
        for (i = 0; i < (1 << 6); i++) {
            arr[idx++] = 14;
        }
        for (i = 0; i < (1 << 7); i++) {
            arr[idx++] = 13;
        }
        for (i = 0; i < (1 << 8); i++) {
            arr[idx++] = 12;
        }
        for (i = 0; i < (1 << 9); i++) {
            arr[idx++] = 11;
        }
        for (i = 0; i < (1 << 10); i++) {
            arr[idx++] = 10;
        }
        for (i = 0; i < (1 << 11); i++) {
            arr[idx++] = 9;
        }
        for (i = 0; i < (1 << 12); i++) {
            arr[idx++] = 8;
        }
        for (i = 0; i < (1 << 13); i++) {
            arr[idx++] = 7;
        }
        for (i = 0; i < (1 << 14); i++) {
            arr[idx++] = 6;
        }
        for (i = 0; i < (1 << 15); i++) {
            arr[idx++] = 5;
        }
        for (i = 0; i < (1 << 16); i++) {
            arr[idx++] = 4;
        }
        for (i = 0; i < (1 << 17); i++) {
            arr[idx++] = 3;
        }
        for (i = 0; i < (1 << 18); i++) {
            arr[idx++] = 2;
        }
        for (i = 0; i < (1 << 19); i++) {
            arr[idx++] = 1;
        }
        for (; idx < 1572864;) {
            arr[idx++] = 0;
        }
        
        printf("%d\n", 1572864);
        for (i = 0; i < 1572864; i++) {
            printf("%d\n", arr[i]);
        }
}