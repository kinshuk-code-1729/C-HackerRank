// Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

/* Declare 4 variables: two of type int and two of type float.
1. Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
2. Use the + and - operator to perform the following operations:
   * Print the sum and difference of two int variable on a new line.
   * Print the sum and difference of two float variable rounded to one decimal place on a new line.
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y;
    float p,q;
    scanf("%d %d",&x,&y);
    scanf("\n");
    scanf("%f %f",&p,&q);
    printf("%d %d",x+y,x-y);
    printf("\n%3.1f %3.1f",p+q,p-q);
    return 0;
}