#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; // İlk elemanı varsayılan olarak en büyük olarak kabul ediyoruz

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {5, 8, 3, 1, 9, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxNumber = findMax(arr, size);

    printf("Dizideki en buyuk sayi: %d\n", maxNumber);

    return 0;
}