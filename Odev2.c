#include <stdio.h>

void faktoriyel(int sayi){
    int sonuc = 1;

    for (int i = 1; i <= sayi; i++) {
        sonuc *= i;
    }
    printf("%d! = %d\n", sayi, sonuc);
}

int main(){
    
    int sayi;

    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);
    faktoriyel(sayi);

    return 0;
}