#include<iostream>
using namespace std;

int main(){
	int size;
	cout << "Enter the number of elements to sort: ";
	cin >> size;
	int arr[size];
	cout << "Enter the elements:" << endl;
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	
	for(int i=size-1; i>0; i--){
		int max = arr[i];
		for(int j=0; j<i; j++){
			if(arr[j+1] < arr[j]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout << "Sorted array is:" << endl;
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	delete []arr;
	return 0;
}
