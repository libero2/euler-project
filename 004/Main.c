#include <stdio.h>

/*
A palindromic number reads the same both ways. The largest palindrome made from the product
of two 2-digit numbers is 9009 = 91 * 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

int is_palindrome(int n){

    int remainder, original, reversed;
    reversed = 0;
    original = n;

    while(n != 0){
        remainder = n % 10;
        reversed = (reversed * 10) + remainder;
        n /= 10;
    }

    if(original == reversed){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a = 999;

    for(int i = 0; i < a; i++){
        for(int s = 0; s < a; s++){
            int product = i * s;
            if(is_palindrome(product) == 1){
                printf("Current largest palindrome: %d \n", product);
            }
        }
    }
    return 0; // placeholder
}
