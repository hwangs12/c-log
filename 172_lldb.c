/**
 * LLDB
 * IT IS A C DEBUGGER FOR MAC
 * 
 * WHAT IS DEBUGGER?
 * IT IS A UTILITY PROGRAM THAT ALLOWS YOU TO RUN A PROGRAM
 * UNDER DEVELOPMENT WHILE CONTROLLING ITS EXECUTION
 * AND EXAMINING THE INTERNAL VALUES OF VARIABLES
 */

/**
 * EXAMPLE
 * below will generate segmentation fault error.
 * we can find it from debugger
 * 
 * let's use debugger:
 * 1. compile the program with -g flag
 * 2. run `lldb a.out`
 * 3. once in lldb, use `run` command to start program.
 * 4. Not applicable to below, but if you 
 * have input you can input those arguments with
 * `run <arguments> <executable>
 * 5. use `step`, `next`, `continue`, `finish`
 *  - step is for step into the function and get more detail
 *  - next is to go to next function call
 *  - continue is to go to next breakpoint
 *  - finish execute the current fn and then pauses.
 */

#include <stdio.h>

void my_subroutine()
{
    printf("Hello world");
}

int main()
{
    int x = 2;
    int *p = NULL;  
    x = 3;
    my_subroutine();
    x = 4;
    *p = 3;
    return 0;
}