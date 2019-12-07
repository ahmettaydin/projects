#include <stdio.h>
#include <stdlib.h>

int oku(){
    /*  klavyeden sayi okur
    parametre almaz
    int deger dondurur      */

    int x;

    printf("Lutfen, bir sayi giriniz: ");
    scanf("%d",&x);

    return x;
}

void tauSayisi(int);
    /*  girilen sayi tau sayisi mi kontrolu yapar
    int parametre alir
    deger dondurmez     */

void mukemmelSayi(int);
    /*  girilen sayi mukemmel sayi mi kontrolu yapar
    int parametre alir
    deger dondurmez     */

void palindromSayi(int);
    /*  girilen sayi palindrom sayi mi kontrolu yapar
    int parametre alir
    deger dondurmez     */

void armstrongSayi(int);
    /*  girilen sayi armstrong sayi mi kontrolu yapar
    int parametre alir
    deger dondurmez     */

int main()
{
    int secim;

    printf("Tau Sayisi : 1\nMukemmel Sayi : 2\nPalindrom Sayi : 3\nArmstrong Sayi : 4\nCikis : 0\n\n");
    printf("Lutfen, seciminizi yapiniz: ");
    scanf("%d",&secim);
    printf("\n");

    switch(secim)
    {
        case 0:
            break;

        case 1:
            tauSayisi(oku());
            break;

        case 2:
            mukemmelSayi(oku());
            break;

        case 3:
            palindromSayi(oku());
            break;

        case 4:
            armstrongSayi(oku());
            break;

        default:
            printf("Hatali giris yaptiniz!\n");
            break;
    }

    return 0;
}

void tauSayisi(int s){

    int sayac=0;

    for(int i=1;i<=s;i++){

        if(s%i==0)
            sayac++;
    }

    if(s%sayac==0)
        printf("%d bir Tau SAYISIDIR\n",s);
    else
        printf("%d bir Tau Sayisi DEGILDIR\n",s);
}

void mukemmelSayi(int s){

    int sayac=0;

    for(int i=1;i<s;i++){

        if(s%i==0)
            sayac+=i;
    }

    if(sayac==s)
        printf("%d bir Mukemmel SAYIDIR\n",s);
    else
        printf("%d bir Mukemmel Sayi DEGILDIR\n",s);
}

void palindromSayi(int s){

    int t,temp;

    t=0;
    temp=s;

    while(temp!=0)
    {
        t=t*10;
        t=t+temp%10;
        temp=temp/10;
    }

    if(s==t)
        printf("%d bir Palindrom SAYIDIR\n",s);
    else
        printf("%d bir Palindrom Sayi DEGILDIR\n",s);
}

void armstrongSayi(int s){

    int n,r,sonuc;

    sonuc=0;
    n=s;

    while(n>0){

        r=n%10;
        sonuc+=r*r*r;
        n/=10;
    }

    if(s==sonuc)
        printf("%d bir ArmStrong SAYIDIR\n",s);
    else
        printf("%d bir ArmStrong Sayi DEGILDIR\n",s);
}
