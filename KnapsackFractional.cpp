#include<bits/stdc++.h>
using namespace std;

class knapsack{
	public:
		static char temp_id;
		char id;
		float weight;
		float profit;
		float profit_weight;
		float fraction;
		
		knapsack(){
			id=temp_id++;
			weight=0;
			profit=0;
			profit_weight=0;
			fraction=0;
		}
};
char knapsack::temp_id='a';

bool comparison_profit_weight(knapsack s1, knapsack s2){
	return s1.profit_weight>s2.profit_weight;
}

void fractional_knapsack(){
	cout << "Enter the number of objects: ";
	int n;
	cin >> n;
	knapsack* object=new knapsack[n];
	for(int i=0; i<n; i++){
		cout << "Enter the weight and profit of " << i+1 << "th object: ";
		cin >> object[i].weight >> object[i].profit;
		object[i].profit_weight=object[i].profit/object[i].weight;
	}
	cout << "Enter the capacity of knapsack: ";
	float k;
	cin >> k;
	sort(object, object+n, comparison_profit_weight);
	int i=0;
	float total_profit=0;
	while(k>0 && i<n){
		object[i].fraction=min(object[i].weight, k);
		k-=object[i].fraction;
		object[i].fraction=object[i].fraction/object[i].weight;
		total_profit+=object[i].fraction*object[i].profit;
		i++;
	}
	cout << "Maximum profit is " << total_profit << endl;
	
	delete []object;
}

int main(){
	fractional_knapsack();
	return 0;
}
