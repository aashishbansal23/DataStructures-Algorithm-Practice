/*

https://codeforces.com/problemset/problem/71/A

*/



#include<bits/stdc++.h>
using namespace std;

void Way_to_long_words(){
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        if(str.length()>10){
            cout << str[0] << str.length()-2 << str[str.length()-1] << endl;
        }else{
            cout << str << endl;
        }
    }
}

int main(){
    Way_to_long_words();
    return 0;
}
