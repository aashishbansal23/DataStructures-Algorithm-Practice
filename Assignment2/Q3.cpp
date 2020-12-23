#include<iostream>
using namespace std;
#include"Node.cpp"


void findMid(Node* head){
	if(head == NULL){
		cout << "Linked List is empty: " << endl;
	}
	if(head->next == NULL){
		cout << "Mid of Linked List is: " << head->data << endl;
	}
	Node* pre = head;
	Node* post = head;
	while(post->next != NULL && post->next->next != NULL){
		pre = pre->next;
		post = post->next->next;
	}
	if(post->next == NULL){
		cout << "Mid of Linked List is: " << pre->data << endl;
		return ;
	}
	cout << "Mid of Linked List is: " << pre->data << " and " << pre->next->data << endl;
}

int main(){
	Node* head = inputLL();
	displayLL(head);
	findMid(head);
	return 0;
}
