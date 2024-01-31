#include <stdio.h>

int main()
{
    /**
     * Q: How do characters work?
     * A: You can assign it to a variable or make it a string
     * For example:
     */

    char characterName[] = "John";
    int characterAge = 35;
    printf("There once was a man named %s\n", characterName);
    // printf("He was %s years old.\n", characterAge);

    /**
     * Q: What was wrong in the above code?
     * A: it says format specifies type 'char *' but the argument has type 'int'. It suggested me to use %d instead.
     */

    printf("He was %d years old.\n", characterAge);

    /**
     * Q: What does the compiler say?
     * A: It says - call to undeclared library function 'printf' with type 'int (const char *, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]. It also suggests - include the header <stdio.h> or explicitly provide a declaration for 'printf'.
     */

    /** 
     * Q: Are there more options for those symbols that are replaced such as %s for strings or %d for integers?
     * A: Yes, %f for floating points, %c for a single char. it also has %.02lf
     */

    /**
     * Q: Does printf and %s in it take empty character as string as well? 
     * A: Let's test out for example:
     */

    char longString[] = "Hello Momo, Kiki";
    printf("%s I want to learn hardware\n", longString);

    /**
     * Q: Can I insert a single character in printf?
     * A: Let's find that out!
     */

    char shortShort = 'C';
    printf("I love %caramel!", shortShort);

    /**
     * Q: Can we use %d for double in C?
     * A: No, you should use %f for double in C when using printf or scanf . %d is specifically for integers. Using the wrong format specifier can lead to unexpected results or errors in your program. no %d is decimal integer.
     * A: Another interesting stackoverflow that touches this question: https://stackoverflow.com/questions/7480097/what-happens-to-a-float-variable-when-d-is-used-in-a-printf
     * A: moving to next c file for POC
     */

    return 0;

}
