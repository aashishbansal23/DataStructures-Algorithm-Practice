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
	
	int min;
	int minIndex;
	
	for(int i=0; i<size; i++){
		min = arr[i];
		minIndex = i;
		for(int j=i; j<size; j++){
			if(min > arr[j]){
				min = arr[j];
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
	
	cout << "Sorted array is:" << endl;
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	delete []arr;
	return 0;
}
