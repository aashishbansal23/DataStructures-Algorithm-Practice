#include<iostream>
using namespace std;

void mergeSort(int input[], int size){
	if(size <= 1){
		return ;
	}
	int mid = size/2;
	int arr1[mid], arr2[size-mid];
	
	for(int i=0; i<mid; i++){
		arr1[i] = input[i];
	}
	for(int i=0; i<size-mid; i++){
		arr2[i] = input[mid+i];
	}
	
	mergeSort(arr1, mid);
	mergeSort(arr2, size-mid);
	
	int i=0, j=0, k=0;
	
	while(i<mid && j<size-mid){
		if(arr1[i] < arr2[j]){
			input[k++] = arr1[i++];
		}else{
			input[k++] = arr2[j++];
		}
	}
	
	while(i<mid){
		input[k++] = arr1[i++];
	}
	while(j<size-mid){
		input[k++] = arr2[j++];
	}
}

int binarySearch(int arr[], int si, int ei, int x){
	if(si == ei){
		if(arr[si] == x){
			return si;
		}else{
			return -1;
		}
	}
	
	int mid = si + (ei-si)/2;
	if(arr[mid] == x){
		return mid;
	}else if(arr[mid] > x){
		return binarySearch(arr, si, mid-1, x);
	}else{
		return binarySearch(arr, mid+1, ei, x);
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
	cout << "Enter the element to found: ";
	int x;
	cin >> x;
	
	mergeSort(arr, size);
	int result = binarySearch(arr, 0, size-1, x);
	if(result == -1){
		cout << "Element not found !!!" << endl;
	}else{
		cout << "Element found Successfully at " << result+1 << " position in the sorted array." << endl;
	}
	
	return 0;
}
