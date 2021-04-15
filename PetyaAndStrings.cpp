/*

https://codeforces.com/problemset/problem/112/A

*/



#include<bits/stdc++.h>
using namespace std;

void petya_and_strings(){
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.length()!=str2.length()){
        return ;
    }
    int i;
    for(i=0; i<str1.length(); i++){
        char s1=tolower(str1[i]);
        char s2=tolower(str2[i]);
        if(s1<s2){
            cout << "-1" << endl;
            break;
        }else if(s2<s1){
            cout << "1" << endl;
            break;
        }
    }
    if(i==str1.length()){
        cout << "0" << endl;
    }
}

int main(){
    petya_and_strings();
    return 0;
}
