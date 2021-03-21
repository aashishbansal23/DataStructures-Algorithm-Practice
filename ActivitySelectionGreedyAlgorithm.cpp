#include<bits/stdc++.h>
using namespace std;

class activity{
	public:
		int start;
		int finish;
		activity(){
			start=0;
			finish=0;
		}
};

bool sortActivities(activity a1, activity a2){
	return (a1.finish<a2.finish);
}

void findActivities(activity arr[], int size){
	sort(arr, arr+size, sortActivities);
	
	cout << "Activities that can be performed are:" << endl;
	cout << arr[0].start << " " << arr[0].finish << endl;
	int i=0;
	for(int j=1; j<size; j++){
		if(arr[i].finish <= arr[j].start){
			cout << arr[j].start << " " << arr[j].finish << endl;
			i++;
		}
	}
}

int main(){
	cout << "Enter the total number of activities to perform: ";
	int size;
	cin >> size;
	cout << "Enter the start and finish time of all activities:" << endl;
	activity arr[size];
	for(int i=0; i<size; i++){
		cin >> arr[i].start >> arr[i].finish;
	}
	findActivities(arr,size);
	
	return 0;
}
