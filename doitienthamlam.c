#include <stdio.h>

long long solve_min_bills(long long N) {
    const int denominations[] = {
        1000, 500, 200, 100, 50, 20, 10, 5, 2, 1
    };
    long long count = 0;
    int i;

    for (i = 0; i < 10; i++) {
        long long value = denominations[i];
        if (N == 0) break; 
        if (N >= value) {
            count += N / value;
            N %= value; 
        }
    }
    return count;
}

int main() {
    long long N;
    if (scanf("%lld", &N) != 1 || N <= 0) {
        printf("0\n");
        return 0;
    }
    printf("%lld\n", solve_min_bills(N));

    return 0;
}