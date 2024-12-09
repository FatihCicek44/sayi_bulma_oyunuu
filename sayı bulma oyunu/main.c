#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    printf("*** 1220205065 Ali AKCAN ***\n");
    int rastgele, sayi, tahmin, denemeSayisi;

    srand(time(NULL));
    rastgele = rand() % 1000 + 1; // 1 ile 1000 aras�nda bir rastgele say� �retilir
    
    printf("***Sayi tahmin etme oyunu***\n");
    
    denemeSayisi = 0; // Deneme say�s�n� s�f�rlama
    
    while (1) {
        printf("Lutfen 1 ile 1000 arasinda bir tahmin yapiniz: ");
        if (scanf("%d", &sayi) != 1 || sayi < 1 || sayi > 1000) {
            // Kullan�c� say� d���nda bir de�er girdi veya aral�k d���nda bir say� girdi
            printf("Lutfen 1 ile 1000 arasinda bir sayi giriniz.\n");
            break; // Program� kapat
        }

        denemeSayisi++; // Deneme say�s�n� artt�rma

        if (sayi == rastgele) {
            printf("Tebrikler!! Dogru tahmin!!\n");
            break; // Do�ru tahmin yap�ld�, d�ng�den ��kma
        } else {
            tahmin = abs(sayi - rastgele);
            printf("Yanlis Tahmin! Sayiya olan uzakliginiz: %d\n", tahmin);
            printf("Lutfen yeni bir tahmin yapiniz.\n");
        }
    }

    printf("Deneme sayisi: %d\n", denemeSayisi);
    
    return 0;
}

