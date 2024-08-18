/**
 * The four adjacent digits in the 100-digit number
 * that have the greatest product are 9*9*8*9, 5832
 * 
 * Find he thirteen adjacent digits in the 1000-digit
 * number that have the greatest product. 
 * 
 * What is the value of this product?
 */

/**
 * it is 1000 digit. Pretty big number to save in
 * long long int variable. 
 */

/**
 * expected input
 * 7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450
 */

#include<stdio.h>
#include<string.h>

int main()
{
    char arr[1001];
    printf("please input number here: ");
    scanf("%s", arr);
    int i = 0;
    int currMaxIndex = 0;
    // 12345
    // 13, 24, 35
    while (i < 988)
    {
        printf("%d -- %d \n", arr[i] - '0', arr[i+12] - '0');
        i++;
    }
    // we want to start small
    // save begin and end of 13 adjacent numbers
    // then compare with the next one
    // we don't know the full product but
    // given, if begin and end is 7, and 3 
    // let's say product for this one is x
    // next adj number has begin and end 3 and 0
    // then product for the adj number is
    // x / 7 * 0 = 0 hence, definitely small
    // 0 is special. we can jump all the way to index
    // that's after 0 since every product will be 0
    // up until that point
    // 

    // then, we compare last saved value, to the new one
    // is it inevitable we need to have product here?
    // ok let's just have product ready and compare
    // so first of all, i would cut off the 'line' until
    // 0 appears, add where index is at 0 by 13. Since 
    // every product up to that point is 0
    // 12345601234123412341234 ex) all the product is 0

    // so we have two things to check: where 0 is and where max is

    // checking 0 works like this: if 0 appears within counter 13, we increase the index by 13 and start anew
    // max value
}