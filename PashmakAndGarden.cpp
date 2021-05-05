/*

https://codeforces.com/problemset/problem/459/A

*/



#include<bits/stdc++.h>
using namespace std;

void pashmak_and_garden(){
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x3, y3, x4, y4;
	bool ans=true;
	if(x1-x2==0 || y1-y2==0){
		x3=x1+abs(y2-y1);
		x4=x2+abs(y2-y1);
		y3=y1+abs(x2-x1);
		y4=y2+abs(x2-x1);
		cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
	}else if(abs(x1-x2)!=abs(y1-y2)){
		cout << "-1" << endl;
	}else{
		x3=min(x1,x2);
		y3=max(y1,y2);
		x4=max(x1,x2);
		y4=min(y1,y2);
		
		if((x1==x3 && y1==y3) || (x2==x3 && y2==y3)){
			y3=min(y1,y2);
			y4=max(y1,y2);
		}
		cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
	}
}

int main(){
	pashmak_and_garden();
	return 0;
}
