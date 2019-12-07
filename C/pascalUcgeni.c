#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Lutfen, pascal ucgeni icin satir sayisi giriniz: ");
    scanf("%d",&a);
    printf("\n");

    for(int b=0;b<a;b++){

        for(int d=0;d<a-b;d++)
            printf("    ");

        int c= 1;

        for(int e=0;e<=b;e++){

            printf(" %6d ",c);
            c=c*(b-e)/(e+1);
        }

        printf("\n\n");
    }

    return 0;
}
