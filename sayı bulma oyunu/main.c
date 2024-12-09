#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    printf("*** 1220205065 Ali AKCAN ***\n");
    int rastgele, sayi, tahmin, denemeSayisi;

    srand(time(NULL));
    rastgele = rand() % 1000 + 1; // 1 ile 1000 arasýnda bir rastgele sayý üretilir
    
    printf("***Sayi tahmin etme oyunu***\n");
    
    denemeSayisi = 0; // Deneme sayýsýný sýfýrlama
    
    while (1) {
        printf("Lutfen 1 ile 1000 arasinda bir tahmin yapiniz: ");
        if (scanf("%d", &sayi) != 1 || sayi < 1 || sayi > 1000) {
            // Kullanýcý sayý dýþýnda bir deðer girdi veya aralýk dýþýnda bir sayý girdi
            printf("Lutfen 1 ile 1000 arasinda bir sayi giriniz.\n");
            break; // Programý kapat
        }

        denemeSayisi++; // Deneme sayýsýný arttýrma

        if (sayi == rastgele) {
            printf("Tebrikler!! Dogru tahmin!!\n");
            break; // Doðru tahmin yapýldý, döngüden çýkma
        } else {
            tahmin = abs(sayi - rastgele);
            printf("Yanlis Tahmin! Sayiya olan uzakliginiz: %d\n", tahmin);
            printf("Lutfen yeni bir tahmin yapiniz.\n");
        }
    }

    printf("Deneme sayisi: %d\n", denemeSayisi);
    
    return 0;
}

