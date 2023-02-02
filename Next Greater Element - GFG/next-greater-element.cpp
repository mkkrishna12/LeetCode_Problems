//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        stack<long long> stk;
        vector<long long> result(arr.size());
        for(int i = arr.size() - 1; i >= 0; i--){
            
            while(!stk.empty() && arr[i] >= stk.top()){
                stk.pop();
            }
            
            if(stk.empty()){
                result[i] = -1;
            }else{
                result[i] = stk.top();
            }
            stk.push(arr[i]);
        }
        return result;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends