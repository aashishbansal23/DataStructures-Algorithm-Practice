/*

https://codeforces.com/problemset/problem/268/A

*/



#include<bits/stdc++.h>
using namespace std;

void games(){
    int n;
    cin >> n;
    unordered_map<int, int> host;
    unordered_map<int, int> guest;
    for(int i=0; i<n; i++){
        int h, g;
        cin >> h >> g;
        host[h]+=1;
        guest[g]+=1;
    }
    int ans=0;
    unordered_map<int, int> :: iterator itr = host.begin();
    while(itr != host.end()){
        ans+=guest[itr->first]*itr->second;
        itr++;
    }
    cout << ans << endl;
}

int main(){
    games();
    return 0;
}
