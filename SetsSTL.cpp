/*

https://www.hackerrank.com/challenges/cpp-sets/problem

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    set<int> s;
    for(int i=0; i<Q; i++){
        int y, x;
        cin >> y >> x;
        switch(y){
            case 1:
            s.insert(x);
            break;
            
            case 2:
            s.erase(x);
            break;
            
            case 3:
            if(s.find(x)!=s.end()){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
