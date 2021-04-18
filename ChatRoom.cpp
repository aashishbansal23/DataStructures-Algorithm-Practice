/*

https://codeforces.com/problemset/problem/58/A

*/



#include<bits/stdc++.h>
using namespace std;

void chat_room(){
    string str;
    cin >> str;
    if(str.length()<5){
        cout << "NO" << endl;
        return ;
    }
    bool arr[5]={false};
    int count=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='h' && count==0){
            count++;
        }else if(str[i]=='e' && count==1){
            count++;
        }else if(str[i]=='l' && (count==2 || count==3)){
            count++;
        }else if(str[i]=='o' && count==4){
            count++;
        }
    }
    if(count==5){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    chat_room();
    return 0;
}
