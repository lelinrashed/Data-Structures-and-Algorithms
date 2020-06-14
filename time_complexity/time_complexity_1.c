#include<stdio.h>

int main() {

    int n1, n2, result;

    n1 = 10; // assignment operation o(1)
    n2 = 20; // assignment operation o(1)
    result = n1 + n2; // assignment operation o(1) and addition operation o(1)

    printf("Result: %d\n", result);

    return 0;
}


// This program time complexity o(1)