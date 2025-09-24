#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    if (n<=0) return 0;
    double sum=0;
    for(int i =1;i<=n;i++0){
        sum+=1.0/i;
    }
    cout<< setprecision(3) <<fixed <<endl;
    return 0;
}

    
