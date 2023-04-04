#include <stdio.h>
int main()
{
    int A[10], i, max;
    printf("enter 10 numbers");
    for (i = 0; i <= 9; i++)

        scanf("%d", &A[i]);

    max = A[0];
    for (i = 1; i <= 9; i++)

        if (max < A[i])

            max = A[i];

    printf("Greatest number in array=%d", max);

    return 0;
}