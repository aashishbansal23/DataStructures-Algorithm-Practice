#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
	    string str;
	    unordered_map<char, int> ourmap;
	    bool flag=true;
	    cin >> str;
	    for(int j=0; j<str.length()/2; j++){
	        if(ourmap[str[j]]>=0){
	            ourmap[str[j]]++;
	        }else{
	            ourmap[str[j]]=1;
	        }
	    }
	    int j;
	    if(str.length()%2==0){
	        j=str.length()/2;
	    }else{
	        j=(str.length()/2)+1;
	    }
	    for(; j<str.length(); j++){
	        if(ourmap[str[j]]<=0){
	            cout << "NO" << endl;
	            flag=false;
	            break;
	        }else{
	            ourmap[str[j]]--;
	        }
	    }
	    if(flag){
	        cout << "YES" << endl;
	    }
	}
	return 0;
}
