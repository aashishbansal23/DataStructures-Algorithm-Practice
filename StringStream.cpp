/*

https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

*/



#include<bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	int l=0, len=str.length();
    vector<int> v;
    string s="";
    while(l < len+1){
        if(str[l]==',' || l==len){
            stringstream temp(s);
            int temp1=0;
            temp>>temp1;
            v.push_back(temp1);
            s="";
            l++;
            continue;
        }
        s+=str[l];
        l++;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
