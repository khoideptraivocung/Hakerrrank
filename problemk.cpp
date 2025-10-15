#include <bits/stdc++.h>

using namespace std;

int prime(long long n){
    if(n < 2) return 0;
    for(long long i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    long long n;
    cin >> n;
    if(prime(n)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}