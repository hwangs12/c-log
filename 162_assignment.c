/**
 * Dynamically allocate the array size of your char variable 
 * based on the length of the user's input.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int dynamic = 10;
    char * charPtr = (char*) malloc(dynamic);
    char * charPtr2 = (char*) malloc(dynamic + 10);
    fgets(charPtr, dynamic, stdin);
    fgets(charPtr2, dynamic + 10, stdin);
    while (strcmp(charPtr,charPtr2))
    {
        dynamic += 10;
        charPtr = (char*) malloc(dynamic);
        charPtr2 = (char*) malloc(dynamic + 10);
        fgets(charPtr, dynamic, stdin);
        fgets(charPtr2, dynamic + 10, stdin);
    }

    printf("%s", charPtr);
    
    return 0;
}


/* 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //initialize vars
  char *first;
  char *last;

  //prompt user to input first and last name and use scanf() to store those to the initiliazed vars
  printf("Enter your first name: ");
  scanf("%ms", &first);
  printf("Enter your last name: ");
  scanf("%ms", &last);

  //print the welcome message!
  printf("Hello %s %s!\n", first, last);

  free(first);
  free(last);
}

 */