#include <stdio.h>

int main() {
    float number;

    printf("Ondalik bir sayi girin: ");
    scanf("%f", &number);

    printf("Sayi onaltilik (hexadecimal) olarak: %a\n", number);

    return 0;
}