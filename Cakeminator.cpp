/*

https://codeforces.com/problemset/problem/330/A

*/



#include<bits/stdc++.h>
using namespace std;

void cakeminator(){
    int r, c;
    cin >> r >> c;
    char cake[r][c];
    int ans_rows=0;
    for(int i=0; i<r; i++){
        bool check=true;
        for(int j=0; j<c; j++){
            cin >> cake[i][j];
            if(cake[i][j]=='S'){
                check=false;
            }
        }
        if(check){
            ans_rows++;
        }
    }
    int ans_cols=0;
    for(int j=0; j<c; j++){
        bool check=true;
        for(int i=0; i<r; i++){
            if(cake[i][j]=='S'){
                check=false;
            }
        }
        if(check){
            ans_cols++;
        }
    }
    cout << ((ans_rows*c)+(ans_cols*r)-(ans_rows*ans_cols)) << endl;
}

int main(){
	cakeminator();
	return 0;
}
