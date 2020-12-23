#include<iostream>
#include"CircularQueueUsingArray.cpp"
using namespace std;


int main(){
	CircularQueueUsingArray<int> qu;
	int n;
	do{
		cout << "------Choose from MENU------" << endl;
		cout << "1.Enqueue" << endl;
		cout << "2.Dequeue" << endl;
		cout << "3.isEmpty" << endl;
		cout << "4.isFull" << endl;
		cout << "5.Display" << endl;
		cout << "6.Peek" << endl;
		cout << "7.Exit" << endl;
		
		cin >> n;
		
		switch(n){
			case 1:
				cout << "Enter the element to insert: ";
				int element;
				cin >> element;
				qu.enqueue(element);
				break;
				
			case 2:
				cout << "Removed element is " << qu.dequeue() << endl;
				break;
				
			case 3:
				if(qu.isEmpty()){
					cout << "Queue is empty !!!" << endl;
				}else{
					cout << "Queue is not empty !!!" << endl;
				}
				break;
				
			case 4:
				if(qu.isFull()){
					cout << "Queue is full !!!" << endl;
				}else{
					cout << "Queue is not full !!!" << endl;
				}
				break;
				
			case 5:
				qu.display();
				break;
				
			case 6:
				cout << "First element in queue is " << qu.peek() << endl;
				break;
				
			default:
				cout << "Program terminated !!!" << endl;
				return 0;
				break;
		}
		
	}while(n>=1 && n<=7);
	return 0;
}
