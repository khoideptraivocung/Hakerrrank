#include <bits/stdc++.h>
using namespace std;

long long sum_digit(long long x){
    long long sum=0;
    while(x) sum += x % 10, x/= 10;
    return sum;
}
int main(){
   int q;
   cin >> q;
   while(q--){
    long long l,r;
    cin >> l >> r;
    int count =0;
    for(long long i=l;i<=r;i++){
        long long s = sum_digit(i);
        if(i<=10 && i != 6) continue;
        if(s%3 ==0) count++;
    }
    cout << count;
   }
    return 0;
}