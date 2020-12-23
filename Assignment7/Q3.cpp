#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<int, int> ourmap;
	int size1, size2;
	cout << "Enter the size of first array: ";
	cin >> size1;
	cout << "Enter the size of second array: ";
	cin >> size2;
	int arr1[size1];
	cout << "Enter the elements of first array:" << endl;
	for(int i=0; i<size1; i++){
		cin >> arr1[i];
	}
	cout << "Enter the elements of second array:" << endl;
	for(int i=0; i<size2; i++){
		int element;
		cin >> element;
		ourmap[element]++;
	}
	int k=0;
	for(int i=0; i<size1; i++){
		if(ourmap.count(arr1[i]) == 0){
			arr1[k++] = arr1[i];
		}
	}
	cout << "Number present in first array but not in second array are:" << endl;
	for(int i=0; i<k; i++){
		cout << arr1[i] << " ";
	}
	cout << endl;
	return 0;
}
