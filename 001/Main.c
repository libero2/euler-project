#include <stdio.h>

/*  If we list all the natural numbers below 10 that are multiples of 3 or 5,
    we get 3, 5, 6, and 9. The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below 1000.*/

int main(){

    long unsigned int sum = 0; // We want a variable to hold the sum of these multiples.

    for(int i = 0; i < 1000; i++){  // Loop through the first 1000 integers.
       if(i % 3 == 0 || i % 5 == 0){ // If remainder of i/3 or i/5 is 0,
           sum += i;            // add to the sum.
        }
    }

    printf("The sum is: %lu", sum);
    return 0; // placeholder
}
