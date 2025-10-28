#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LEN 1001

int main() {
    char S[MAX_LEN];
    char upper_s[MAX_LEN];
    char lower_s[MAX_LEN];
    int i;
    int len;

    if (scanf("%s", S) != 1) {
        return 0;
    }

    len = strlen(S);
    
    for (i = 0; i < len; i++) {
        upper_s[i] = (char)toupper(S[i]); 
        lower_s[i] = (char)tolower(S[i]); 
    }
    
    upper_s[len] = '\0';
    lower_s[len] = '\0';

    printf("%s\n", upper_s);
    
    printf("%s\n", lower_s);

    return 0;
}