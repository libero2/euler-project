#include <stdio.h>
/*
    The prime factors of 13195 are 5, 7, 13, and 29.
    What is the largest prime factor of the number 600851475143?
*/

int main(){

    u_int64_t num, i, count;

    u_int64_t n = 600851475143;

    for(num = 1; num <= n; num++){

        count = 0;

        for(i = 2; i <= (num / 2); i++){
            if(num % i == 0){
                count++;
                break;
            }
        }

        if(count == 0 && num != 1 && n % num == 0){
           printf("%llu \n", num);
        }
    }
    return 0; // placeholder
}
