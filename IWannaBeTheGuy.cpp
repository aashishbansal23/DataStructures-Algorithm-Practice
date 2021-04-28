/*

https://codeforces.com/problemset/problem/469/A

*/



#include<bits/stdc++.h>
using namespace std;

void i_wanna_be_the_guy(){
    set<int> st;
    int n;
    cin >> n;
    int p;
    cin >> p;
    for(int i=0; i<p; i++){
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int temp;
        cin >> temp;
        st.insert(temp);
    }
    if(st.size()==n){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
}

int main(){
    i_wanna_be_the_guy();
    return 0;
}
