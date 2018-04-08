/*
Breaking the Records

Given Maria's array of for a season of games, find and print the number of times
she breaks her records for most and least points scored during the season.
*/

using System;
using System.IO;

class Solution
{
    static void Main(string[] args)
    {
        int n;
        int [] scores;
        int [] ans = new int [2];
        ReadData(out n, out scores);
        Solve(scores, ans);
        // Print result
        Console.WriteLine("{0}", string.Join(" ", ans));
    }

    static void ReadData(out int n, out int [] scores)
    {
        n = Convert.ToInt32(Console.ReadLine());
        scores = Array.ConvertAll(Console.ReadLine().Split(' '), n_score => Convert.ToInt32(n_score));
    }

    static void Solve(int [] scores, int [] ans)
    {
        int min, max, min_change, max_change;
        min_change = max_change = 0;
        min = max = scores[0];
        foreach (int item in scores)
        {
            if (item < min) {
                min = item;
                min_change += 1;
            } else if (item > max) {
                max = item;
                max_change += 1;
            }
        }

        ans[0] = max_change;
        ans[1] = min_change;
    }
}