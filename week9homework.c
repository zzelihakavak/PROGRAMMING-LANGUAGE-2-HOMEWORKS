#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Ogrenci {
    int ogrenci_no;
    char isim[50];
    char soyisim[50];
    int sinav_notlari;

    float not_ortalamasi;
};


void kayit_ekle(struct Ogrenci ogrenciler[], int *kayit_sayisi);
void kayit_sil(struct Ogrenci ogrenciler[], int *kayit_sayisi);
void sinav_notlari(struct Ogrenci ogrenciler[], int *kayit_sayisi);


int main() {
    struct Ogrenci ogrenciler[100]; 
    int kayit_sayisi = 0;
    int secim;
    
   
    do {
        printf("1- Kayit Ekle\n");
        printf("2- Kayit Sil\n");
        printf("3- Sinav Notlari\n");
        printf("4- Cikis\n");
        printf("Secim yapiniz: ");
        scanf("%d", &secim);
        
        switch (secim) {
            case 1:
                kayit_ekle(ogrenciler, &kayit_sayisi);
                break;
            case 2:
                kayit_sil(ogrenciler, &kayit_sayisi);
                break;
            case 3:
                sinav_notlari(ogrenciler, &kayit_sayisi);
                break;
            
            case 4:
                printf("Program sonlandirildi");
                break;
            default:
                printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
        }
        
    } while (secim != 4); 
    
    return 0;
}



void kayit_ekle(struct Ogrenci ogrenciler[], int *kayit_sayisi) {
   int i;
    struct Ogrenci yeni_ogrenci;

    printf("Ogrenci sayisi: ");
    scanf("%d", kayit_sayisi);

    for (i = 0; i < *kayit_sayisi; i++) {
        printf("\nOgrenci no: ");
        scanf("%d", &yeni_ogrenci.ogrenci_no);
        printf("Isim: ");
        scanf("%s", yeni_ogrenci.isim);
        printf("Soyisim: ");
        scanf("%s", yeni_ogrenci.soyisim);
        ogrenciler[*kayit_sayisi] = yeni_ogrenci;
    (*kayit_sayisi)++;
    
    printf("Kayit eklendi.\n");
}
}


void kayit_sil(struct Ogrenci ogrenciler[], int *kayit_sayisi) {
int i;
    struct Ogrenci yeni_ogrenci;

    printf("Ogrenci sayisi: ");
    scanf("%d", kayit_sayisi);

    for (i = 0; i < *kayit_sayisi; i++) {
        printf("\nOgrenci no: ");
        scanf("%d", &yeni_ogrenci.ogrenci_no);
        printf("Isim: ");
        scanf("%s", yeni_ogrenci.isim);
        printf("Soyisim: ");
        scanf("%s", yeni_ogrenci.soyisim);
        ogrenciler[*kayit_sayisi] = yeni_ogrenci;
    (*kayit_sayisi)++;
 
    
    printf("Kayit silindi.\n");
    
}
   
}
void sinav_notlari(struct Ogrenci ogrenciler[], int *kayit_sayisi)
{
    int i,n;
    float vize,final,basari_notu,en_yuksek_basari_notu=0.0;
    int toplam_basari_notu, sinif_ortalamasi;
    struct Ogrenci yeni_ogrenci;

   printf("Kac ogrenci icin islem yapacaksiniz? ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("Ogrenci #%d icin vize notunu girin: ", i);
        scanf("%f", &vize);
        
        printf("Ogrenci #%d icin final notunu girin: ", i);
        scanf("%f", &final);
          basari_notu = 0.4 * vize + 0.6 * final;
        printf("Ogrenci #%d icin basari notu: %.2f\n", i, basari_notu);
        
        if (basari_notu > en_yuksek_basari_notu) {
            en_yuksek_basari_notu = basari_notu;
        }
        
        toplam_basari_notu += basari_notu;
    }
    
    printf("Siniftaki en yuksek basari notu: %.2f\n", en_yuksek_basari_notu);
    
    sinif_ortalamasi = toplam_basari_notu / n;
    printf("Sinifin basari notu ortalamasi: %.2f\n", sinif_ortalamasi);
    
        ogrenciler[i] = yeni_ogrenci;
   
    }


