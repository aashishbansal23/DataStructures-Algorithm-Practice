#include<iostream>
using namespace std;
#include"Node.cpp"


Node* reverseLL(Node* head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	
	Node* temp = head;
	Node* pre = NULL;
	Node* post = head->next;
	
	while(post != NULL){
		temp->next = pre;
		pre = post->next;
		post->next = temp;
		temp = pre;
		pre = post;
		post = temp->next;
	}
	temp->next = pre;
	return temp;
}

int main(){
	Node* head = inputLL();
	cout << "Original ";
	displayLL(head);
	head = reverseLL(head);
	cout << "Reversed ";
	displayLL(head);
	return 0;
}
