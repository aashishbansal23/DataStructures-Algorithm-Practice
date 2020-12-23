#include<iostream>
using namespace std;
#include"Node.cpp"

Node* insert_beg(Node* head){
	if(head == NULL){
		int input;
		cout << "Enter the data of new Node: ";
		cin >> input;
		head = new Node(input);
		cout << "Insertion Successfull !!!" << endl;
		return head;
	}
	int input;
	cout << "Enter the data of new Node: ";
	cin >> input;
	Node* newNode = new Node(input);
	newNode -> next = head;
	head = newNode;
	cout << "Insertion Successfull !!!" << endl;
	return head;
}

void insert_end(Node* head){
	if(head == NULL){
		int input;
		cout << "Enter the data of new Node: ";
		cin >> input;
		head = new Node(input);
		cout << "Insertion Successfull !!!" << endl;
		return ;
	}
	int input;
	cout << "Enter the data of new Node: ";
	cin >> input;
	Node* newNode = new Node(input);
	Node* temp = head;
	while(temp -> next != NULL){
		temp = temp -> next;
	}
	temp -> next = newNode;
	cout << "Insertion Successfull !!!" << endl;
}

Node* insert_bet(Node* head){
	if(head == NULL){
		return head = insert_beg(head);
	}
	
	char c;
	cout << "Want to insert before(B) or after(A) the number: ";
	cin >> c;
	if(c == 'B' || c == 'b'){
		Node* temp = head;
		cout << "Enter the node data before which you want to insert new Node: ";
		int bf;
		cin >> bf;
		
		if(temp -> data == bf){
			return head = insert_beg(head);
		}
		
		cout << "Enter the data of new Node: ";
		int input;
		cin >> input;
		
		Node* newNode = new Node(input);
		while(temp -> next -> data != bf){
			temp = temp -> next;
		}
		newNode -> next = temp -> next;
		temp -> next = newNode;
		cout << "Insertion Successfull !!!" << endl;
		return head;
	}else if(c == 'A' || c == 'a'){
		Node* temp = head;
		cout << "Enter the node data before which you want to insert new Node: ";
		int af;
		cin >> af;
		while(temp -> data != af){
			temp = temp -> next;
		}
		cout << "Enter the data of new Node: ";
		int input;
		cin >> input;
		Node* newNode = new Node(input);
		newNode -> next = temp -> next;
		temp -> next = newNode;
		cout << "Insertion Successfull !!!" << endl;
		return head;  
	}else{
		cout << "Wrong input !! Select from the menu again." << endl;
		return head;
	}
}

Node* delete_beg(Node* head){
	if(head == NULL){
		cout << "Linked List is empty !!!" << endl;
		return head;
	}
	
	Node* temp = head;
	head = head -> next;
	delete temp;
	cout << "Deletion Successfull !!!" << endl;
	return head;
}

Node* delete_end(Node* head){
	if(head == NULL){
		cout << "Linked List is empty !!!" << endl;
		return head;
	}else if(head -> next == NULL){
		delete head;
		cout << "Deletion Successfull !!!" << endl;
		return NULL;
	}
	
	Node* temp = head;
	while(temp -> next -> next != NULL){
		temp = temp -> next;
	}
	Node* temp1 = temp -> next;
	temp -> next = NULL;
	delete temp1;
	cout << "Deletion Successfull !!!" << endl;
	return head; 
}

Node* delete_specific(Node* head){
	if(head == NULL){
		cout << "Linked List is empty !!" << endl;
		return head;
	}
	cout << "Enter the data of the node to delete: ";
	int del;
	cin >> del;
	Node* temp = head;
	if(temp -> next == NULL && temp -> data == del){
		delete temp;
		cout << "Deletion Successfull !!!" << endl;
		return NULL;
	}
	while(temp -> next -> data != del){
		temp = temp -> next;
	}
	Node* temp1 = temp -> next;
	temp -> next = temp1 -> next;
	delete temp1;
	cout << "Deletion Successfull !!!" << endl;
	return head;
}

void search_display(Node* head){
	if(head == NULL){
		cout << "Linked List is empty !!" << endl;
		return ;
	}
	
	int search;
	cout << "Enter the node data to search it's position from head: ";
	cin >> search;
	int count = 0;
	Node* temp = head;
	while(temp -> data != search && temp != NULL){
		temp = temp -> next;
		count++;
	}
	if(temp -> data == search){
		cout << "Position of node from head is " << count << endl;
		return ;
	}else{
		cout << "Node with " << search << " data is not present in Linked List !!" << endl;
		return ;
	}
}

int main(){
	Node* head;
	head = inputLL();
	
	int n;
	do{
		cout << "-----Select from the menu-----" << endl;
		cout << "1. Insertion at the beginning." << endl;
		cout << "2. Insertion at the end." << endl;
		cout << "3. Insertion in between." << endl;
		cout << "4. Deletion from the beginning." << endl;
		cout << "5. Deletion from the end." << endl;
		cout << "6. Deletion of a specific node." << endl;
		cout << "7. Search for a node and display its position from head." << endl;
		cout << "8. Display all the node values." << endl;
		
		cin >> n;
		switch(n){
			case 1:
				//Insertion at the beginning
				head = insert_beg(head);
				break;
				
			case 2:
				//Insertion at the end
				insert_end(head);
				break;
				
			case 3:
				//Insertion in between
				head = insert_bet(head);
				break;
				
				//Deletion from the beginning.
			case 4:
				head = delete_beg(head);
				break;
				
				//Deletion from the end.
			case 5:
				head = delete_end(head);
				break;
				
				//Deletion of a specific node.
			case 6:
				head = delete_specific(head);
				break;
				
				//Search for a node and display its position from head.	
			case 7:
				search_display(head);
				break;
				
				//Display all the node values.
			case 8:
				displayLL(head);
				break;
				
			default :
				cout << "Wrong choice---Program terminated !!!" << endl;
				break;
		}
		
	}while(n>=1 && n<=8);
	
	return 0;
	
}
