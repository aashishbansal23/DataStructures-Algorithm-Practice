#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> helper(bool** edges, int v, int sv, bool* visited, vector<int> temp){
    temp.push_back(sv);
    visited[sv] = true;
    for(int i=0; i<v; i++){
        if(edges[sv][i] && !visited[i]){
            temp = helper(edges, v, i, visited, temp);
        }
    }

    return temp;
}

vector<vector<int>> allConnected(bool** edges, int v, vector<vector<int>> ans){
    bool* visited = new bool[v];
    for(int i=0; i<v; i++){
        visited[i] = false;
    }

    for(int i=0; i<v; i++){
        if(!visited[i]){
            vector<int> temp;
            temp = helper(edges, v, i, visited, temp);
            visited[i] = true;
            ans.push_back(temp);
        }
    }
    delete []visited;
    return ans;
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

    vector<vector<int>> ans;
    ans = allConnected(edges, v, ans);

    for(int i=0; i<ans.size(); i++){
        sort(ans[i].begin(), ans[i].end());
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<v; i++){
        delete []edges[i];
    }
    delete []edges;
}
