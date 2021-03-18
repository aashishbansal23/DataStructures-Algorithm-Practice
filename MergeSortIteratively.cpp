#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void merge(int arr[], int start, int mid, int end){
	if(start>=end){
		return;
	}
	int arr1[mid-start], arr2[end-mid+1];
	for(int i=0; i<mid-start; i++){
		arr1[i]=arr[start+i];
	}
	for(int i=0; i<end-mid+1; i++){
		arr2[i]=arr[mid+i];
	}
	int i=0,j=0,k=start;
	while(i<mid-start && j<end-mid+1){
		if(arr1[i]<arr2[j]){
			arr[k++]=arr1[i++];
		}else{
			arr[k++]=arr2[j++];
		}
	}
	while(i<mid-start){
		arr[k++]=arr1[i++];
	}
	while(j<end-mid+1){
		arr[k++]=arr2[j++];
	}
}

void mergeSortIteratively(int arr[], int size){
	if(size<=1){
		return;
	}
	
	for(int small_size=1; small_size<size; small_size*=2){
		for(int start=0; start<size-1; start+=2*small_size){
			int mid = min(small_size+start,size-1);
			int end = min(2*small_size+start-1,size-1);
			merge(arr,start,mid,end);
		}
	}
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
	mergeSortIteratively(arr,size);
	cout << "Elements in sorted order are:" << endl;
	print(arr,size);
	delete []arr;
	return 0;
}
