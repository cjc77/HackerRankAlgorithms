/*
    Solution to the "Grading Students" challenge by nabila_ahmed on HackerRank.
    https://www.hackerrank.com/challenges/grading/problem
*/

#include <stdio.h>
#include <stdlib.h>

const int MIN = 38;
const int MAX_DIFF = 3;
const int MULT = 5;


void
grade(int);


int
main()
{
    int n = 0;
    scanf("%d", &n);
    grade(n);
    return 0;
}


void
grade(int n)
{
    int i, grade, mult;
    i = grade = mult = 0;

    for(i = 0; i < n; ++i) {
        scanf("%d", &grade);    
        // No rounding
        if(grade < MIN) {
            printf("%d\n", grade);
        } else {
            mult = grade;
            // Find next multiple to round to
            while((mult % MULT))
                ++mult; 
            // if can round, print rounded - else print unrounded
            (abs(grade - mult) < 3) ? printf("%d\n", mult) : printf("%d\n", grade);
        }
        mult = 0;
    }
}
