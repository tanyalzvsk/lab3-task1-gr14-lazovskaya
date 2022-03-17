#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int IsSqrt(int num){
    for (int i = 0; i < num; ++i) {
        if (num == i * i) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char** argv) {
    if (argc < 2){
      printf("wrong parameters count");
      return 1;
    }
    char *ptr;
    int n = strtol(argv[1], &ptr, 10);
    int *arr = (int*)malloc(n * sizeof(int));
    srand(time(0));
    printf("array:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (IsSqrt(arr[i])) {
            printf("square: %d\n",arr[i]);
        }
    }
    free(arr);
    return 0;
}