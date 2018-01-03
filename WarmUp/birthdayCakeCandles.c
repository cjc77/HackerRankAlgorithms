/*
    Solution to the "Birthday Cake Candles" challenge by shashank21j on HackerRank.
    https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/

#include <stdlib.h>
#include <stdio.h>


int
blowout(int);


int
main()
{
    // max is 0 because heights must be >= 1
    int max, i, n;
    max = i = n = 0;

    scanf("%d", &n);
    int ans = blowout(n);
    printf("%d\n", ans);
    return 0;
}


// count how many candles match the max height
int
blowout(int n)
{
    int i, count, max, inp;
    i = count = max = inp = 0;

    for(i = 0; i < n; ++i) {
        scanf("%d", &inp);
        
        if(inp > max) {
            max = inp;
            count = 1;
        } else if(inp == max) {
            ++count;
        }
    }
    return count;
}

