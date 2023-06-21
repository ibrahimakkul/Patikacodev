#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;  // Palindrom değil
        }
    }

    return 1;  // Palindrom
}

int main() {
    char str[100];

    printf("Kelimeyi girin: ");
    gets(str);

    if (isPalindrome(str)) {
        printf("Bu kelime bir palindromdur.\n");
    } else {
        printf("Bu kelime bir palindrom değildir.\n");
    }

    return 0;
}