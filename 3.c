// thuan nghic, loc phat
#include <stdio.h>
#include<stdio.h>

int check(int n){
    bool check6 = false;
    int sum = 0;
    int m = n;
    int tmp = 0;
    while(n){
        tmp *=10;
        tmp += n%10;
        sum += n%10;
        if(n%10 == 6){
            check6 = true;
        }
        n /=10;
    }
    return m == tmp && check6 && sum%10 ==8;
}
int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    for(int i =a; i <= b;i++){
        if(check(i)){
            printf("%d ",i);
        }
    }
    return 0;
}