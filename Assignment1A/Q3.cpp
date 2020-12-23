#include<iostream>
using namespace std;

int main(){
	int r, c;
	cout << "Enter the number of rows: ";
	cin >> r;
	cout << "Enter the number of columns: ";
	cin >> c;
	
	int arr[r][c];
	int rowSum[r] = {0};
	int colSum[c] = {0};
	
	cout << "Enter the elements of the 2-D array:" << endl;
	
	for(int i=0; i<r; i++){
		cout << "Enter the " << i+1 << " row:" << endl;
		for(int j=0; j<c; j++){
			cin >> arr[i][j];
			rowSum[i] += arr[i][j];
			colSum[j] += arr[i][j];
		}
	}
	
	
	cout << "-----------Sum of rows----------" << endl;
	for(int i=0; i<r; i++){
		cout << "Sum of " << i+1 << " row is: " << rowSum[i] << endl;
	}
	
	cout << "-----------Sum of columns----------" << endl;
	for(int i=0; i<c; i++){
		cout << "Sum of " << i+1 << " column is: " << colSum[i] << endl;
	}
	
	return 0;
}
