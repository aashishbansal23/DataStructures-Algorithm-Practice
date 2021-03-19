#include<bits/stdc++.h>
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

void quickSortIteratively(int arr[], int si, int ei){
	if(si>=ei){
		return;
	}
	stack<int> s;
	int top=-1;
	s.push(si);
	top++;
	s.push(ei);
	top++;
	while(top>=0){
		ei=s.top();
		s.pop();
		top--;
		si=s.top();
		s.pop();
		top--;
		int index=partition(arr,si,ei);
		if(index-1>si){
			s.push(1);
			top++;
			s.push(index-1);
			top++;
		}
		if(index+1<ei){
			s.push(index+1);
			top++;
			s.push(ei);
			top++;
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
	quickSortIteratively(arr,0,size-1);
	cout << "Elements in sorted order are:" << endl;
	print(arr,size);
	delete []arr;
	return 0;
}
