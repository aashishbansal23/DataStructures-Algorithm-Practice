/*

https://codeforces.com/problemset/problem/255/A

*/



#include<bits/stdc++.h>
using namespace std;

void gregs_workout(){
    int n;
    cin >> n;
    int chest=0;
    int bicep=0;
    int back=0;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if(i%3==0){
            chest+=temp;
        }else if(i%3==1){
            bicep+=temp;
        }else{
            back+=temp;
        }
    }
    int maxx=max(chest, max(bicep, back));
    if(chest==maxx){
        cout << "chest" << endl;
    }else if(bicep==maxx){
        cout << "biceps" << endl;
    }else{
        cout << "back" << endl;
    }
}

int main(){
	gregs_workout();
	return 0;
}
