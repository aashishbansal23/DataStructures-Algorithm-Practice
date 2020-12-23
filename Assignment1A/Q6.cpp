#include<iostream>
using namespace std;

void spiral(int **arr, int m, int n){
    int u=m, z=n;
    int x=0, y=-1;
    int **b = new int*[m];
    for(int i=0; i<m; i++){
        b[i] = new int[n];
    }
    int row=0, col=0, i=0;
    while(row<m && col<n){
        for(i=col; i<n; i++){
            y++;
            if(y >= z){
                y=0;
                x++;
            }
            b[x][y] = arr[row][i];
        }
        row++;
        
        for(i=row; i<m; i++){
            y++;
            if(y >= z){
                y=0;
                x++;
            }
            b[x][y] = arr[i][n-1];
        }
        n--;

        if(row < m){
            for(i=n-1; i>=col; i--){
                y++;
                if(y >= z){
                    y=0;
                    x++;
                }
                b[x][y] = arr[m-1][i];
            }
            m--;
        }

        if(col < n){
            for(i=m-1; i>=row; i--){
                y++;
                if(y>=z){
                    y=0;
                    x++;
                }
                b[x][y] = arr[i][col];
            }
            col++;
        }
    }

    for(int i=0; i<u; i++){
        for(int j=0; j<z; j++){
            cout << b[i][j] << "    ";
        }
        cout << endl;
    }
    
}

int main()
{
    int m, n;
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
    return 0;
}
