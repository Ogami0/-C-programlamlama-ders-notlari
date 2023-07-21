#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayim;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayim);

    int i=1;
    while(i<=10)
    {
        printf("%d\n",i*sayim);
        i++;
    }
               //çift sayý için
   /* int i=0;
     while(i<10)
     {
         printf("%d\n",i);
         i+=2;
     }*/

               // tek sayý bulma

/*int i=1;
     while(i<10)
     {
         printf("%d\n",i);
         i+=2;
     }*/


/*int i=0;
     while(i<10)
     {
         printf("%d\n",i+1);
         i+=2;
     }*/


/*int i=10;
     while(i>=1)
     {
         printf("%d\n",i);
         i--;
     }*/







    return 0;
}
