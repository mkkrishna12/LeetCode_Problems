//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  vector<vector<int>> dir = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        if(source == destination){
            return 0;
        }
        queue<pair<int,int>> tra;
        tra.push(source);
        grid[source.first][source.second] = -1;
        
        int ans =1; 
        int n = grid.size();
        int m = grid[0].size();
        
        while(!tra.empty()){
            int si = tra.size();
            while(si--){
            auto it = tra.front();
            int x = it.first;
            int y = it.second;
            
            for(auto i : dir){
                int x1 = x + i[0];
                int y1 = y + i[1];
                if(x1 == destination.first && y1 == destination.second){
                    return ans;
                }
                if(x1 >= 0 && y1 >= 0 && x1 < n && y1 <m && grid[x1][y1] ==1){
                    tra.push({x1, y1});
                    grid[x1][y1] = -1;
                }
            }
            
            tra.pop();
        }
            ans++;
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends