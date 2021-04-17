/*

https://codeforces.com/problemset/problem/160/A

*/



#include<bits/stdc++.h>
using namespace std;

void twins(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int i=0, j=n-1;
    int t1=0, t2=0;
    int ans=0;
    while(i<=j){
        t2+=arr[i];
        i++;
        if(t2>=t1){
            t2-=arr[--i];
            t1+=arr[j];
            ans++;
            j--;
        }
    }
    cout << ans << endl;
}

int main(){
    twins();
    return 0;
}
