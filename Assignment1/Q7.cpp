#include<iostream>
using namespace std;

void missingNumber(int input[], int size, int output[], int &output_size){
	if(size <= 1){
		return ;
	}
	
	if(input[0] +1 != input[1]){
		output[output_size++] = input[0]+1;
	}
	missingNumber(input+1, size-1, output, output_size);
	
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
	int output[size], output_size=0;
	missingNumber(arr, size, output, output_size);
	if(output_size == 0){
		cout << "No missing number found" << endl;
	}else{
		cout << "Missing number found which is:" << endl;
		for(int i=0; i<output_size; i++){
			cout << output[i] << " ";
		}
	}
	
	return 0;
}
