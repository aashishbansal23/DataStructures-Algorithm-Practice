/*

https://codeforces.com/problemset/problem/441/A

*/



#include<bits/stdc++.h>
using namespace std;

void valera_and_antique_items(){
    int n, v;
    cin >> n >> v;
    int ans=0;
    vector<int> ans_sellers;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        bool check=false;
        for(int j=0; j<k; j++){
            int price;
            cin >> price;
            if(price < v){
                check=true;
            }
        }
        if(check){
            ans_sellers.push_back(i+1);
            ans++;
        }
    }
    sort(ans_sellers.begin(), ans_sellers.end());
    cout << ans << endl;
    for(int i=0; i<ans_sellers.size(); i++){
        cout << ans_sellers[i] << " ";
    }
    cout << endl;
}

int main(){
	valera_and_antique_items();
	return 0;
}
