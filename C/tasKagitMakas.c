#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int i=0,j=0;
    int oyuncu,bilgisayar;

    srand(time(NULL));

    printf("Tas: 1\nKagit: 2\nMakas: 3\n");

    while(i+j!=3){

        printf("Seciminizi yapiniz: ");
        scanf("%d",&oyuncu);
        printf("\n");

        bilgisayar=rand()%3;

        switch(oyuncu){

            case 1:

                printf("Oyuncu: Tas\n");

                if(bilgisayar==0)
                    printf("Bilgisayar: Tas\n");
                else if(bilgisayar==1){
                    printf("Bilgisayar: Kagit\n");
                    j++;
                }
                else{
                    printf("Bilgisayar: Makas\n");
                    i++;
                }
                break;

            case 2:

                printf("Oyuncu: Kagit\n");

                if(bilgisayar==0){
                    printf("Bilgisayar: Tas\n");
                    i++;
                }
                else if(bilgisayar==1)
                    printf("Bilgisayar: Kagit\n");
                else{
                    printf("Bilgisayar: Makas\n");
                    j++;
                }
                break;

            case 3:

                printf("Oyuncu: Makas\n");

                if(bilgisayar==0){
                    printf("Bilgisayar: Tas\n");
                    j++;
                }
                else if(bilgisayar==1){
                    printf("Bilgisayar: Kagit\n");
                    i++;
                }
                else
                    printf("Bilgisayar: Makas\n");
                break;

            default:
                printf("Hatali Giris Yaptiniz!\n");
                break;
        }

        printf("Oyuncu: %d - Bilgisayar: %d\n\n",i,j);

        if(abs(i-j)==2)
            break;
    }

    if(i>j)
        printf("Oyuncu Kazandi!\n");
    else
        printf("Bilgisayar Kazandi!\n");

    return 0;
}
