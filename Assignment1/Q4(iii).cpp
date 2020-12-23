#include<iostream>
using namespace std;

int main(){
	int order;
	cout << "Enter the order of matrix: ";
	 cin >> order;
	 int mat[order][order];
	 
	 for(int i=0; i<order; i++){
	 	cout << "Enter the " << i+1 << " row elements" << endl;
	 	for(int j=0; j<order; j++){
	 		cin >> mat[i][j];
		 }
	 }
	 
	 int temp[order][order];
	 for(int i=0; i<order; i++){
	 	for(int j=0; j<order; j++){
	 		temp[j][i] = mat[i][j];
		 }
	 }
	 
	 
	 
	cout << "Transpose of matrix is:" << endl;
	for(int k=0; k<order; k++){
		for(int l=0; l<order; l++){
			cout << temp[k][l] << "  ";
		}
		cout << endl;
	}
	return 0;
}
