#include<iostream>
using namespace std;
#include"Node.cpp"

int main(){
	Node* head = inputLL();
	Node* temp = head;
	while(temp->next!=NULL && temp->next!=head){
		temp = temp->next;
	}
	if(temp->next == NULL){
		cout << "Linked list is not circular !!!" << endl;
	}else{
		cout << "Linked list is circular !!!" << endl;
	}
	head = inputLL();
	temp = head;
	while(temp->next != NULL && temp->next != head){
		temp = temp->next;
	}
	temp->next = head;
	if(temp->next == NULL){
		cout << "Linked list is not circular !!!" << endl;
	}else{
		cout << "Linked list is circular !!!" << endl;
	}
	return 0;
}
