#include<iostream>
#include"LinkedList.cpp"
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
	cout << "------First linked list------" << endl;
	Node* head1 = takeInput();
	cout << "------Second linked list------" << endl;
	Node* head2 = takeInput();
	unordered_map<int, int> ourmap;
	Node* temp = head2;
	while(temp != NULL){
		ourmap[temp->data]++;
		temp = temp->next;
	}
	vector<int> unon;
	vector<int> inter;

	temp = head1;

	while(temp != NULL){
		int element = temp->data;
		if(ourmap.count(element) > 0){
			inter.push_back(element);
		}
		temp = temp->next;
	}
	temp = head1;
	while(temp != NULL){
		ourmap[temp->data]++;
		temp = temp->next;
	}
	unordered_map<int, int> :: iterator it = ourmap.begin();
	while(it != ourmap.end()){
		unon.push_back(it->first);
		it++;
	}

	cout << "Union of two linked list is:" << endl;
	for(int i=0; i<unon.size(); i++){
		cout << unon[i] << " ";
	}
	cout << endl;
	cout << "Intersection of two linked list is:" << endl;
	for(int i=0; i<inter.size(); i++){
		cout << inter[i] << " ";
	}
	cout << endl;
	return 0;
}
