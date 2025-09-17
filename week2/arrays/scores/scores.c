#include <cs50.h>
#include <stdio.h>

// const int N = 3;

// float average(int length, int array[]);

// int main(void)
// {
//     int scores[N];
//     for (int i = 0; i < N; i++)
//     {
//         scores[i] = get_int("Score: ");
//     }

//     printf("Average: %f\n", average(N, scores));
// }

// float average(int length, int array[])
// {
//     int sum = 0;
//     for (int i = 0; i < length; i++)
//     {
//         sum += array[i];
//     }
//     return sum / (float)length;
// }

const int N = 3;

float avrage(int length, int array[]);

int main(void)
{
    // int score1 = 72; // binary(1001000) 4byte = 32bit
    // int score2 = 73; // binary(1001001) 4byte = 32bit
    // int score3 = 33; // binary(1000001) 4bytes = 32bit

    int scores[N];
    for (int i = 0; i < N; i++) {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", avrage(N, scores));
}

float avrage(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}