#include <stdio.h>

int main() {
    int limit, i, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Fibonacci Series: ");

    for (i = 1; i <= limit; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

