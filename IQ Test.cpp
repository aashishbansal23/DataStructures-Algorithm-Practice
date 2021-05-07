/*

https://codeforces.com/problemset/problem/25/A

*/



#include<bits/stdc++.h>
using namespace std;

void iq_test(){
	int n;
	cin >> n;
	int even=0, odd=0;
	int ans_even=1, ans_odd=1;
	for(int i=0; i<n; i++){
		int num;
		cin >> num;
		if(num%2==0){
			if((odd>1) && even==0){
				ans_even=i+1;
			}
			even++;
		}else{
			if(odd==0 && even>0){
				ans_odd=i+1;
			}
			odd++;
		}
	}
	if(even>odd){
		cout << ans_odd << endl;
	}else{
		cout << ans_even << endl;
	}
}

int main(){
	iq_test();
	return 0;
}
