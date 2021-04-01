/*

https://www.codechef.com/LRNDSA01/submit/FCTRL

*/



#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int n;
        cin >> n;
        int j=1;
        int ans=0;
        while(pow(5,j)<=n){
            ans+=n/pow(5,j);
            j++;
        }
        cout << ans << endl;
    }
    
    return 0;
}
