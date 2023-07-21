#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&day);

    switch(day)
    {
       case 1:printf("pazertesi");
       break;
       case 2:printf("sali");
       break;
       case 3:printf("carsanba");
       break;
       case 4:printf("persenbe");
       break;
       case 5:printf("cuma");
       break;
       case 6:printf("cumartesi");
       break;
       case 7:printf("pazar");
       break;
       default :printf("gecersiz gun");
       break;
    }















    return 0;
}
