#include<iostream>
using namespace std;

class CircularNode{
	public:
		int data;
		CircularNode* next;
		
		CircularNode(int data){
			this->data = data;
			next = NULL;
		}
};

CircularNode* inputCL(){
	cout << "Enter the circular linked list:" << endl;
	int dt;
	cin >> dt;
	CircularNode* head = NULL;
	CircularNode* tail = NULL;
	
	while(dt != -1){
		CircularNode* newNode = new CircularNode(dt);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}else{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> dt;
	}
	if(head == NULL){
		return head;
	}
	tail->next = head;
	return head;
}

void printCL(CircularNode* head){
	if(head == NULL){
		cout << "Linked list is empty !!!" << endl;
		return ;
	}
	
	CircularNode* temp = head;
	cout << "Linked List is:" << endl;
	cout << temp->data << " ";
	temp = temp->next;
	while(temp != head){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << temp->data << " ";
	cout << endl;	
}

int main(){
	CircularNode* head = inputCL();
	printCL(head);
	
	return 0;
}
