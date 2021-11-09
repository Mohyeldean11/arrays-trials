#include <stdlib.h>
#include "stdio.h"

int main()
{   
    int n;
    int a[n],i,j,x;

    printf("please enter the number of characters in the array\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("please enter the c of the array= ",n);
        scanf("%d",&a[i]);
        printf("\n");
    }
    i=0;
    j=1;
    while (i<n)
    {
        if(a[i]==a[j])
        {
            for(x=j;x<n-1;x++)
            a[x]=a[x+1];

        }
        else
        {
            i++;
            j++;
        }
    }
    printf("the array after removing the duplicates is\n");
   for ( i = 0; i <n; i++)
   {
       printf("%d",a[i]);
       printf("\n");
   }
}