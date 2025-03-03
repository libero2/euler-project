#include <stdio.h>

/*
The sum of the squares of the first ten natural numbers is:
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is:
(1 + 2 + ... + 10)^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers
and the square of the sum is 3025 - 385 = 2640

Find the difference between the sum of the squares of the first one hundred natural numbers
and the square of the sum.
*/

u_int32_t sum_of_squares(int n){

    u_int32_t to_return = 0;

    for(int i = 1; i <= n; i++){
        to_return += (i * i); // for each natural number <= n, square it and add to sum
    }

    return to_return;
}

u_int32_t square_of_sum(int n){

    u_int32_t to_return = 0;

    for(int s = 1; s <= n; s++){
        to_return += s; // for each natural number <= n, add it to the sum.
    }

    to_return = to_return * to_return; // then, square the sum.

    return to_return;
}

int main(){

    int n = 100; // number of natural numbers we want to take the difference of

    u_int32_t sum_sq = sum_of_squares(n);
    u_int32_t sq_sum = square_of_sum(n);

    u_int32_t result = sq_sum - sum_sq; // the difference is the sq of sum and the sum of sq

    printf("The difference is: %d", result);

    return 0; // placeholder

}
