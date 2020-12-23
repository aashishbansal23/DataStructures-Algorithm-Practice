#include<iostream>
using namespace std;

int main(){
	cout << "Enter the number of rows of first matrix: ";
	int r1, cr, c2;
	cin >> r1;
	cout << "Enter the number of columns of first matrix and rows of second matrix: ";
	cin >> cr;
	cout << "Enter the columns of second matrix: ";
	cin >> c2;
	
	int mat1[r1][cr], mat2[cr][c2];
	
	cout << "Enter the elements of First matrix" << endl;
	for(int i=0; i<r1; i++){
		cout << "Enter the " << i+1 << " row" << endl;
		for(int j=0; j<cr; j++){
			cin >> mat1[i][j];
		}
	}
	
	cout << "Enter the elements of Second matrix" << endl;
	for(int i=0; i<cr; i++){
		cout << "Enter the " << i+1 << " row" << endl;
		for(int j=0; j<c2; j++){
			cin >> mat2[i][j];
		}
	}
	
	int result[r1][c2];
	
	for(int i=0; i<r1; i++){
		for(int j=0; j<c2; j++){
			result[i][j] = 0;
			for(int k=0; k<cr; k++){
				result[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	cout << "First matrix is:" << endl;
	for(int i=0; i<r1; i++){
		for(int j=0; j<cr; j++){
			cout << mat1[i][j] << "   ";
		}
		cout << endl;
	}
		
	cout << "Second matrix is:" << endl;
	for(int i=0; i<cr; i++){
		for(int j=0; j<c2; j++){
			cout << mat2[i][j] << "   ";
		}
		cout << endl;
	}
	
	cout << "Matrix multiplication result is:" << endl;
	for(int i=0; i<r1; i++){
		for(int j=0; j<c2; j++){
			cout << result[i][j] << "   ";
		}
		cout << endl;
	}
	
	return 0;
}
