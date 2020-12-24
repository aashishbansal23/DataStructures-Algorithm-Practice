#include <iostream>
using namespace std;

void helper(bool** edges, int v, int sv, bool* visited){
    visited[sv] = true;
    for(int i=0; i<v; i++){
        if(edges[sv][i] && !visited[i]){
            helper(edges, v, i, visited);
        }
    }
}

int islands(bool** edges, int v){
    bool* visited = new bool[v];
    for(int i=0; i<v; i++){
        visited[i] = false;
    }
    
    int count = 0;
    
    for(int i=0; i<v; i++){
        if(!visited[i]){
            helper(edges, v, i, visited);
            count++;
        }
    }
    delete []visited;
    return count;
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
    
    cout << islands(edges, v);
    
    for(int i=0; i<v; i++){
        delete []edges[i];
    }
    delete []edges;
}
