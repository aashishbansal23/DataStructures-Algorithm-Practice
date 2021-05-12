/*

https://codeforces.com/problemset/problem/385/A

*/



#include<bits/stdc++.h>
using namespace std;

void bear_and_raspberry(){
    int n, c;
    cin >> n >> c;
    int pre;
    int maxx=INT_MIN;
    for(int i=0; i<n; i++){
        int curr;
        cin >> curr;
        if(i==0){
            pre=curr;
            continue;
        }
        if(pre-curr > maxx){
            maxx=pre-curr;
        }
        pre=curr;
    }
    if(maxx-c<0){
        cout << "0" << endl;
    }else{
        cout << maxx-c << endl;
    }
}

int main(){
	bear_and_raspberry();
	return 0;
}
