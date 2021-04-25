/*

https://codeforces.com/problemset/problem/69/A

*/



#include<bits/stdc++.h>
using namespace std;

void young_physicist(){
    int n;
    cin >> n;
    int ans_x=0, ans_y=0, ans_z=0;
    for(int i=0; i<n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        ans_x+=x;
        ans_y+=y;
        ans_z+=z;
    }
    if(ans_x==0 && ans_y==0 && ans_z==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    young_physicist();
    return 0;
}
