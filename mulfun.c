#include <stdio.h>
void inputmatrix(int A[][10], int B[][10], int arow, int acol, int brow, int bcol);
void multiplymatrix(int A[][10], int B[][10], int C[][10], int arow, int acol, int brow, int bcol);
void outputmatrix(int C[][10], int arow, int acol, int brow, int bcol);
int main()
{ 
    int A[10][10], B[10][10], C[10][10], arow, acol, brow, bcol, i, j, k;
    printf("enter row and coloumn for matrix A");
    scanf("%d%d", &arow, &acol);
    printf("enter row and coloumn for matrix B");
    scanf("%d%d", &brow, &bcol);
    if (acol != brow)
    {
        printf("invalid matrix");
    }
    else
    {
        inputmatrix(A, B, arow, acol, brow, bcol);
        multiplymatrix(A, B, C, arow, acol, brow, bcol);
        outputmatrix(C, arow, acol, brow, bcol);
    }
    return 0;
}
void inputmatrix(int A[][10], int B[][10], int arow, int acol, int brow, int bcol)
{
    int i, j;
    printf("enter element of matrix A");
    for (i = 0; i < arow; i++)
    {
        for (j = 0; j < acol; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter element of matrix B");
    for (i = 0; i < brow; i++)
    {
        for (j = 0; j < bcol; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
}
void multiplymatrix(int A[][10], int B[][10], int C[][10], int arow, int acol, int brow, int bcol)
{
    int i, j, k, sum;
    // for (i = 0; i < arow; i++)
    // {
    //     for (j = 0; j < bcol; j++)
    //     {
    //         sum = 0;
    //     }
   // }
    for (i = 0; i < arow; i++)
    {
        for (j = 0; j < bcol; j++)
        {
            for (k = 0; k < bcol; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            C[i][j] = sum;
            sum = 0;
        }
    }
}
void outputmatrix(int C[][10], int arow, int acol, int brow, int bcol)
{
    int i, j;
    printf("multipliaction of matrix\n");
    for (i = 0; i < arow; i++)
    {
        for (j = 0; j < bcol; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}