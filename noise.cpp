#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int zeros = 0, negs = 0;
    long long maxNeg = -1e9, minpos = 1e9;
    long long smallest = 1e9, larget = -1e9;
    for(auto x:a){
        if(x==0) zeros++;
        if(x<0){
            negs++;
            if(x > maxNeg) maxNeg = x;
        } else {
            if(x < minpos) minpos = x;
        }
        smallest = min(smallest, x);
        larget = max(larget, x);
    }
    long long luna, thana;

    if(zeros >= 2){
        luna = larget;
        thana = smallest;
    } else if(zeros == 1){
        if(negs % 2== 1) luna = thana = maxNeg;
        else luna = thana = 0;
    } else {
        if(negs % 2== 0) luna = thana = smallest;
        else luna = thana = maxNeg;
    }
    cout << luna << " " << thana;
}