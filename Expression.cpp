/*

https://codeforces.com/problemset/problem/479/A

*/



#include<bits/stdc++.h>
using namespace std;

void expression(){
	int a, b, c;
	cin >> a >> b >> c;
	if((a==1 && b==1 && c==1) || (a==1 && c==1)){
		cout << a+b+c << endl;
	}else if((a==1 && b==1) || (b==1 && c==1)){
		cout << 2*max(max(a,b),c) << endl;
	}else if(a==1 || b==1 || c==1){
		if(a==1){
			cout << (a+b)*c << endl;
		}else if(b==1){
			cout << (b+min(a,c))*max(a,c) << endl;
		}else{
			cout << a*(b+c) << endl;
		}
	}else{
		cout << a*b*c << endl;
	}
}

int main(){
	expression();
	return 0;
}
