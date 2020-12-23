#include<iostream>
using namespace std;
#include"DoubleNode.cpp"

DoubleNode* insertDL(DoubleNode* head){
	cout << "Enter the position where to insert new node: ";
	int pos;
	cin >> pos;
	cout << "Enter the data of new node: ";
	int dt;
	cin >> dt;
	
	if(pos == 1){
		DoubleNode* newNode = new DoubleNode(dt);
		newNode->previous = head->previous;
		head->previous->next = newNode;
		newNode->next = head;
		head->previous = newNode;
		return newNode;
	}
	
	DoubleNode* temp = head->next;
	int i=1;
	while(temp!=head && i<pos-2){
		temp = temp->next;
		i++;
	}
	if(temp != head){
		DoubleNode* newNode = new DoubleNode(dt);
		newNode->next = temp->next;
		newNode->previous = temp;
		newNode->next->previous = newNode;
		temp->next = newNode;
		return head;
	}else{
		cout << "Linked list is smaller than " << pos << " so, new node not inserted" << endl;
		return head;
	}
	
}

DoubleNode* deleteDL(DoubleNode* head){
	if(head == NULL){
		cout << "Linked list is empty !!!" << endl;
		return head;
	}
	
	cout << "Enter the node number to delete: ";
	int pos;
	cin >> pos;
	if(pos == 1){
		head->previous->next = head->next;
		head->next->previous = head->previous;
		DoubleNode* temp = head->next;
		delete head;
		return temp;
	}
	DoubleNode* temp = head->next;
	DoubleNode* pre = head;
	int i=1;
	while(i<pos-1 && temp!=head){
		pre = temp;
		temp = temp->next;
		i++;
	}
	
	if(i+2 == pos){
		cout << "Entered position is greater than the length of the linked list ! Deletion unsuccessfull !!!" << endl;
		return head;
	}
	
	pre->next = temp->next;
	temp->next->previous = pre;
	
	delete temp;
	return head;
	
}

void searchDL(DoubleNode* head){
	if(head == NULL){
		cout << "Linked list is empty !!!" << endl;
		return ;
	}
	
	cout << "Enter the node data to search: ";
	int dt;
	cin >> dt;
	int pos=1;
	if(head->data == dt){
		cout << "Node with data " << dt << " exists at position " << pos << " ." << endl;
		return ;
	}
	DoubleNode* temp = head->next;
	while(temp != head){
		pos++;
		if(temp->data == dt){
			cout << "Node with data " << dt << " exists at position " << pos << " ." << endl;
			break;
			return ;
		}
		temp = temp->next;
	}
	if(temp == head){
		cout << "The required node does not exists !!!" << endl;
	}
}

int main(){
	DoubleNode* head = inputDL();
	printDL(head);
	int n;
	
	do{
		cout << "Choose from the menu:" << endl;
		cout << "------MENU------" << endl;
		cout << "1. Insert" << endl;
		cout << "2. Delete" << endl;
		cout << "3. Search" << endl;
		cout << "4.Exit" << endl;
		cin >> n;
		
		switch(n){
			//Insert
			case 1:
				head = insertDL(head);
				printDL(head);
				break;
				
			//Delete
			case 2:
				head = deleteDL(head);
				printDL(head);
				break;
				
			//Search
			case 3:
				searchDL(head);
				printDL(head);
				break;
				
			//Exit	
			case 4:
				cout << "Program terminated !!!" << endl;
				break;				
				
			default:
				cout << "Wrong choice. Program terminated !!!" << endl;
				break;
		}
	}while(n>=1 && n<=3);
	
	return 0;
}
