/*

https://codeforces.com/problemset/problem/443/A

*/



#include<bits/stdc++.h>
using namespace std;

void anton__letters(){
    set<char> st;
    char ch;
    cin >> ch;
    while(ch!='}'){
        if(ch>=char(97) && ch<=char(122)){
            st.insert(ch);
        }
        cin >> ch;
    }
    cout << st.size() << endl;
}

int main(){
    anton__letters();
    return 0;
}
