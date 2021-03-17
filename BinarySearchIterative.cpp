#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearchIterative(int arr[], int size, int element){
	if(size<=0){
		return false;
	}
	int mid=size/2;
	while(mid>=0 && mid<size){
		if(arr[mid]==element){
			break;
		}else if(arr[mid]>element){
			mid/=2;
		}else{
			mid=mid+(size-mid)/2;
		}
		if(mid==0 || (size-mid)/2==0){
			break;
		}
	}
	if(arr[mid]==element){
		return true;
	}else{
		return false;
	}
}

int main(){
	cout << "Enter the array size: ";
	int size;
	cin >> size;
	int* arr = new int[size];
	cout << "Enter the array elements:" << endl;
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
	cout << "Enter the element to search: ";
	int element;
	cin >> element;
	sort(arr,arr+size);
	if(binarySearchIterative(arr,size,element)){
		cout << "Element is present!" << endl;
	}else{
		cout << "Element is not present!" << endl;
	}
	delete []arr;
	return 0;
}
