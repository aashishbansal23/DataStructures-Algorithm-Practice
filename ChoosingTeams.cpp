/*

https://codeforces.com/problemset/problem/432/A

*/



#include<bits/stdc++.h>
using namespace std;

void choosing_teams(){
    int n, k;
    cin >> n >> k;
    int ans=0;
    for(int i=0; i<n; i++){
        int participant_time;
        cin >> participant_time;
        if(5-participant_time >= k){
            ans++;
        }
    }
    cout << ans/3 << endl;
}

int main(){
	choosing_teams();
	return 0;
}
