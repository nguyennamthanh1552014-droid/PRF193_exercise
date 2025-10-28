#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1001 

int kiem_tra(const char* chuoi_N) {
    int do_dai = strlen(chuoi_N);
    
    if (do_dai == 0) {
        return 0; 
    }
    char cuoi = chuoi_N[do_dai - 1];
    if (cuoi != '0' && cuoi != '5') {
        return 0; 
    }
    long long tong = 0;
    int i;
    
    for (i = 0; i < do_dai; i++) {
        
        tong += (chuoi_N[i] - '0');
    }
   
    if (tong % 3 != 0) {
        return 0; 
    }
  
    return 1;
}

int main() {
    char N[MAX_SIZE];

    if (scanf("%s", N) != 1) {
        return 0;
    }
    
    if (strcmp(N, "0") == 0) {
        printf("YES\n");
        return 0;
    }
    if (kiem_tra(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}