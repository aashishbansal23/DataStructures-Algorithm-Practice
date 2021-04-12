/*

https://codeforces.com/problemset/problem/4/A

*/


#include<bits/stdc++.h>
using namespace std;
 
void watermelon(){
    int w;
    cin >> w;
    if(w%2!=0 || w<=3 || w>100){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}
 
int main(){
    watermelon();
    return 0;
}
