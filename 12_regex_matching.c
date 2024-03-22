/**
 * Regular Expression Matching
 *
 * Given an input string s and a pattern p, implement
 * regular expression matching with support for '.'
 * and '*' where:
 *
 * '.' Matches ANY single character.
 * '*' Matches zero or more of the PRECEDING element.
 *
 * The matching should cover the entire input string
 * (not partial)
 *
 * Ex1) s = "aa", p = "a" -> false
 * Ex2) s = "aa", p = "a*" -> true
 * Ex3) s = "ab", p = ".*" -> true
 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isMatch(char *s, char *p);

int main()
{
    printf("234");
    return 0;
}

bool isMatch(char *s, char *p)
{
    int rows = strlen(s);
    int columns = strlen(p);

    // Base conditions
    if (rows == 0 && columns == 0)
    {
        return true;
    }
    if (columns == 0)
    { //??
        return false;
    }

    // DP array
    int dp[rows + 1][columns + 1];

    // Empty string and empty pattern are a match
    dp[0][0] = true;

    // Deals with patterns with *
    for (int i = 2; i <= columns; i++)
    {
        if (p[i - 1] == '*')
        {
            dp[0][i] = dp[0][i - 2];
        }
    }

    // For remaining characters
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (s[i - 1] == p[j - 1] || p[j - 1] == '.')
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else if (j > 1 && p[j - 1] == '*')
            {
                dp[i][j] = dp[i][j - 2];
                if (p[j - 2] == '.' || p[j - 2] == s[i - 1])
                {
                    dp[i][j] = dp[i][j] || dp[i - 1][j];
                }
            }
        }
    }
    return dp[rows][columns];
}

int main()
{
    cout << boolalpha << isMatch("aab", "a.*") << endl;
    return 0;
}
