#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a[100];
    int i,n,j,max;

    printf("please enter the number of array characters\n");
    scanf("%d",&n);
    printf("please enter the array characters\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for ( i = j; i <n; i++)
        {
            if(a[j]>a[i])
            {
                continue;
            }
            if(a[j]<a[i])
            {
                max=a[i];
                a[i]=a[j];  
                a[j]=max;
            }
        }
     
    }
   printf("the array after sorting is\n");
   for ( i = 0; i <n; i++)
   {
       printf("%d",a[i]);
       printf("\n");
   }
   
}