#include<iostream>
using namespace std;

int main(){
	int size;
	cout << "Enter the number of elements to sort: ";
	cin >> size;
	int* arr = new int[size];
	cout << "Enter the elements:" << endl;
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	
	//quickSort(arr, 0, size-1);
	
	cout << "Sorted array is:" << endl;
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	delete []arr;
	return 0;
}
