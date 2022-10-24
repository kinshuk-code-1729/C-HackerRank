// Given a five digit integer, print the sum of its digits.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {	
    int n,rem=0,sum=0;
    scanf("%d", &n);
    if(n >= 10000 && n <= 99999){
        while(n > 0){
            rem = n%10;
            sum = sum + rem;
            n = n/10;
        }
        printf("%d",sum);
    }
    else{
        printf("not a 5 digit number");
    }
    return 0;
}