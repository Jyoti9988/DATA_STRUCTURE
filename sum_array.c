#include<stdio.h>
int main()
{
int A[10],i,sum=0,n;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the element of array");
for(i=0;i<=n;i++)
{
    scanf("%d",&A[i]);

}
for(i=0;i<=n;i++)
{
    sum += A[i];
}
printf("%d",sum);

}
