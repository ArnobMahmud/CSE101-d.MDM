/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

/*
    Theory :

    Multiplication of 2 matrix only possible -
    if & only if -

    Column of 1st matrix == Row of 2nd matrix

    => a(p * q) x b(q * r) = c (p * r)
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[2][2] = {{1, 2}, {1, 2}}, B[2][2] = {{2, 1}, {2, 1}}, C[2][2], sum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum += A[i][k] * B[k][j]; // C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0]
            }
            C[i][j] = sum;
            sum = 0;
        }
    }

    printf("[C] = [A] * [B] : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
