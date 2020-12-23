#include<map>
#include<queue>
#include<vector>
#include <iostream>
using namespace std;

vector<int> path(bool** edges, int v, int sv, int ev, bool* visited){
    queue<int> q;
    q.push(sv);
    visited[sv] = true;
    
    map<int, int> ourmap;
    bool ans = false;
    while(!q.empty() && !ans){
        int temp = q.front();
        q.pop();
        for(int i=0; i<v; i++){
            if(edges[temp][i] && !visited[i]){
                ourmap[i] = temp;
                q.push(i);
                visited[i] = true;
                if(i == ev){
                    ans = true;
                    break;
                }
            }
        }
    }
    vector<int> ans1;
    if(!ans){
        return ans1;
    }
    
    ans1.push_back(ev);
    int t1 = ev;
    while(t1 != sv){
        t1 = ourmap[t1];
        ans1.push_back(t1);
    }
    return ans1;
}

int main() {
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
    
    int sv, ev;
    cin >> sv >> ev;
    
    bool* visited = new bool[v];
    for(int i=0; i<v; i++){
        visited[i] = false;
    }
    
    vector<int> ans = path(edges, v, sv, ev, visited);
    
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    
    delete []visited;
    for(int i=0; i<v; i++){
        delete []edges[i];
    }
    delete []edges;
}
