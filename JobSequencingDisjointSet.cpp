#include<bits/stdc++.h>
using namespace std;

class job{
	public:
		static char temp;
		char id;
		int deadline;
		float profit;
		
		job(){
			id=temp++;
			deadline=1;
			profit=0;
		}
};
char job::temp='a';

void print(job arr[], int n){
	if(n<=0){
		cout << "No job data available !!!" << endl;
		return ;
	}
	for(int i=0; i<n; i++){
		cout << arr[i].id << " " << arr[i].deadline << " " << arr[i].profit << endl;
	}
}

int max_deadline(job arr[], int n){
	if(n<=0){
		return 0;
	}
	int max=arr[0].deadline;
	for(int i=1; i<n; i++){
		if(max<arr[i].deadline){
			max=arr[i].deadline;
		}
	}
	return max;
}

bool desc_profit(job j1, job j2){
	return j1.profit>j2.profit;
}

int find(int parent[], int deadline){
	if(parent[deadline]==deadline){
		return deadline;
	}
	return find(parent, parent[deadline]);
}

void parent_union(int parent[], int value, int slot){
	parent[slot]=value;
}

void print_char_array(char ans[], int size){
	if(size<=0){
		cout << "No job sequence possible !!!" << endl;
		return ;
	}
	for(int i=0; i<size; i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	cout << "Enter the number of jobs: ";
	int n;
	cin >> n;
	job* arr = new job[n];
	for(int i=0; i<n; i++){
		cout << "Enter the deadline and profit of " << i+1 << " job: ";
		cin >> arr[i].deadline >> arr[i].profit;
	}
	cout << "Jobs data are:" << endl;
	print(arr, n);
	int size=min(n, max_deadline(arr, n));
	char* ans = new char[size];
	for(int i=0; i<size; i++){
		ans[i]=' ';
	}
	sort(arr, arr+n, desc_profit);
	int* parent=new int[size+1];
	for(int i=0; i<size+1; i++){
		parent[i] = i;
	}
	int count=0;
	for(int i=0; i<n; i++){
		int slot=find(parent, arr[i].deadline);
		if(slot>0){
			ans[slot-1]=arr[i].id;
			count++;
			parent_union(parent, find(parent, slot-1), slot);
		}
		if(count==size){
			break;
		}
	}
	cout << "Jobs sequence for maximum profit are:" << endl;
	print_char_array(ans, size);
	
	delete []parent;
	delete []ans;
	delete []arr;
	return 0;
}
