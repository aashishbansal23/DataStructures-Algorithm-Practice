/*

https://codeforces.com/problemset/problem/339/A

*/



#include<bits/stdc++.h>
using namespace std;

void helpful_maths(){
    string str;
    cin >> str;
    int arr[3]={0};
    for(int i=0; i<str.length(); i++){
        if(str[i]=='1'){
            arr[0]++;
        }else if(str[i]=='2'){
            arr[1]++;
        }else if(str[i]=='3'){
            arr[2]++;
        }
    }
    for(int i=0; i<3; i++){
        while(arr[i]>0){
            cout << i+1;
            arr[i]--;
            if(arr[0]>0 || arr[1]>0 || arr[2]>0){
                cout << "+";
            }
        }
    }
    cout << endl;
}

int main(){
    helpful_maths();
    return 0;
}
