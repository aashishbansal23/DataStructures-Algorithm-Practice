#include<iostream>
using namespace std;

void print(int arr[], int size){
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int partition(int arr[], int si, int ei){
	if(si>=ei){
		return ei;
	}
	int index=si;
	for(int i=si+1; i<=ei; i++){
		if(arr[si]>arr[i]){
			index++;
		}
	}
	int temp = arr[index];
	arr[index] = arr[si];
	arr[si] = temp;
	
	int i=si,j=ei;
	while(i<j){
		if(arr[i]>arr[index] && arr[j]<arr[index]){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}else if(arr[i]>arr[index]){
			j--;
		}else{
			i++;
		}
	}
	return index;
}

void quickSortRecursively(int arr[], int si, int ei){
	if(si>=ei){
		return;
	}
	
	int index=partition(arr,si,ei);
	quickSortRecursively(arr,si,index-1);
	quickSortRecursively(arr,index+1,ei);
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
	quickSortRecursively(arr,0,size-1);
	cout << "Elements in sorted order are:" << endl;
	print(arr,size);
	delete []arr;
	return 0;
}
