/*

https://codeforces.com/problemset/problem/490/A

*/



#include<bits/stdc++.h>
using namespace std;

void team_olympiad(){
	int n;
	cin >> n;
	int arr[3]={0};
	queue<int> q[3];
	for(int i=1; i<=n; i++){
		int temp;
		cin >> temp;
		arr[temp-1]++;
		q[temp-1].push(i);
	}
	int minn=arr[0];
	for(int i=1; i<3; i++){
		if(minn>arr[i]){
			minn = arr[i];
		}
	}
	cout << minn << endl;
	for(int i=0; i<minn; i++){
		for(int j=0; j<3; j++){
			cout << q[j].front() << " ";
			q[j].pop();
		}
		cout << endl;
	}
}

int main(){
	team_olympiad();
	return 0;
}
