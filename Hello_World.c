// This challenge requires you to print  on a single line, and then print the already provided input string to stdout.
// If you are not familiar with C, you may want to read about the printf() command.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100];
    gets(s);
    printf("Hello, World!\n");
    puts(s);
    return 0;
}