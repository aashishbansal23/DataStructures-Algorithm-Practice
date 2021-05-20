/*

https://codeforces.com/problemset/problem/233/A

*/



#include<bits/stdc++.h>
using namespace std;

void perfect_permutation(){
    int n;
    cin >> n;
    if(n%2!=0){
        cout << "-1" << endl;
    }else{
        int i=1;
        while(i<=n){
            if(i%2==0){
                cout << i-1 << " ";
            }else{
                cout << i+1 << " ";
            }
            i++;
        }
    }
}

int main(){
	perfect_permutation();
	return 0;
}
