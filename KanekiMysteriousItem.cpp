/*

https://www.codechef.com/problems/MYSITM

*/


#include<bits/stdc++.h>
using namespace std;

void kaneki_mysterious_item(){
    unsigned long long T;
    cin >> T;
    while(T--){
        unsigned long long N, H, W;
        cin >> N >> H >> W;
        unsigned long long minn=0;
        unsigned long long maxx=max(H,W)*N;
        while(maxx-minn>1){
            unsigned long long mid=minn+(maxx-minn)/2;
            if((mid/H)*(mid/W)>=N){
                maxx=mid;
            }else{
                minn=mid;
            }
        }
        if((maxx/H)*(maxx/W)>=N){
            cout << maxx << endl;
        }else{
            cout << minn << endl;
        }
    }
}

int main() {
	kaneki_mysterious_item();
	return 0;
}
