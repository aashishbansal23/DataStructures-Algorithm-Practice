#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
	string s;
	cout << "Enter the expression: ";
	getline(cin,s);
	stack<char> st;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			st.push(s[i]);
		}else{
			switch(s[i]){
				case ')':
					if(st.empty()){
						cout << s << " is not balanced !!!" << endl;
						return 0;
					}
					if(st.top()=='('){
						st.pop();
					}else{
						cout << s << " is not balanced !!!" << endl;
						return 0;
					}
					break;
					
				case ']':
					if(st.empty()){
						cout << s << " is not balanced !!!" << endl;
						return 0;
					}
					if(st.top() == '['){
						st.pop();
					}else{
						cout << s << " is not balanced !!!" << endl;
						return 0;
					}
					break;
					
				case '}':
					if(st.empty()){
						cout << s << " is not balanced !!!" << endl;
						return 0;
					}
					if(st.top() == '{'){
						st.pop();
					}else{
						cout << s << " is not balanced !!!" << endl;
						return 0;
					}
					break;
			}
		}
	}
	if(st.empty()){
		cout << s << " is balanced !!!" << endl;
	}else{
		cout << s << " is not balanced !!!" << endl;
	}
	
	return 0;
}
