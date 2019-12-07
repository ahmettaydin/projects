#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    int d;
    double x,x1,x2;

    printf("ax^2 + bx + c = 0 seklindeki herhangi bir tek bilinmeyenli denklem icin istenen a, b ve c tamsayi degerlerini giriniz.\n\n");

    printf("a tamsayi degerini giriniz: ");
    scanf("%d",&a);

    printf("b tamsayi degerini giriniz: ");
    scanf("%d",&b);

    printf("c tamsayi degerini giriniz: ");
    scanf("%d",&c);

    printf("\n");

    d=pow(b,2)-4*a*c;
    printf("diskriminant: %d\n",d);

    if(d>0){

        printf("denklemin reel sayilarda 2 farkli koku vardir!\n");

        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        printf("x1 = %f\nx2 = %f\n",x1,x2);
    }

    else if(d==0){

        printf("denklemin reel sayilarda tek koku vardir!\n");

        x = (-b+sqrt(d))/(2*a);
        printf("x = %f\n",x);
    }

    else
        printf("denklemin reel sayilarda koku yoktur!\n");

    return 0;
}
