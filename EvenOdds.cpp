/*

https://codeforces.com/problemset/problem/318/A

*/



#include<bits/stdc++.h>
using namespace std;

void even_odds(){
	long long n, k;
	cin >> n >> k;
	long long odd=(n+1)/2;
	if(k<=odd){
		cout << 2*k-1 << endl;
	}else{
		cout << 2*(k-odd) << endl;
	}
}

int main(){
	even_odds();
	return 0;
}
