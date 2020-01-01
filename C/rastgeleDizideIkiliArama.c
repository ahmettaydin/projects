#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int[]);
int binarySearch(int[], int);

int main()
{
    srand(time(NULL));

    int dizi[25];
    int x;

    for(int i=0;i<25;i++)
        dizi[i]=rand()%50+1;

    do{
        printf("Sayi tahmin edniniz [1-50]: ");
        scanf("%d",&x);
    }while(x<1 || x>50);

    printf("\n");

    selectionSort(dizi);

    printf("Dizi: ");
    for(int i=0;i<25;i++)
        printf("%d ",dizi[i]);

    printf("\n\n");

    if(binarySearch(dizi,x))
        printf("%d sayisi dizide BULUNDU!\n",x);
    else
        printf("%d sayisi dizide BULUNAMADI!\n",x);

    return 0;
}

void selectionSort(int dizi[]){

    int enKucuk;

    for(int i=0;i<24;i++){

        enKucuk=i;

        for(int j=i+1;j<25;j++)
            if(dizi[j]<dizi[enKucuk])
                enKucuk=j;

        int temp=dizi[i];
        dizi[i]=dizi[enKucuk];
        dizi[enKucuk]=temp;
    }
}

int binarySearch(int dizi[], int x){

    int alt=0;
    int ust=24;
    int orta=0;

    while(alt<=ust){

        orta=(alt+ust)/2;

        if(dizi[orta]==x)
            return orta;

        if(dizi[orta]>x)
            ust=orta-1;
        else
            alt=orta+1;
    }

    return 0;
}
