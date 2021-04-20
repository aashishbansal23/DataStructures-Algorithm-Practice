/*

https://codeforces.com/problemset/problem/144/A

*/



#include<bits/stdc++.h>
using namespace std;

void arrival_of_general(){
    int n;
    cin >> n;
    int* arr=new int[n];
    int max=INT_MIN, min=INT_MAX;
    int max_index, min_index;
    int ans_time=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>max){
            max=arr[i];
            max_index=i;
        }
        if(min>=arr[i]){
            min=arr[i];
            min_index=i;
        }
    }
    
    for(int i=max_index; i>0; i--){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        ans_time++;
    }
    if(arr[min_index+1]==min){
        ans_time+=n-min_index-1-1;
    }else{
        ans_time+=n-min_index-1;
    }
    cout << ans_time << endl;
    delete []arr;
}

int main(){
    arrival_of_general();
    return 0;
}
