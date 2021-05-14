/*

https://codeforces.com/problemset/problem/313/A

*/



#include<bits/stdc++.h>
using namespace std;

void ilya_and_bank_account(){
	long long int n;
	cin >> n;
	if(n>0){
		cout << n << endl;
	}else{
		n*=-1;
		int last_digit = n%10;
		int last_second_digit = (n%100)/10;
		cout << last_digit << " " << last_second_digit << endl;
		int maxx = max(last_digit, last_second_digit);
		if(maxx == last_digit){
			cout << -n/10 << endl;
		}else{
			cout << -(((n/100)*10)+last_digit) << endl;
		}
	}
}

int main(){
	ilya_and_bank_account();
	return 0;
}
