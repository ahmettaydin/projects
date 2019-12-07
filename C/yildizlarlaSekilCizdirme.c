#include <stdio.h>
#include <stdlib.h>

int oku(){
    /*  klavyeden sayi okur
    parametre almaz
    int deger dondurur  */

    int x;

    do{
        printf("Lutfen, tek bir sayi giriniz: ");
        scanf("%d",&x);
        printf("\n");

        if(!(x%2))
            printf("Hatali deger girdiniz!\n\n");

    }while(!(x%2));

    return x;
}

void kumSaati(int);
    /*  yildiz (*) kullanarak kum saati seklini cizdirir
    int parametre alir
    deger dondurmez     */

void baklavaDilimi(int);
    /*  yildiz (*) kullanarak baklava dilimi seklini cizdirir
    int parametre alir
    deger dondurmez     */

void altiKoseliYildiz(int);
    /*  yildiz (*) kullanarak 6 koseli yildiz seklini cizdirir
    int parametre alir
    deger dondurmez     */

void carpi(int);
    /*  yildiz (*) kullanarak carpi seklini cizdirir
    int parametre alir
    deger dondurmez     */

int main()
{
    int secim;

    printf("Kum Saati : 1\nBaklava Dilimi : 2\n6 Koseli Yildiz : 3\nCarpi : 4\nCikis : 0\n\n");
    printf("Lutfen, bir secim yapiniz: ");
    scanf("%d",&secim);

    switch(secim)
    {
        case 0:
            break;

        case 1:
            kumSaati(oku());
            break;

        case 2:
            baklavaDilimi(oku());
            break;

        case 3:
            altiKoseliYildiz(oku());
            break;

        case 4:
            carpi(oku());
            break;

        default:
            printf("Hatali giris yaptiniz!\n");
            break;
    }

    return 0;
}

void kumSaati(int s){

    int i,j;
    int y,b;

    y=s;
    b=0;

    for(i=0;i<s;i++){

        for(j=0;j<y;j++)
            printf("*");

        if(i<s/2){
            y-=2;
            b++;
        }else{
            y+=2;
            b--;
        }

        printf("\n");

        for(j=0;j<b;j++)
            printf(" ");
    }
}

void baklavaDilimi(int s){

    int i,j;
    int y,b;

    y=1;
    b=s/2;

    for(i=0;i<s;i++){

        for(j=0;j<b;j++)
            printf(" ");
        for(j=0;j<y;j++)
            printf("*");

        if(i<s/2){
            y+=2;
            b--;
        }else{
            y-=2;
            b++;
        }

        printf("\n");
    }
}

void altiKoseliYildiz(int s){

    int i,j;
    int s2,y,b;

    y=1;
    b=s*3/2;
    s2=s*2+1;

    for(i=0;i<s2;i++){

        for(j=0;j<b;j++)
            printf(" ");
        for(j=0;j<y;j++)
            printf("*");

        if(i<s/2){
            y+=2;
            b--;
        }else if(i==s/2){
            y=y*3;
            b=0;
        }else if(i<s){
            y-=2;
            b++;
        }else if(i<s*3/2){
            y+=2;
            b--;
        }else if(i==s*3/2){
            y=y/3;
            b=y;
        }else{
            y-=2;
            b++;
        }

        printf("\n");
    }
}

void carpi(int s){

    int i,j;
    int b,b2;

    b=0;
    b2=s-2;

    for(i=0;i<s;i++){

        for(j=0;j<b;j++)
            printf(" ");

        printf("*");

        for(j=0;j<b2;j++)
            printf(" ");

        if(i!=s/2)
            printf("*");

        if(i<s/2){
            b++;
            b2-=2;
        }else{
            b--;
            b2+=2;
        }

        printf("\n");
    }
}
