#include<iostream>
using namespace std;

void diagonal(){
	cout << "Enter the order of the Diagonal matrix: ";
	int order;
	cin >> order;
	int* mat = new int[order];
	
	cout << "Enter the diagonal elements:" << endl;
	for(int i=0; i<order; i++){
		cin >> mat[i];
	}
	
	cout << "Diagonal matrix is:" << endl;
	for(int i=0; i<order; i++){
		for(int j=0; j<order; j++){
			if(i == j){
				cout << mat[i] << "		";
			}else{
				cout << "0		";
			}
		}
		cout << endl;
	}
	delete []mat;
}

void triDiagonal(){
	cout << "Enter the order of the tri-Diagonal matrix: ";
	int order;
	cin >> order;
	int size = 3*order-2;
	int* mat = new int[size];
	
	cout << "Enter the tridiagonal matrix elements in row order:" << endl;
	for(int i=0; i<size; i++){
		cin >> mat[i];
	}
	
	cout << "Tri-diagonal matrix is:" << endl;
	int k=0;
	for(int i=0; i<order; i++){
		for(int j=0; j<order; j++){
			if(i == j || i+1 == j || i-1 == j){
				cout << mat[k++] << " ";
			}else{
				cout << "0 ";
			}
		}
		cout << endl;
	}
	delete []mat;
}

void lowerTriangular(){
	cout << "Enter the order of the lower-triangular matrix: ";
	int order;
	cin >> order;
	int size = (order*(order+1))/2;
	int* mat = new int[size];
	
	cout << "Enter the lower-triangular matrix elements in row order:" << endl;
	for(int i=0; i<size; i++){
		cin >> mat[i];
	}
	
	cout << "Lower-triangular matrix is:" << endl;
	int k = 0;
	for(int i=0; i<order; i++){
		for(int j=0; j<order; j++){
			if(i == j || i > j){
				cout << mat[k++] << " ";
			}else{
				cout << "0 ";
			}
		}
		cout << endl;
	}
	
}

void upperTriangular(){
	cout << "Enter the order of the upper-triangular matrix: ";
	int order;
	cin >> order;
	int size = (order*(order+1))/2;
	int* mat = new int[size];
	
	cout << "Enter the upper-triangular matrix elements in row order:" << endl;
	for(int i=0; i<size; i++){
		cin >> mat[i];
	}
	
	cout << "Upper-triangular matrix is:" << endl;
	int k = 0;
	for(int i=0; i<order; i++){
		for(int j=0; j<order; j++){
			if(i == j || i < j){
				cout << mat[k++] << " ";
			}else{
				cout << "0 ";
			}
		}
		cout << endl;
	}
	
}

void symmetric(){
	cout << "Enter the order of the symmetric matrix: ";
	int order;
	cin >> order;
	cout << "Enter the symmetric matrix elements in row order lower triangular matrix:" << endl;
	int **arr = new int*[order];
	for(int i=0; i<order; i++){
		cout << "Enter the elements(" << i+1 << " elements) of row index:"<<endl;
		int* a = new int[i+1];
		for(int j=0; j<i+1; j++){
			cin >> a[j];
		}
		arr[i] = a;
	}
	for(int i=0; i<order; i++){
		for(int j=0; j<i+1; j++){
			cout << arr[i][j] << "	 ";
		}
		
		for(int j=i+1; j<order; j++){
			cout << arr[j][i] << "	 ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	do{
		cout << "Choose from the menu:" << endl;
		cout << "------MENU------" << endl;
		cout << "1. Diagonal Matrix" << endl;
		cout << "2. Tri-diagonal Matrix" << endl;
		cout << "3. Lower triangular Matrix" << endl;
		cout << "4. Upper triangular Matrix" << endl;
		cout << "5. Symmetric Matrix" << endl;
		cin >> n;
		switch(n){
			//Diagonal matrix
			case 1:
				diagonal();
				break;
			
			//Tri-diagonal matrix
			case 2:
				triDiagonal();
				break;
			
			//Lower triangular matrix
			case 3:
				lowerTriangular();
				break;
			
			//Upper triangular matrix	
			case 4:
				upperTriangular();
				break;
			
			//Symmetric matrix
			case 5:
				symmetric();
				break;
				
			default:
				cout << "Wrong input ! Program terminated!!!" << endl;
		}
		
	}while(n>=1 && n<=5);
	
	return 0;
}
