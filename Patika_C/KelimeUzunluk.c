#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];

    printf("Kelime veya cumle girin: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0'; // '\n' karakterini kaldır

    int length = strlen(sentence);
    printf("Girilen kelimenin veya cumlenin uzunlugu: %d\n", length);

    return 0;
}