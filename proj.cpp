#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    if((a =="Rock" && b == "Scissors")){
        cout << "Player 1";
    } else if(a== "Scissors" && b == "Rock"){
        cout << "Player 2";
    } else if(a==b){
        cout << "Draw";
    } else if(a == "Scissors" && b == "Paper"){
        cout << "Player 1";
    } else if(a == "Paper" && b == "Scissors"){
        cout << "Player 2";
    } else if(a == "Paper" && b == "Rock"){
        cout << "Player 1";
    } else if(a == "Rock" && b == "Paper"){
        cout << "Player 2";
    }
}