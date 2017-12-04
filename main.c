#include <stdio.h>
#include <stdlib.h>

int buyukToplamiBul(int dizi[],int boyut)
{
    int i,cifttoplam=0,tektoplam=0;

///----------------------------------
    for(i=0;i<boyut;i++)
    {
        if(dizi[i]%2==0)
        {
             cifttoplam+=dizi[i];
        }
        if(dizi[i]%2!=0)
        {
           tektoplam+=dizi[i];
        }
    }
///------------------------------------
printf("Cift sayilar");
    for(i=0;i<boyut;i++)
        {
            if(dizi[i]%2==0)
                printf(" %d ",dizi[i]);
        }
printf("\nCift sayilar toplami:%d",cifttoplam);
printf("\nTek sayilar");
     for(i=0;i<boyut;i++)
     {
         if(dizi[i]%2!=0)
            printf(" %d ",dizi[i]);
     }
printf("\nTek sayilar toplami:%d\n",tektoplam);

///------------------------------------
 if(tektoplam>cifttoplam)
        {
          return 1;
        }
        else
            return 0;
}

int main()
{
    int i,n,donut=3;///Dönüt kısmına 0 ve 1 den farklı herhangi bir sayı yazdım.
    int cifttoplam=0;
    int tektoplam=0;

    printf("Dizi boyutu giriniz:\n");
    scanf("%d", &n);

    int dizi[n];

    printf("Elemanlari giriniz:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&dizi[i]);
    }

    donut=buyukToplamiBul(dizi,n);

    if(donut==1)
        printf("Tek sayilarin toplami daha buyuktur.");
    else
        printf("Cift sayilarin toplami daha buyuktur");
    return 0;
}
