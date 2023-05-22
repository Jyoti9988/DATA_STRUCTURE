#include<stdio.h>
void bubbleSort(int *a,int n)
{
    int j,k,temp;
    for (k=1;k<n;k++)
    {
        for(j=0;j<n-k;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main(){
    int j, n;
    int a[]={ 94,25,11,2,4,55};
    bubbleSort(a,6);
     printf("Sorted Array is=");
     for(int j=0;j<6;j++)
    {
       
        printf(" %d",a[j]);
    }
    
}
