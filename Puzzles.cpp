/*

https://codeforces.com/problemset/problem/337/A

*/



#include<bits/stdc++.h>
using namespace std;

void puzzles(){
    int n, m;
    cin >> n >> m;
    int* arr = new int[m];
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }
    sort(arr, arr+m);
    
    int min=INT_MAX;
    for(int i=0; i+n<=m; i++){
        if(arr[i+n-1]-arr[i] < min){
            min = arr[i+n-1]-arr[i];
        }
    }
    cout << min << endl;
    
    delete []arr;
}

int main(){
    puzzles();
    return 0;
}
