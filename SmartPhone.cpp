/*

You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget and will buy the app at your declared price if and only if the price is less than or equal to the customer's budget.


You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.


For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60 .


Input format
Line 1 : N, the total number of potential customers.

Lines 2 to N+1: Each line has the budget of a potential customer.


Output format
The output consists of a single integer, the maximum possible revenue you can earn from selling your app.

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long* arr = new long long[n];
	for(int i=0; i<n; i++){
	    cin >> arr[i];
	}
	sort(arr, arr+n);
	
	for(int i=0; i<n; i++){
	    arr[i]=arr[i]*(n-i);
	}
	long long max=arr[0];
	for(int i=1; i<n; i++){
	    if(arr[i]>max){
	        max=arr[i];
	    }
	}
	cout << max << endl;
	delete []arr;
	return 0;
}
