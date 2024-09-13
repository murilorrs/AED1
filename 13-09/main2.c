#include <stdio.h>


int fibonacci(int);

int main() {

    int n = 20;
    printf("%d",fibonacci(n));

    return 0;
}

int fibonacci(int n){

    if(n == 1 || n == 2)
        return 1;


    return fibonacci(n - 1) + fibonacci(n - 2);
}