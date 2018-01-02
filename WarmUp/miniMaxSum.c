/*
    Solution to the "Mini-Max Sum" challenge by bishop15 on HackerRank.
    https://www.hackerrank.com/challenges/mini-max-sum/problem
*/

#include <stdio.h>
#include <stdlib.h>

const int SIZE = 5;


// Find min and max sums for 4 out of 5 positive integers
void
mini_max_sum(long * arr)
{
    // accumulator, min, and max
    long temp_sum, mn, mx;
    temp_sum = mn = mx = 0;

    int i = 0;
    int j = 0;

    for(i = 0; i < SIZE; ++i) {
        for(j = 0; j < SIZE; ++j) {
            // skip current value of i (only summing 4 of 5
            // positive ints)
            if(j == i) continue;
            temp_sum += arr[j];
        }

        // If temp_sum is less than mn or this 
        // is the first time through the iteration
        if(temp_sum < mn || i == 0)
            mn = temp_sum;

        // If temp_sum is greater than mx or this
        // is the first time through the iteration
        if(temp_sum > mx || i == 0)
            mx = temp_sum;

        // reset temp_sum
        temp_sum = 0;
    }
    printf("%ld %ld\n", mn, mx);
}


int
main()
{
    long * arr = malloc(SIZE * sizeof(long));
    int i = 0;

    // Read in the array
    for(i = 0; i < SIZE; ++i)
        scanf("%ld", &(arr[i]));
    
    // Make the magic happen
    mini_max_sum(arr);
    return 0;
}
