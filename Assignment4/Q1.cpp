#include<iostream>
using namespace std;
#include"StackUsingArray.cpp"

int main(){
	StackUsingArray<int> stak;
	int n;
	do{
		cout << "------Choose from MENU------" << endl;
		cout << "1.Push" << endl;
		cout << "2.Pop" << endl;
		cout << "3.isEmpty" << endl;
		cout << "4.isFull" << endl;
		cout << "5.Display" << endl;
		cout << "6.Peek" << endl;
		cout << "7.Exit" << endl;
		
		cin >> n;
		
		switch(n){
			case 1:
				cout << "Enter the element to push: ";
				int element;
				cin >> element;
				stak.push(element);
				break;
				
			case 2:
				cout << "Poped element is: " << stak.pop() << endl;
				break;
				
			case 3:
				if(stak.isEmpty()){
					cout << "Stack is empty !!!" << endl;
				}else{
					cout << "Stack is not empty !!!" << endl;
				}
				break;
				
			case 4:
				if(stak.isFull()){
					cout << "Stack is full !!!" << endl;
				}else{
					cout << "Stack is not full !!!" << endl;
				}
				break;
				
			case 5:
				stak.display();
				break;
				
			case 6:
				if(stak.peek() == 0){
					break;
				}
				cout << "Peek element in stack is: " << stak.peek() << endl;
				break;
				
			default:
				cout << "Program terminated !!!" << endl;
				break;
		}
		
	}while(n>0 && n<7);
}
