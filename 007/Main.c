#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <math.h>

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that
the 6th prime is 13.

What is the 10,001st prime number?
*/

int is_prime(int n){
    if (n == 1 || n == 0){
        return 0;
    }

    for(int i = 2; i<= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){

    uintmax_t n = UINT_MAX;
    int count = 0;
    int num_of_primes = 10001;

    for(int i = 1; i <= n; i++){
        if(is_prime(i) == 1){
            count += 1;
        }
        if(count == num_of_primes){
            printf("%d", i);
            return 0;
        }
    }

    return 0; // placeholder

}
