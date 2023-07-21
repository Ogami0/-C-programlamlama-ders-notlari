#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*int i;

   for(i=0;i<=30;i++)
   {
       printf("%d ",i);
   }*/

   int sayi;
   int sayi2 ;
  sayi2 = 100;


   printf("Lutfen bir sayi giriniz\n");
   scanf("%d",&sayi);

   for(sayi; sayi<sayi2;sayi++)
   {
       printf("%d ",sayi);
       scanf("%d %d",&sayi,&sayi2);

   }
   //scanf("%d %d",&sayi,&sayi);
   //printf("sayilarin toplami: %d",sayi+sayi);











    return 0;
}
