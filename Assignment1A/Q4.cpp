#include<iostream>
#include<climits>
using namespace std;

int main(){
	int r, c;
	cout << "Enter the number of rows: ";
	cin >> r;
	cout << "Enter the number of columns: ";
	cin >> c;
	int mat[r][c];
	cout << "Enter the matrix: " << endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout << "Enter the element at " << i+1 << "th row and " << j+1 << "th column: ";
			cin >> mat[i][j];
		}
	}
	
	cout << "Array is:" << endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	
	int max=INT_MIN, pos=0, min=INT_MAX, rp=0;
	for(int i=0; i<c; i++){
		for(int j=0; j<r; j++){
			if(mat[j][i] >= max){
				max = mat[j][i];
				pos = j;
			}
		}
		
		for(int k=0; k<c; k++){
			if(mat[pos][k] <= min){
				min = mat[pos][k];
				rp = k;
			}
		}
		if(max == min){
			cout << "Saddle point is at " << pos+1 << " th row " << rp+1 << " th column of array" << endl;
		}else{
			max = INT_MIN;
			min = INT_MAX;
		}
	}
	
	return 0;
}
