#include <iostream>
using namespace std;

void helper(bool** edges, int v, int sv, bool* visited){
    if(visited[sv]){
       return ; 
    }
    
    visited[sv] = true;
    for(int i=0; i<v; i++){
        if(edges[sv][i] && !visited[i]){
            helper(edges, v, i, visited);
        }
    }
}

bool isConnected(bool** edges, int v){
    bool* visited = new bool[v];
    for(int i=0; i<v; i++){
        visited[i] = false;
    }
    
    helper(edges, v, 0, visited);
    
    for(int i=0; i<v; i++){
        if(!visited[i]){
            return false;
        }
    }
    return true;
}

int main() {
    // Write your code here
    int v, e;
    cin >> v >> e;
    
    bool** edges = new bool*[v];
    for(int i=0; i<v; i++){
        edges[i] = new bool[v];
        for(int j=0; j<v; j++){
            edges[i][j] = false;
        }
    }
    
    for(int i=0; i<e; i++){
        int a, b;
        cin >> a >> b;
        edges[a][b] = true;
        edges[b][a] = true;
    }
    
    if(isConnected(edges, v)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
    
}
