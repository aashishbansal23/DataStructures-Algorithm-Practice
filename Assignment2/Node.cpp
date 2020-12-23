class Node{
	public:
	int data;
	Node* next;
		Node(int data){
			this -> data = data;
			next = NULL;
		}
};

Node* inputLL(){
	cout << "Enter the linked List:" << endl;
	Node* head = NULL;
	Node* temp = NULL;
	int input;
	cin >> input;
	while(input != -1){
		Node* newNode = new Node(input);
		if(head == NULL){
			head = newNode;
			temp = newNode;
		}else{
			temp -> next = newNode;
			temp = temp -> next;
		}
		cin >> input;
	}
	return head;
}

void displayLL(Node* head){
	if(head == NULL){
		cout << "Linked List is empty !!!" << endl;
		return ;
	}
	
	Node* temp = head;
	cout << "Linked List is:" << endl;
	while(temp != NULL){
		cout << temp -> data << "  ";
		temp = temp -> next;
	}
	cout << endl;
}














/*template<typename T>;
class Node{
	T data;
	Node<T>* next;
	public:
		Node(T value){
			data = value;
			next = NULL;
		}
};

template <typename T>;
Node<T> inputLL(){
	Node<T>* head = NULL;
	Node<T>* temp;
	cout << "Enter the linked list and terminate it by N:" << endl;
	T input;
	cin >> input;
	while(input != N){
		Node<T>* newNode = new Node<T>(input);
		if(head == NULL){
			head = newNode;
			temp = newNode;
		}else{
			temp -> next = newNode;
			temp = temp-> next;
		}
		cin >> input;
	}
	return head;
}
template<typename T>
void displayLL(Node<T>* head){
	if(head == NULL){
		cout << "Linked List is empty !!!" << endl;
		return ;
	}
	cout << "Linkedd List is:" << endl;
	Node<T>* temp = head;
	while(temp != NULL){
		cout << temp -> data << " ";
		temp = temp -> next;
	}
}*/
