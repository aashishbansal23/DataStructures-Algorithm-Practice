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


void removeDuplicates(int input[], int size){
    if(size <= 1){
        return ;
    }
    
    if(input[0] == input[1]){
        for(int i=0; i<size-1; i++){
            input[i] = input[i+1];
        }
        input[size-1] = '\0';
        removeDuplicates(input, size-1);
    }else{
        removeDuplicates(input+1, size-1);
    }
    
}

void display(int arr[]){
    int i=0;
    while(arr[i] != '\0'){
        cout << arr[i++] << " ";
    }
    cout << endl;
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
    mergeSort(arr, size);
    removeDuplicates(arr, size);
    display(arr);
    return 0;
}
