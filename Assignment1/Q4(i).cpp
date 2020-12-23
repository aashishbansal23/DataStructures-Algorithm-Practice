#include<iostream>
using namespace std;

void reverseArray(int array[], int size){
	int i=0, j=size-1, temp;
	while(i<j){
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		i++;	j--;
	}
}

int main(){
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;
    int array[size];
    cout << "Enter the elements of the array" << endl;
    for(int i=0; i<size; i++){
        cin >> array[i];
    }
    
    reverseArray(array, size);
    
    cout << "Reversed array is: " << endl;
    for(int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
