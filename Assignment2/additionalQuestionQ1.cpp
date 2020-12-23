#include<iostream>
using namespace std;
#include"Node.cpp"

Node* reverseLinkedListPart(Node* head, int start, int end){
	if(head==NULL || head->next==NULL || start>=end){
		return head;
	}
	
	int i=1;
	Node* temp = head;
	Node* pre = NULL;
	while(i<start){
		temp = temp->next;
	}
	
	i=end;
	while(i>start && post!=NULL){
		temp->next = pre;
		pre = post->next;
		post->next = temp;
		temp = pre;
		pre = post;
		post = temp->next;
		i--;
	}
	temp->next = pre;
	
	
	
}

int main(){
	cout << "Enter the linked list:" << endl;
	Node* head = inputLL();
	int start, end;
	cout << "Enter the number where to start reversing from: ";
	cin >> start;
	cout << "Enter the number till where the list is to reversed: ";
	cin >> end;
	
	head = reverseLinkedListPart(head, start, end);
	
	
	return 0;
}
