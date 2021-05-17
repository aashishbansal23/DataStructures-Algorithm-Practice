/*

https://codeforces.com/problemset/problem/378/A

*/



#include<bits/stdc++.h>
using namespace std;

void playing_with_dice(){
    int a, b;
    cin >> a >> b;
    int first=0, second=0, draw=0;
    for(int i=1; i<=6; i++){
        if(abs(a-i)<abs(b-i)){
            first++;
        }else if(abs(a-i)>abs(b-i)){
            second++;
        }else{
            draw++;
        }
    }
    cout << first << " " << draw << " " << second << endl;
}

int main(){
	playing_with_dice();
	return 0;
}
