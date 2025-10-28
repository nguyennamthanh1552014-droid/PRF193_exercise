#include <stdio.h>
#include <string.h>

int main() {
    char N[1005];
    scanf("%s", N);

    int len = strlen(N);
    int last = (N[len-2] - '0') * 10 + (N[len-1] - '0');

    if (last % 25 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
