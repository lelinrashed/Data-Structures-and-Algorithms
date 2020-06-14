#include<stdio.h>

int main() {
    int n, result;

    scanf("%d", &n);

    result = n * (n + 1) / 2;

    printf("Result = %d\n", result);

    return 0;
}

// Time complexity of this program is o(1)