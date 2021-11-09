#include"stdio.h"
#include"stdlib.h"
 int n,i;
 int a[];
void sort (int a[n]);

int main()
{
    int n,i;
    int a[n];
    printf("enter the number of values u want in the array\n");
    scanf("%d",&n);
    printf("enter the values of the array\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the values of the array are\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    printf("after sorting\n");
    
    void sort(int a[n]);

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    

    return 0;
}
void sort(int a[n])
{
    int temp;
    int j;
for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
}
