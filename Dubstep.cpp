/*

https://codeforces.com/problemset/problem/208/A

*/



#include<bits/stdc++.h>
using namespace std;

void dubstep(){
    string str;
    cin >> str;
    string ans = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            if(ans.length() && ans[ans.length()-1]!=' '){
                ans+=" ";
            }
            i+=2;
        }else{
            ans+=str[i];
        }
    }
    cout << ans << endl;
}

int main(){
    dubstep();
    return 0;
}
