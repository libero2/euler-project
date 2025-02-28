#include <limits.h>
#include <stdio.h>
/*
2520 is the smallest number that can be divided by
each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by
all of the numbers from 1 to 20?
*/

int can_be_divided(int n){

    for(int i = 1; i < n; i++){ // loop from 1 to n

        int count = 0; // counts how many num between 1 and 20 divide evenly

        for(int s = 1; s <= 20; s++){ // loop from 1 to 20

            if(i % s == 0){ // if divides evenly, increment count
                count += 1;
            }
            else{
                break;
            }

        }

        if(count == 20){ // if all 20 numbers divide i, return i
            return i;
        }

    }
    return 0; // nothing divisible between 1 and n
}
int main(){
    int n = INT_MAX;
    int smallest_divisible_num = can_be_divided(n);

    printf("The smallest number is: %d \n", smallest_divisible_num);

    return 0;
}
