#include <stdio.h>
#include <math.h>

int main() {
    long long N;
    scanf("%lld", &N);

    long long count = 0;
    long long i;

    for (i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            count++; // ước là i
            if (i != N / i) count++; // ước còn lại N/i
        }
    }

    printf("%lld", count);
    return 0;
}