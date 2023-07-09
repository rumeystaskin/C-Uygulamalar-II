#include <stdio.h>

int main(){

    FILE *dosya;
    char metin[100];
    dosya = fopen("metin.txt", "w");

   

    printf("Dosyaya yazılacak metin:\n");
    fgets(metin, sizeof(metin), stdin);

    
    fputs(metin, dosya); // dosyaya yazma

    
    fclose(dosya); // dosyayı kapatma


    dosya = fopen("metin.txt", "r");
    printf("Dosyadan okunan metin:\n");


    while (fgets(metin, sizeof(metin), dosya) != NULL) {
        printf("%s", metin);
    }

    fclose(dosya);

    return 0;
}