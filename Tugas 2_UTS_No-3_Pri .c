#include<stdio.h>

void main(){
    int X[100][100];
    int Y, x, y;
    int Pawal, Pakhir, Qawal, Qakhir;
    //Matriks gambar asal adalah sebagai berikut:
    X[1][1] = 1; X[1][2] = 0; X[1][3] = 0; X[1][4] = 0;
    X[2][1] = 1; X[2][2] = 1; X[2][3] = 1; X[2][4] = 0;
    X[3][1] = 1; X[3][2] = 1; X[3][3] = 1; X[3][4] = 0;
    X[4][1] = 1; X[4][2] = 0; X[4][3] = 0; X[4][4] = 0;

    for(int z = 1; z<=10; z++)
    {
        X[10][z] = 0;
        X[z][10] = 0;
    }

    printf("Mencari hasil konvolusi pada:\n");
    printf("Baris : ");
    scanf("%d", &x);
    printf("Kolom : ");
    scanf("%d", &y);

    Pawal = x-1;
    Pakhir = x+1;
    Qawal = y-1;
    Qakhir = y+1;

    if(Pawal<1) Pawal = 10;
    if(Pakhir>4) Pakhir = 10;
    if(Qawal<1) Qawal = 10;
    if(Qakhir>4)Qakhir = 10;

    //printf("%d, %d, %d, %d", Pawal, Pakhir, Qawal, Qakhir);

    Y = X[Pawal][Qawal]+X[Pawal][y]+X[Pawal][Qakhir]+X[x][Qawal]+4*X[x][y]+X[x][Qakhir]+X[Pakhir][Qawal]+X[Pakhir][y]+X[Pakhir][Qakhir];

    printf("\nNilai Y[%d][%d] adalah %d\n\n", x,y,Y);


}
