#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // Dosyayı oluştur ve yazma modunda aç
    file = fopen("metin.txt", "w");
    if (file == NULL) {
        printf("Dosya olusturma hatasi!\n");
        return 1;
    }

    printf("Bir metin girin: ");
    fgets(text, sizeof(text), stdin);

    // Metni dosyaya yaz
    fputs(text, file);

    // Dosyayı kapat
    fclose(file);

    // Dosyayı okuma modunda aç
    file = fopen("metin.txt", "r");
    if (file == NULL) {
        printf("Dosya acma hatasi!\n");
        return 1;
    }

    printf("Dosyanin icerigi:\n");

    // Dosyayı oku ve ekrana yazdır
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    // Dosyayı kapat
    fclose(file);

    return 0;
}