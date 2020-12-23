#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<int, int> ourmap;
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the elements of the array:" << endl;
	int element;
	for(int i=0; i<size; i++){
		cin >> element;
		ourmap[element]++;
	}
	unordered_map<int, int> :: iterator it = ourmap.begin();
	int max = 0;
	int ans;
	while(it != ourmap.end()){
		if(it->second > max){
			max = it->second;
			ans = it->first;
		}
		it++;
	}
	cout << "Most frequent element in array is " << ans << endl;
	return 0;
}
