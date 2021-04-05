/*

https://www.codechef.com/LRNDSA01/problems/MULTHREE

*/



#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        long long k;
        int d0, d1;
        cin >> k >> d0 >> d1;
        int x=(d0+d1);
        long long ans=x;
        if(k==3){
            ans+=x%10;
            ans=ans%3;
        }else if(k>3){
            ans+=x%10;
            int ans2=(2*x)%10;
            int ans4=(4*x)%10;
            int ans8=(8*x)%10;
            int ans6=(6*x)%10;
            ans=ans+(ans2+ans4+ans8+ans6)*((k-3)/4);
            if((k-3)%4==1){
                ans+=ans2;
            }else if((k-3)%4==2){
                ans+=ans2+ans4;
            }else if((k-3)%4==3){
                ans+=ans2+ans4+ans8;
            }
        }
        if(ans%3==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
	return 0;
}
