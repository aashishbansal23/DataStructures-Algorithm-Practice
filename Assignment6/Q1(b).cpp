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
	
	for(int i=1; i<size; i++){
		int count = 0;
		for(int j=0; j<i; j++){
			if(arr[j] < arr[i]){
				count++;
			}
		}
		
		int temp = arr[i];
		for(int j=i; j>count; j--){
			arr[j] = arr[j-1];
		}
		arr[count] = temp;
	}
	
	cout << "Sorted array is:" << endl;
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	delete []arr;
	return 0;
}
