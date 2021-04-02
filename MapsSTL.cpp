/*

https://www.hackerrank.com/challenges/cpp-maps/problem

*/



#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    unordered_map<string, int> ourmap;
    for(int i=0; i<Q; i++){
        int n;
        string name;
        cin >> n >> name;
        switch(n){
            case 1:
            int marks;
            cin >> marks;
            ourmap[name]+=marks;
            break;
            
            case 2:
            ourmap[name] = 0;
            break;
            
            case 3:
            cout << ourmap[name] << endl;
            break;
        }
    }
    return 0;
}
