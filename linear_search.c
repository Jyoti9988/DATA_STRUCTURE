#include <stdio.h>
void seq_search(int L[], int N, int ITEAM)
{
    int flag = 1, k;
    for (k = 0; k <= N - 1; k++)
    {
        if (L[k] == ITEAM)
        {
            flag = 0;
            printf("search successfull");
        }
    }
    if (flag == 1)
    {
        printf("search unsuccesful");
    }
}
int main()
{
    int A[100], i, ITEAM, N;
    printf("enter the size of an array");
    scanf("%d", &N);
    printf("enter the element");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("enter the number you want to search");
    scanf("%d", &ITEAM);
    seq_search(A, N, ITEAM);
}