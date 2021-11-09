#include "stdio.h"

int main()
{
    int i,sum,arr[10];
    float av;
    printf("enter the array charcters\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<10;i++){
        sum=sum+arr[i];
    }
    printf("the sum of the array is %d \n",sum);
    av=sum/10;
    printf("the average of the array is %0.2f",av);
    return 0;


}