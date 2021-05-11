/*

https://codeforces.com/problemset/problem/462/A

*/



#include<bits/stdc++.h>
using namespace std;

void appleman_and_easy_task(){
    int n;
    cin >> n;
    char checkboard[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> checkboard[i][j];
        }
    }
    bool ans=true;
    for(int i=0; i<n; i++){
        if(!ans){
            break;
        }
        int even_num=0;
        for(int j=0; j<n; j++){
            if(i>0){
                if(checkboard[i-1][j] == 'o'){
                    even_num++;
                }
            }
            if(i<n-1){
                if(checkboard[i+1][j] == 'o'){
                    even_num++;
                }
            }
            if(j>0){
                if(checkboard[i][j-1] == 'o'){
                    even_num++;
                }
            }
            if(j<n-1){
                if(checkboard[i][j+1] == 'o'){
                    even_num++;
                }
            }
            if(even_num%2!=0){
                ans=false;
                break;
            }
        }
    }
    if(ans){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
	appleman_and_easy_task();
	return 0;
}
