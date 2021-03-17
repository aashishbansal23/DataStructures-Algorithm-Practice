#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearchRecursively(int arr[], int si, int ei, int element){
	if(si>=ei){
		return false;
	}
	
	int mid=(si+ei)/2;
	if(arr[mid]==element){
		return true;
	}else if(arr[mid] > element){
		return binarySearchRecursively(arr,0,mid-1,element);
	}else{
		return binarySearchRecursively(arr,mid+1,ei,element);
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
	if(binarySearchRecursively(arr,0,size-1,element)){
		cout << "Element is present!" << endl;
	}else{
		cout << "Element is not present!" << endl;
	}
	delete []arr;
	return 0;
}
