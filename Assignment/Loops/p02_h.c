/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, sum = 0, num,
           a = 1, d = 4;

    printf("Enter N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        num = (a + (i - 1) * d);
        sum += num;
        // printf("%d ", num); 
    }

    printf("Sum is : %d\n", sum);

    return 0;
}
