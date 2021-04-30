/*

https://codeforces.com/problemset/problem/466/A

*/



#include<bits/stdc++.h>
using namespace std;

void cheap_travel(){
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	cout << min(b*(n/m)+a*(n%m), min(b*(n/m)+b, a*n))<< endl;
}

int main(){
	cheap_travel();
	return 0;
}
