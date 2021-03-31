/*

https://www.hackerrank.com/challenges/vector-sort/problem

*/


#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    vector<int> v;
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    
    print(v);
    return 0;
}
