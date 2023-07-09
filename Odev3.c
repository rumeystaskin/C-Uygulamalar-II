#include <stdio.h>



int main(){

    int sayi1, sayi2;
    int *pointer1, *pointer2;

    pointer1 = &sayi1;
    pointer2 = &sayi2;

    printf("Birinci sayıyı giriniz: ");
    scanf("%d", pointer1);

    printf("İkinci sayıyı giriniz: ");
    scanf("%d", pointer2);

    printf("Birinci sayı: %d\n", *pointer1);
    printf("İkinci sayı: %d\n", *pointer2);

    
    return 0;
}