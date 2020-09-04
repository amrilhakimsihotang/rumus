#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*
by Amril Hakim Sihotang.
Tugas akhir pemogrograman C - Dicoding
*/
int main(){
int a;
int b;
float r;
const float phi =3.14;
int hasil;
int pilih;
char baca;

ulang:

printf("\n================================\n");
printf("1. Hitung jarak tempuh.");
printf("\n2. Hitung Luas persegi panjang.");
printf("\n3. Hitung Luas Lingkaran.");
printf("\n4. Keluar.");
printf("\n================================\n");
printf("pilihan[1-4]: ");
scanf("%d",&pilih);

switch (pilih){
case 1:
//rumus disini untuk pilih 1(hitung jarak tempuh)
    printf("\n1. Hitung Jarak tempuh\n\n");
    printf("Masukkan kecepatan tempuh(Km/Jam): ");
    scanf("%d",&a);
    printf("\nMasukkan waktu tempuh(Jam): ");
    scanf("%d",&b);
    printf("\nJarak tempuh(Km): %d\n\n",a*b);

    printf("Lanjutkan?(Y/N): " );
    baca = getche();
    if(toupper(baca)=='Y')
        {
            system("cls");
            goto ulang;

        }
    else{
            exit(0);
    }
//akhir rumus jarak
    break;
case 2:
//rumus disini untuk pilih 2(luas kubus)
printf("\nHitung luas Persegi Panjang \n\n");
printf("Masukkan nilai panjang(cm): ");
scanf("%d",&a);
printf("\nMasukkan nilai lebar(cm): ");
scanf("%d",&b);
printf("\n\nLuas persegi panjang adalah(cm2): %d",a*b);
printf("\n\nLanjutkan?(Y/N): ");
    baca = getche();
    if(toupper(baca)=='Y'){
        system("cls");
        goto ulang;
    }else{
        exit(0);
    }
break;

case 3:
//rumus disini untuk pilih 3
printf("\nHitung luas lingkaran \n\n");
printf("Masukkan jari-jari lingkaran(cm): ");
scanf("%f",&r);
printf("\nLuas lingkaran adalah: %f",phi * r*r);
printf("\n\nLanjutkan?(Y/N): ");
    baca=getche();
    if(toupper(baca)=='Y'){
        system("cls");
        goto ulang;
    }else{
        exit(0);
    }
break;
case 4:
    printf("Yakin ingin keluar?(Y/N): " );
    baca = getche();
    if(toupper(baca)=='N')
        {
            system("cls");
            goto ulang;

        }
    else{
            exit(0);
    }


default:
    printf("\nNilai tidak dikenali\n");break;
}


//rumus hitung jarak
//printf("Menghitung jarak mobil\n");
//printf("Masukkan kecepatan tempuh: ");
//scanf("%d",&a);
//printf("\nMasukkan waktu tempuh: ");
//scanf("%d",&b);
//printf("\nHasilnya: %d\n\n",a*b);
//akhir rumus jarak




return 0;
}
