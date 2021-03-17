#include<iostream>
using namespace std;

void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void merge(int arr[], int arr1[], int arr2[], int size){
	int mid=size/2;
	int i=0,j=0,k=0;
	while(i<mid && j<size-mid){
		if(arr1[i]<arr2[j]){
			arr[k++]=arr1[i++];
		}else{
			arr[k++]=arr2[j++];
		}
	}
	while(i<mid){
		arr[k++]=arr1[i++];
	}
	while(j<size-mid){
		arr[k++]=arr2[j++];
	}
}

void mergeSortRecursively(int arr[], int size){
	if(size<=1){
		return;
	}
	int mid=size/2;
	int arr1[mid], arr2[size-mid];
	for(int i=0; i<mid; i++){
		arr1[i] = arr[i];
	}
	for(int i=0; i<size-mid; i++){
		arr2[i] = arr[mid+i];
	}
	mergeSortRecursively(arr1,mid);
	mergeSortRecursively(arr2,size-mid);
	merge(arr,arr1,arr2,size);
}

int main(){
	cout << "Enter the number of elements to sort: ";
	int size;
	cin >> size;
	int* arr = new int[size];
	cout << "Enter the elements:" << endl;
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	cout << "Given order of elements:" << endl;
	print(arr, size);
	mergeSortRecursively(arr,size);
	cout << "Elements in sorted order are:" << endl;
	print(arr,size);
	delete []arr;
	return 0;
}
