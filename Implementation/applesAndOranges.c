/*
    Solution to the "Apples and Oranges" challenge by nabila_ahmed on HackerRank.
    https://www.hackerrank.com/challenges/apple-and-orange/problem
*/

#include <stdlib.h>
#include <stdio.h>

const int SIZE = 6;

enum vars { s, t, a, b, m, n };


void
fall(int *, int *, int *);


int
main()
{
    int * values = malloc(SIZE * sizeof(int));
    int * a_falls = NULL;
    int * o_falls = NULL;
    int i = 0;
    for(i = 0; i < SIZE; ++i) {
        scanf("%d", &values[i]);
    }
    a_falls = malloc(values[m] * sizeof(int));
    o_falls = malloc(values[n] * sizeof(int));

    // Read in apples and oranges
    for(i = 0; i < values[m]; ++i)
        scanf("%d", &a_falls[i]);
    for(i = 0; i < values[n]; ++i)
        scanf("%d", &o_falls[i]);
    fall(values, a_falls, o_falls);
    return 0;
}


void
fall(int * vals, int * apples, int * oranges)
{
    int a_count = 0;
    int o_count = 0;
    int i = 0;
    for(i = 0; i < vals[m]; ++i) {
        if( ((vals[a] + apples[i]) >= vals[s]) &&
            ((vals[a] + apples[i]) <= vals[t])) {
            ++a_count;
        }
    }
    for(i = 0; i < vals[n]; ++i) {
        if( ((vals[b] + oranges[i]) >= vals[s]) &&
            ((vals[b] + oranges[i]) <= vals[t])) {
            ++o_count;
        }
    }
    printf("%d\n%d\n", a_count, o_count);
}
