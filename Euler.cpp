#include<bits/stdc++.h>
using namespace std;

int main(){
	cout << "Enter the number of edges: ";
	int e;
	cin >> e;
	cout << "Enter the number of vertices: ";
	int v;
	cin >> v;
	int** graph = new int*[v];
	for(int i=0; i<v; i++){
		graph[i] = new int[v];
		for(int j=0; j<v; j++){
			graph[i][j] = 0;
		}
	}
	cout << "Enter the edges:" << endl;
	for(int i=0; i<e; i++){
		int start, end;
		cin >> start >> end;
		graph[start-1][end-1] = 1;
		graph[end-1][start-1] = 1;
	}
	
	int odd_degree=0;
	for(int i=0; i<v; i++){
		int degree=0;
		for(int j=0; j<v; j++){
			if(graph[i][j]!=0){
				degree++;
			}
		}
		if(degree==0){
			odd_degree=-1;
			break;
		}
		if(degree%2!=0){
			odd_degree++;
		}
	}
	
	if(odd_degree==0){
		cout << "Eulerian cycle exits !!!" << endl;
		cout << "Eulerian path exits !!!" << endl;
	}else if(odd_degree==2){
		cout << "Eulerian cycle does not exits !!!" << endl;
		cout << "Eulerian path exits !!!" << endl;
	}else{
		cout << "Eulerian cycle does not exits !!!" << endl;
		cout << "Eulerian path does not exits !!!" << endl;
	}
	
	
	for(int i=0; i<v; i++){
		delete []graph[i];
	}
	delete []graph;
	return 0;
}
