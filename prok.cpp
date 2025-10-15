#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    int a[100000];
    cin >> n;
    if(n % 2 != 0){
        return 0;
    }
    for(long long i=0;i<n;i++){
        cin >> a[i];
    }
    long long sum_l=0, sum_r=0;;
    long long indx = n / 2;
    for(long long i=0;i<indx;i++){
        sum_l += a[i];
    }
    for(long long i= indx;i<n;i++){
        sum_r += a[i];
    }
    cout << abs(sum_r - sum_l);
    return 0;
}