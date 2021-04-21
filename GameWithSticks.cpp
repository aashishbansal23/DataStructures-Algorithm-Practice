/*

https://codeforces.com/problemset/problem/451/A

*/



#include<bits/stdc++.h>
using namespace std;

void game_with_sticks(){
    int n, m;
    cin >> n >> m;
    int ans=0;
    while(n>0 && m>0){
        ans++;
        n--;
        m--;
    }
    if(ans%2==0){
        cout << "Malvika" << endl;
    }else{
        cout << "Akshat" << endl;
    }
}

int main(){
    game_with_sticks();
    return 0;
}
