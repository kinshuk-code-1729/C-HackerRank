// Function Description
// Complete the calculate_the_maximum function in the editor below.
/* calculate_the_maximum has the following parameters:
   * int n: the highest number to consider
   * int k: the result of a comparison must be lower than this number to be considered */
// Print the maximum values for the and, or and xor comparisons, each on a separate line.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int and = 0,or = 0,xor = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if((i & j) > and && (i & j) < k){
                and = i & j;
            }
            if((i | j) > or && (i | j) < k){
                or = i | j;
            }
            if((i ^ j) > xor && (i ^ j) < k){
                xor = i ^ j;
            }
        }
    }
    printf("%d\n%d\n%d",and,or,xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}