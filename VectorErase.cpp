/*

https://www.hackerrank.com/challenges/vector-erase/problem?h_r=next-challenge&h_v=zen

*/



#include "bits/stdc++.h"
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<int> v;
    for(int i=0; i<N; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int x;
    cin >> x;
    v.erase(v.begin()+x-1);
    int a, b;
    cin >> a >> b;
    v.erase(v.begin()+a-1, v.begin()+b-1);
    cout << v.size() << endl;
    vector<int> :: iterator itr = v.begin();
    while (itr!=v.end()) {
        cout << *itr << " ";
        itr++;
    }
    return 0;
}
