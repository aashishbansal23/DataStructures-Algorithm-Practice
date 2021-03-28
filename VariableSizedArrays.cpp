/*

Consider an n-element array, , where each index i in the array contains a reference to an array of ki integers (where the value of ki varies from array to array). See the Explanation section below for a diagram.

Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a and j denotes an index in the array located at a[i]. For each query, find and print the value of element j in the array at location  on a new line.

Click here to know more about how to create variable sized arrays in C++.

Input Format

The first line contains two space-separated integers denoting the respective values of n(the number of variable-length arrays) and  q(the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing the respective values of  i(an index in array a) and  j(an index in the array referenced by a[i]) for a query.

Output Format

For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index j of the array referenced by a[i]. There should be a total of q lines of output.

*/



#include "bits/stdc++.h"
using namespace std;


int main() {
    int n;
    cin >> n;
    int** a = new int*[n];
    int q;
    cin >> q;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        a[i] = new int[k];
        for(int j=0; j<k; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<q; i++){
        int x, y;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    return 0;
}
