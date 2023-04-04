#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], sum[10][10];
    int i, j;
    printf("enter the element of matrix A");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter the element of matrix B");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("Addition=\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
