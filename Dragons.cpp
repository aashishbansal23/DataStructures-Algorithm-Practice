/*

https://codeforces.com/problemset/problem/230/A

*/



#include<bits/stdc++.h>
using namespace std;

class strength{
	public:
		int x, y;
		strength(){
			x=0;
			y=0;
		}
};

bool comparison(strength s1, strength s2){
	return s1.x<s2.x;
}

void dragons(){
	int s, n;
	cin >> s >> n;
	strength* arr = new strength[n];
	for(int i=0; i<n; i++){
		cin >> arr[i].x >> arr[i].y;
	}
	sort(arr, arr+n, comparison);
	int i=0;
	while(s>arr[i].x && i<n){
		s+=arr[i].y;
		i++;
	}
	if(i==n){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	delete []arr;
}

int main(){
	dragons();
	return 0;
}
