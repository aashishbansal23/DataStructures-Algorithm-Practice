#include<iostream>
using namespace std;

class DoubleNode{
	public:
		int data;
		DoubleNode* next;
		DoubleNode* previous;
		
		DoubleNode(int data){
			this->data = data;
			next = NULL;
			previous = NULL;
		}
};

DoubleNode* inputDL(){
	cout << "Enter the double Linked list:" << endl;
	int dt;
	cin >> dt;
	DoubleNode* head = NULL;
	DoubleNode* tail = NULL;
	
	while(dt != -1){
		DoubleNode* newNode = new DoubleNode(dt);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}else{
			tail->next = newNode;
			newNode->previous = tail;
			tail = tail->next;
		}
		cin >> dt;
	}
	
	return head;
}

int lengthDL(DoubleNode* head){
	if(head == NULL){
		return 0;
	}
	
	int len=1;
	DoubleNode* temp = head->next;
	while(temp != NULL){
		len++;
		temp = temp->next;
	}
	return len;
}

int main(){
	DoubleNode* head = inputDL();
	int len = lengthDL(head);
	cout << "Length of linked is " << len << endl;
	return 0;
}
