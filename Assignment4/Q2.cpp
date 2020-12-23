#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
	string s;
	cout << "Enter the string to reverse: ";
	getline(cin,s);
	stack<char> st;
	
	for(int i=0; i<s.length(); i++){
		if(s[i] == ' '){
			continue;
		}
		st.push(s[i]);
	}
	s = st.top();
	st.pop();
	while(!st.empty()){
		s = s+st.top();
		st.pop();
	}
	cout << "Reversed string is " << s << endl;
	return 0;
}
