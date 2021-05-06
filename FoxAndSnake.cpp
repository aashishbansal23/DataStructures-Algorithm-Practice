/*

https://codeforces.com/problemset/problem/510/A

*/



#include<bits/stdc++.h>
using namespace std;

void fox_and_snake(){
    int n, m;
    cin >> n >> m;
    bool line=true;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            for(int j=1; j<=m; j++){
                cout << "#";
            }
        }else{
            if(line){
                for(int j=1; j<=m; j++){
                    if(j==m){
                        cout << "#";
                        line=false;
                        break;
                    }
                    cout << ".";
                }
            }else{
                for(int j=1; j<=m; j++){
                    if(j==1){
                        cout << "#";
                        line=true;
                        continue;
                    }
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
}

int main(){
	fox_and_snake();
	return 0;
}
