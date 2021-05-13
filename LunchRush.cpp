/*

https://codeforces.com/problemset/problem/276/A

*/



#include<bits/stdc++.h>
using namespace std;

void lunch_rush(){
    int n, k;
    cin >> n >> k;
    int ans=INT_MIN;
    for(int i=0; i<n; i++){
        int f, t;
        cin >> f >> t;
        if((t-k)>0 && (f-(t-k))>ans){
            ans=(f-(t-k));
        }else if((t-k)<=0 && ans<f){
            ans=f;
        }
    }
    cout << ans << endl;
}

int main(){
	lunch_rush();
	return 0;
}
