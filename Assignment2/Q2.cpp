#include<iostream>
using namespace std;
#include"Node.cpp"

Node* delete_key(Node* head, int key){
	if(head == NULL){
		cout << "Count of key " << key <<" is 0" << endl;
		return head;
	}
	
	Node* temp = head;
	Node* pre = head;
	int count=0;
	while(temp != NULL){
		if(head -> data == key){
			head = head -> next;
			delete temp;
			temp = head;
			pre = head;
			count++;
		}
		else if(temp -> data == key){
			count++;
			pre->next = temp ->next;
			delete temp;
			temp = pre->next;
		}else{
			pre = temp;
			temp = temp -> next;
		}
	}
	cout << "Count of key " << key << " is " << count << endl;
	return head;	
}

int main(){
	Node* head = inputLL();
	cout << "Enter the key: ";
	int key;
	cin >> key;
	cout << "Before performing operation ";
	displayLL(head);
	head = delete_key(head, key);
	cout << "After performing operation ";
	displayLL(head);
	return 0;
}
