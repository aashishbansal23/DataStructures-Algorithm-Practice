/*



*/



#include<bits/stdc++.h>
using namespace std;

void dreamoon_and_stairs(){
	int n, m;
	cin >> n >> m;
	if(n<m){
		cout << "-1" << endl;
	}else{
		int temp;
		if(n%2==0){
			temp = n/2;
			if(temp%m==0){
				cout << temp << endl;
			}else{
				m=m-temp%m;
				if(n>=m){
					temp+=m;
					cout << temp << endl;
				}else{
					cout << "-1" << endl;
				}
			}
		}else{
			temp = (n/2)+1;
			if(temp%m==0){
				cout << temp << endl;
			}else{
				m=m-temp%m;
				if(n-1>=m){
					temp+=m;
					cout << temp << endl;
				}else{
					cout << "-1" << endl;
				}
			}
		}
	}
}

int main(){
	dreamoon_and_stairs();
	return 0;
}
