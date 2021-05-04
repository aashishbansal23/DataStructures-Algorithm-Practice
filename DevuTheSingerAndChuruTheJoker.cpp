/*

https://codeforces.com/problemset/problem/439/A

*/



#include<bits/stdc++.h>
using namespace std;

void devu_churu(){
	int n, d;
	cin >> n >> d;
	int time=0;
	int ans=0;
	for(int i=0; i<n; i++){
		int t;
		cin >> t;
		time+=t;
		if(i+1!=n){
			time+=10;
			ans+=2;
		}
	}
	if(time<=d){
		ans+=(d-time)/5;
		cout << ans << endl;
	}else{
		cout << "-1" << endl;
	}
}

int main(){
	devu_churu();
	return 0;
}
