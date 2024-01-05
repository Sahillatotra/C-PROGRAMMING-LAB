#include <stdio.h>
void main()
{
 int n;
 printf("enetr th limits");
 scanf("%d",&n);
 printf("eneter the array elements");
 for (int i=0;i<n;i++)
 scanf("%d",&a[i]);
printf("sorter array");
for(i=0;i<n-1;i++)
{
    int k=0;
    for( int j=k+1;j<n-i;j++)
    {
    if (a[k]>a[j])
    {
    int t=a[k];
    a[k]=a[j];
    a[i]=t;
    }
    k++;
}
}
}