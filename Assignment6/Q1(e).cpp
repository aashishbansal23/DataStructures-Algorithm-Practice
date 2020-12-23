#include<iostream>
using namespace std;

void quickSort(int arr[], int si, int ei){
	if(si >= ei){
		return ;
	}
	
	int pivot = arr[ei];
	int index = si-1;
	for(int i=si; i<ei; i++){
		if(arr[i] < pivot){
			index++;
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
	}
	int temp = arr[index+1];
	arr[index+1] = arr[ei];
	arr[ei] = temp;
	int mid = index+1;
	
	quickSort(arr, si, mid-1);
	quickSort(arr, mid+1, ei);
}

int main(){
	int size;
	cout << "Enter the number of elements to sort: ";
	cin >> size;
	int* arr = new int[size];
	cout << "Enter the elements:" << endl;
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	
	quickSort(arr, 0, size-1);
	
	cout << "Sorted array is:" << endl;
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	delete []arr;
	return 0;
}
