class DoubleNode{
	public:
		int data;
		DoubleNode* previous;
		DoubleNode* next;
		
		DoubleNode(int data){
			this->data = data;
			next = NULL;
			previous = NULL;
		}
};



DoubleNode* inputDL(){
	cout << "Enter the double linked list:" << endl;
	int data;
	cin >> data;
	DoubleNode*  head = NULL;
	DoubleNode*  tail = NULL;
	while(data != -1){
		DoubleNode* newNode = new DoubleNode(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}else{
			tail->next = newNode;
			newNode->previous = tail;
			tail = newNode;
		}
		cin >> data;
	}
	if(head == NULL){
		return head;
	}
	head->previous = tail;
	tail->next = head;
	return head;
}

void printDL(DoubleNode* head){
	if(head == NULL){
		cout << "Linked list is empty !!!" << endl;
		return ;
	}
	cout << "Linked list is:" << endl;
	DoubleNode* temp = head;
	cout << temp->data << " ";
	temp = temp->next;
	while(temp != head){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
