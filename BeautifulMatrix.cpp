/*

https://codeforces.com/problemset/problem/263/A

*/



#include<bits/stdc++.h>
using namespace std;

void beautiful_matrix(){
    int index_i, index_j;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            int temp;
            cin >> temp;
            if(temp==1){
                index_i=i;
                index_j=j;
            }
        }
    }
    cout << abs(index_i-3)+abs(index_j-3) << endl;
}

int main(){
    beautiful_matrix();
    return 0;
}
