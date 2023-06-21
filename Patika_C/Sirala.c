#include <stdio.h>

void sortArray(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j] + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, i;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &size);

    int arr[size];

    printf("Dizi elemanlarını girin:\n");
    for (i = 0; i < size; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sortArray(arr, size);

    printf("Sıralanmış dizi:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}