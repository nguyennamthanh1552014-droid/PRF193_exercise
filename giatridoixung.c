#include <stdio.h>
#include <string.h>

int is_palindrome(const char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return 0; 
        }
        left++;
        right--;
    }
    return 1; 
}

int main() {
    char S[MAX_LEN];
    
   
    if (scanf("%s", S) != 1) {
        return 0;
    }

    if (is_palindrome(S)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}