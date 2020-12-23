#include<iostream>
using namespace std;

void spiral(int **arr, int m, int n)
{
    int row=0, col=0, i=0;
    while(row<m && col<n){
        for(i=col; i<n; i++){
            cout << arr[row][i] << " ";
        }
        row++;
        for(i=row;i<m;i++){
            cout << arr[i][n-1] << " ";
        }
        n--;
        if(row < m){
            for(i=n-1; i>=col; i--){
                cout << arr[m-1][i] << " ";
            }
            m--;
        }
        if(col < n){
            for(i=m-1; i>=row; i--){
                cout << arr[i][col] << " ";
            }
            col++;
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter number of rows and columns:" << endl;
    cin >> m >> n;
    cout << "Enter the elements:" << endl;
    int **a = new int*[m];
    for(int i=0; i<m; i++){
        a[i] = new int[n];
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    spiral(a, m, n);
}
