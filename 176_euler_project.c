#include <stdio.h>

/* A Pythagorean triplet is a set of three natural numbers,
a < b < c for which a^2+b^2=c^2. 
there exists exactly one pythagorean triplet for which
a+b+c=1000
find the product abc.
*/

/* 
proving it is not meaningful or it may?
 */

int main()
{   
    int a=1;
    int b=2;
    int c=997;
    while (a < 333)
    {
        while (a < b && b < 499)
        {
            while (b < c && c < 998)
            {
                printf("a = %d, b = %d, c = %d \n", a, b, c);
                // printf("a^2 + b^2 = %d, and c^2 is %d \n", a*a+b*b, c*c);
                if (a*a + b*b != c*c)
                {
                    b++;
                    c--;
                } 
                else
                {
                    goto pythagorean;
                }
            }
            a++;
            b=a+1;
            c=1000-a-b;
        }
    }

    pythagorean:
        printf("%d\n", a*b*c);
    

    return 0;
}