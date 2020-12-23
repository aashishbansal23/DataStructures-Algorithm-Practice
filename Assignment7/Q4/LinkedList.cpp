#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data = data;
			next = NULL;
		}
};

Node* takeInput(){
	Node* head = NULL;
	Node* tail = NULL;
	cout << "Enter the linked list:" << endl;
	int dt;
	cin >> dt;
	while(dt != -1){
		Node* newNode = new Node(dt);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}else{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> dt;
	}
	return head;
}
