#include <stdio.h>
#include <string.h>

int main(){

    char string[100];


    printf("Bir kelime veya cümle giriniz: ");

    fgets(string, sizeof(string), stdin);

   

    int length = strlen(string);

    printf("Girilen kelimenin veya cümlenin uzunluğu: %d\n", length);

    
    return 0;
}