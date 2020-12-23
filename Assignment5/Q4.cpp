#include<iostream>
#include<queue>
#include<string>
using namespace std;

void nonRepeating(string str){
	queue<char> qu;
	int charArray[26] = {0};
	for(int i=0; i<str.length(); i++){
		qu.push(str[i]);
		charArray[str[i]-'a']++;
		while(!qu.empty()){
			if(charArray[qu.front()-'a'] > 1){
				qu.pop();
			}else{
				cout << qu.front() << " ";
				break;
			}
		}
		if(qu.empty()){
			cout << "-1 ";
		}
	}
	cout << endl;
}

int main(){
	string str;
	cout << "Enter the string: ";
	cin >> str;
	nonRepeating(str);
	return 0;
}
