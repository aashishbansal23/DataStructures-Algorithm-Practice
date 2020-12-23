#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
	int temp;
	for(int i=size; i>0; i--){
		for(int j=0; j<i-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	int arr[size];
	
	cout << "Enter the elements of the array" << endl;
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	
	bubbleSort(arr, size);
	
	cout << "Sorted array is:" << endl;
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
