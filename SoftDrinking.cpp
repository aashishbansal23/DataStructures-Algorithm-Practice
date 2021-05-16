/*

https://codeforces.com/problemset/problem/151/A

*/



#include<bits/stdc++.h>
using namespace std;

void soft_drinking(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink=(k*l)/(nl);
    int limes=c*d;
    int salt=p/np;
    cout << (min(drink, min(limes,salt)))/n << endl;
}

int main(){
	soft_drinking();
	return 0;
}
