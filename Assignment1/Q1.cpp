#include<iostream>
using namespace std;

void create(int arr[], int &size){
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the elements of the array:" << endl;
	for(int i=0; i<size; i++){
		cin >> arr[i];
	}
}

void display(int arr[], int &size){
	cout << "Array elements are:" << endl;
	for(int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void insert(int arr[], int &size){
	cout << "Enter the place to insert the number: ";
    int pos;
    cin >> pos;
    cout << "Enter the number: ";
    cin >> arr[pos-1];
    if(pos>size){
    	size++;
	}
	cout << "Element inserted Successfully !!" << endl;
}

void Delete(int arr[], int &size){
	cout << "Enter the place to delete the number: ";
	int pos;
    cin >> pos;
    for(int i=pos-1; i<size-1; i++){
    	arr[i] = arr[i+1];
    }
    cout << "Number Deleted Successfully." << endl;
}

void search(int arr[], int &size){
	cout << "Enter the number to Search: ";
    int num;
    cin >> num;
    for(int i=0; i<size; i++){
        if(arr[i] == num){
        	cout << "Number found at " << i+1 << " position." << endl;
        }
    }
}

int main(){
    int arr[100];
    int size;
    int choice;
    
    do{
        cout << "Choose from MENU" << endl;
        cout << "----MENU----" << endl;
        cout << "1.CREATE" << endl;
        cout << "2.DISPLAY" << endl;
        cout << "3.INSERT" << endl;
        cout << "4.DELETE" << endl;
        cout << "5.SEARCH" << endl;
        cout << "6.EXIT" << endl;
        
        cin >> choice;
        
        switch(choice){
            case 1:
            //Create
            create(arr, size);
            break;
            
            case 2:
            //Display
            display(arr, size);
            break;
            
            case 3:
            //Insert
            insert(arr, size);
            break;
            
            case 4:
            //Delete
            Delete(arr, size);
            break;
            
            case 5:
            //Search
            search(arr, size);
            break;
            
            default :
            	if(choice != 6)
            	cout << "Invalid Number !!" << endl;
            break;
            
        }
    }while(choice != 6);
    
    return 0;
}
