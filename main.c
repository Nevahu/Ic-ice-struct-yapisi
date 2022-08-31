#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct//Ilk Struct yapisinin baslangici
    {
        char isim[40];
        int boy;
        struct //Icteki Struct yapisinin baslangici
        {
            int yil;
            int ay;
            int gun;
        }dogum_tarihi; // Icteki Struct yapisinin bitisi
    }kisi; //Ilk Struct yapisinin bitisi

    printf("Isim: ");
    scanf("%s", &kisi.isim);
    printf("boy: ");
    scanf("%s", &kisi.boy);
    printf("Dogum gunu: ");
    scanf("%d%d%d", &kisi.dogum_tarihi.gun, &kisi.dogum_tarihi.ay, &kisi.dogum_tarihi.yil );

    printf("\nGirilen Bilgiler: \n");
    printf("Isim: %s\n",&kisi.isim);
    printf("boy: %s\n",&kisi.boy);
    printf("Dogum gunu: %d/%d/%d", kisi.dogum_tarihi.gun, kisi.dogum_tarihi.ay, kisi.dogum_tarihi.yil);

    return 0;
}
