#include <stdio.h>
#define MOD 1000000007

int main() {
    int n;
    scanf("%d", &n);
    long long pascal[105][105];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = (pascal[i - 1][j - 1] + pascal[i - 1][j]) % MOD;
            printf("%lld ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
