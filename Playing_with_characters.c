// You have to print the character, ch, in the first line.
// Then print s in next line. In the last line print the sentence, sen .

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[100];
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("%s", s);
    printf("%s\n", s);
    scanf("\n");
    scanf("%[^\n]%*c", s);
    printf("%s", s);
    return 0;
}