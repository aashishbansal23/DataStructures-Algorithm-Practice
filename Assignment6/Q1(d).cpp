#include<iostream>
using namespace std;

void mergeSort(int arr[], int size){
	if(size <= 1){
		return ;
	}
	
	int mid = size/2;
	int a1[mid], a2[size-mid];
	for(int i=0; i<mid; i++){
		a1[i] = arr[i];
	}
	for(int i=0; i<size-mid; i++){
		a2[i] = arr[mid+i];
	}
	mergeSort(a1, mid);
	mergeSort(a2, size-mid);
	
	int i=0, j=0, k=0;
	while(i<mid && j<size-mid){
		if(a1[i] < a2[j]){
			arr[k++] = a1[i++];
		}else{
			arr[k++] = a2[j++];
		}
	}
	while(i<mid){
		arr[k++] = a1[i++];
	}
	while(j<size-mid){
		arr[k++] = a2[j++];
	}
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
	
	mergeSort(arr, size);
	
	cout << "Sorted array is:" << endl;
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	delete []arr;
	return 0;
}
