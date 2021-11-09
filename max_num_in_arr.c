#include "stdio.h"
int main(){
    int n;
    int i,max=0,a[n];
    
 
    printf("enter the number of vals in the array\n");
    scanf("%d",&n);
    printf("the character u want to enter in the arrays\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("the max value is %d\n",max);
    return 0;
}