//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int r, int c, vector<vector<int>>&matrix)  {
        // int r = matrix.size() , c = matrix[0].size();
        int left = 0 , right = c-1 , top = 0 , bottom = r-1 , cnt = 0;
        vector<int>ans;
        while(cnt < r*c)
        {
            int x = top , y = left;
            // if(ans.size() > 0)
            // cout<<ans[ans.size()-1]<<endl;
            while(y <= right && cnt < r*c)
            {
                ans.push_back(matrix[x][y]);
                y++;
                cnt++;
            }
            
            y = right;
            x++;
            
            while(x <= bottom && cnt < r*c)
            {
                 ans.push_back(matrix[x][y]);
                x++;
                cnt++;
            }
            x = bottom;
            y--;
            while(y >= left && cnt < r*c)
            { 
                ans.push_back(matrix[x][y]);
                y--;
                cnt++;
            }
            y = left;
            x--;
            while(x > top && cnt < r*c)
            {
                 ans.push_back(matrix[x][y]);
                x--;
                cnt++;
            }
            
            top++;
            bottom--;
            left++;
            right--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends