#include<stdio.h>

void main(){
    int h[1000];
    int c[1000];
    int wbaru[1000];
    int cc = 0;
    h[1] = 2;
    h[2] = 4;
    h[3] = 3;
    h[4] = 1;
    h[5] = 3;
    h[6] = 6;
    h[7] = 4;
    h[8] = 3;
    h[9] = 1;
    h[10] = 0;
    h[11] = 3;
    h[12] = 2;
    for (int i = 1; i <=12; i++)
    {
        cc = cc + h[i];
        c[i] = cc;
    }
    for (int i = 1; i <=12; i++)
    {
        wbaru[i] = (c[i]*12)/32;
    }
    printf("w | Cw | w-baru\n");

    for (int i = 1; i <=12; i++)
    {
        printf("%d | %d | %d\n", h[i], c[i], wbaru[i]);
    }

}
