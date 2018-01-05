/*
    Solution to the "Between Two Sets" challenge by zemen on HackerRank.
    https://www.hackerrank.com/challenges/between-two-sets/problem
*/

#include <stdio.h>
#include <stdlib.h>


int 
get_total_x(int *, int *, int, int);

int
lcm(int *, int);

int
gcd(int, int);

int
find_gcd(int *, int);


int
main()
{
    int n, m, i, result;
    n = m = i = result = 0;
    scanf("%d %d", &n, &m);

    int * a = malloc(n * sizeof(int));
    int * b = malloc(m * sizeof(int));
    for(i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    for(i = 0; i < m; ++i)
        scanf("%d", &b[i]);

    result = get_total_x(a, b, n, m);
    printf("%d\n", result);
    return 0;
}


int
get_total_x(int * a, int * b, int a_size, int b_size)
{
    int lcm_a, gcd_b, count, i;
    lcm_a = gcd_b = count = i = 0;

    // Find lcm of a
    lcm_a = lcm(a, a_size);

    // Find gcd of b
    gcd_b = find_gcd(b, b_size);

    // Count num. multiples of lcm of a that evenly divide gcd of b
    for(i = 1; (i * lcm_a) <= gcd_b; ++i) {
        if((gcd_b % (i * lcm_a)) == 0)
            ++count;
    }
    return count;
}


int
find_gcd(int * arr, int size)
{
    int arr_gcd = 0;
    int i = 0;
    if(size < 2) {
        arr_gcd = arr[0]; 
    } else {
        arr_gcd = gcd(arr[0], arr[1]);
        for(i = 2; i < size; ++i)
            arr_gcd = gcd(arr_gcd, arr[i]);
    }
    return arr_gcd;
}


int
gcd(int x, int y)
{
    if(x)
        return gcd(y % x, x);
    return y;
}


int
lcm(int * arr, int size)
{
    int ans = arr[0];
    int i = 0;

    for(i = 0; i < size; ++i)
        ans = (ans * arr[i]) / gcd(arr[i], ans);

    return ans;
}
