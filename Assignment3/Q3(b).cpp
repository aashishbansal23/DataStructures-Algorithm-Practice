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

int lengthCL(CircularNode* head){
	if(head == NULL){
		return 0;
	}
	
	int len=1;
	CircularNode* temp = head->next;
	while(temp != head){
		len++;
		temp = temp->next;
	}
	return len;
}

int main(){
	CircularNode* head = inputCL();
	int len = lengthCL(head);
	cout << "Length of circular linked list is " << len << endl;
	
	return 0;
}
