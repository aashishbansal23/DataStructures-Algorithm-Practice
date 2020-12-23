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

class Pair{
	public:
		DoubleNode* head;
		DoubleNode* tail;
		Pair(){
			head = NULL;
			tail = NULL;
		}
};

Pair inputDL(){
	cout << "Enter the linked list:" << endl;
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
	Pair p;
	p.head = head;
	p.tail = tail;
	return p;
}

bool checkPalindrome(Pair p){
	if(p.head == NULL || p.head == p.tail){
		return true;
	}
	DoubleNode* head = p.head;
	DoubleNode* tail = p.tail;
	while(head != tail && head->next != tail){
		if(head->data != tail->data){
			return false;
		}
		head = head->next;
		tail = tail->previous;
	}
	if(head->next == tail){
		if(head->data != tail->data){
			return false;
		}else{
			return true;
		}
	}
	return true;
}

int main(){
	Pair p = inputDL();
	bool ans = checkPalindrome(p);
	if(ans){
		cout << "Linked list is Palindrome !!!" << endl;
	}else{
		cout << "Linked list is not palindrome !!!" << endl;
	}
	return 0;
}
