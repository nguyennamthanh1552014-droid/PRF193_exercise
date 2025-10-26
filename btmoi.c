#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 2; i <= n && n > 1; i++) {
        if (isPrime(i) && n % i == 0) {
            count++;
            n /= i;
            if (n % i == 0) { 
                printf("0");
                return 0;
            }
        }
    }

    if (count == 3)
        printf("1");
    else
        printf("0");

    return 0;
}
