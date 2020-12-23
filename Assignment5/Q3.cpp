#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void interleave(queue<int>& qu, int size){
	int mid = size/2;
	stack<int> st;
	for(int i=0; i<mid; i++){
		st.push(qu.front());
		qu.pop();
	}
	while(!st.empty()){
		qu.push(st.top());
		st.pop();
	}
	for(int i=0; i<mid; i++){
		qu.push(qu.front());
		qu.pop();
	}
	for(int i=0; i<mid; i++){
		st.push(qu.front());
		qu.pop();
	}
	while(!st.empty()){
		qu.push(st.top());
		st.pop();
		qu.push((qu.front()));
		qu.pop();
	}
}

int main(){
	cout << "Enter the count of even number of elements: ";
	int size;
	cin >> size;
	if(size%2 != 0){
		cout << "Number of elements not even." << endl;
		cout << "Program terminated !!!" << endl;
	}else{
		cout << "Enter the elements:" << endl;
		queue<int> qu;
		int element;
		for(int i=0; i<size; i++){
			cin >> element;
			qu.push(element);
		}
		interleave(qu, size);
		cout << "Queue after interleaving is:" << endl;
		while(!qu.empty()){
			cout << qu.front() << " ";
			qu.pop();
		}
		cout << endl;
	}
	return 0;
}
