/*

https://codeforces.com/problemset/problem/262/A

*/



#include<bits/stdc++.h>
using namespace std;

void roma_and_lucky_numbers(){
    int n, k;
    cin >> n >> k;
    int ans=0;
    for(int i=0; i<n; i++){
        int num, count=0;
        cin >> num;
        while(num>0){
            if(num%10==4 || num%10==7){
                count++;
            }
            num/=10;
        }
        if(count<=k){
            ans++;
        }
    }
    cout << ans << endl;
}

int main(){
	roma_and_lucky_numbers();
	return 0;
}
