/*

https://codeforces.com/problemset/problem/118/A

*/



#include<bits/stdc++.h>
using namespace std;

void stringTask(){
    string str;
    cin >> str;
    unordered_map<char, int> ourmap;
    ourmap['A']=1; ourmap['a']=1;
    ourmap['E']=1; ourmap['e']=1;
    ourmap['I']=1; ourmap['i']=1;
    ourmap['O']=1; ourmap['o']=1;
    ourmap['U']=1; ourmap['u']=1;
    ourmap['Y']=1; ourmap['y']=1;
    for(int i=0; i<str.length(); i++){
        if(ourmap[str[i]]==0){
            if(str[i]>='A' && str[i]<='Z'){
                cout << "." << char(str[i]-'A'+'a');
            }else{
                cout << "." << str[i];
            }
        }
    }
}

int main(){
    stringTask();
    return 0;
}
