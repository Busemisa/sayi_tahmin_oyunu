#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rastgeleSayi, tahmin, denemeSayisi = 0;

    // Rastgele say� �retmek i�in zaman� kullan
    srand(time(NULL));

    // 1 ile 100 aras�nda rastgele bir say� se�
    rastgeleSayi = rand() % 100 + 1;

    printf("1 ile 100 arasinda bir sayi tahmin edin.\n");

    printf("Tahmininizi girin: ");
    scanf("%d", &tahmin);
    denemeSayisi++;

    while (tahmin != rastgeleSayi) {
        if (tahmin < rastgeleSayi) {
            printf("Daha buyuk bir sayi giriniz.\n");
        } else {
            printf("Daha kucuk bir sayi girin.\n");
        }

        printf("Tahmininizi girin: ");
        scanf("%d", &tahmin);
        denemeSayisi++;
    }

    printf("Tebrikler! %d tahminde bildiniz. Rastgele sayi: %d\n", denemeSayisi, rastgeleSayi);

    return 0;
}

