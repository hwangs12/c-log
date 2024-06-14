/**
 * 2520 is the smallest number that can be divided by
 * each of the numbers from 1 to 10 without any remainder
 * what is the smallest positive number that is
 * even divisible by all of the numbers from 1 to 20?
*/

/**
 * Given numbers 1 to 10, we can iterate like this:
 * 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
 * 1, 1, 3, 2, 5, 3, 7, 4, 9, 5 -> taken off 2 from here
 * 1, 1, 3, 1, 5, 3, 7, 2, 9, 5 -> taken off 2 from here
 * 1, 1, 3, 1, 5, 3, 7, 1, 9, 5 -> taken off 2 from here
 * 1, 1, 1, 1, 5, 1, 7, 1, 3, 5 -> taken off 3 from here
 * 1, 1, 1, 1, 5, 1, 7, 1, 1, 5 -> taken off 3 from here
 * 1, 1, 1, 1, 1, 1, 7, 1, 1, 1 -> taken off 5 from here
 * 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 -> taken off 7 from here
 * 
 * so the idea is you take each prime factor until you do 
 * not see them in the list and keep multiplying
 * those factors until all the members become 1.
*/

/**
 * here's the pattern. starting from 2
 * 2 can divide anything index 2i+1
 * once it is done, the next thing it can do is
 * it can divide at index that's increment of 4
 * the next it can divide is 8th.
*/

int main()
{

}