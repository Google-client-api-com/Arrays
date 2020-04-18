//WRITE A PROGRAM TO INPUT THE ELEMENTS OF ARRAY//
#include<stdio.h>
int main()
{
    int n,a[n],i;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are: %d",a[n]);
}
