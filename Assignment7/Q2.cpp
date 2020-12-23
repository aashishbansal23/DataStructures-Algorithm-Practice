#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<int, int> ourmap;
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	cout << "Enter the elements:" << endl;
	for(int i=0; i<n; i++){
		int element;
		cin >> element;
		ourmap[element]++;
	}
	int x;
	cout << "Enter the element x: ";
	cin >> x;
	unordered_map<int, int> :: iterator it = ourmap.begin();
	while(it != ourmap.end()){
		int temp = x-it->first;
		if(temp == it->first){
			if(ourmap[temp] > 1){
				cout << "There exists two elements in the array whose sum is equal to " << x << endl;
				return 0;
			}
		}else{
			if(ourmap.count(temp) > 0){
				cout << "There exists two elements in the array whose sum is equal to " << x << endl;
				return 0;
			}
		}
		it++;
	}
	cout << "There doesn't exists two elements in the array whose sum is equal to " << x << endl;
	return 0;
}
