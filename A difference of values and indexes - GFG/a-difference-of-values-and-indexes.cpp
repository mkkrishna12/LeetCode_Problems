//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
       int ans=INT_MIN;
        int ma = INT_MIN;
        int mi = INT_MAX;
        
        for(int i=0;i<n;i++) {
            ma = max(ma,arr[i]-i);
            mi = min(mi,arr[i]+i);
            
            int v1 = (arr[i]+i)-mi;
            int v2 = ma-(arr[i]-i);
            
            ans = max(ans,max(v1,v2));
        }
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends