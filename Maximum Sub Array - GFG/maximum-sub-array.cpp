//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    vector<int> ans, t;
	    int sum = 0, preSum = 0;
	    
	    for(int i = 0; i < n; i++){
	        if(a[i] < 0){
	            if(preSum == sum){
	                if(ans.size() < t.size()){
	                    ans = t;
	                }
	            }else if(preSum < sum){
	                 ans = t;
	                 preSum = sum;
	            }
	            t.clear();
	            sum = 0;
	        }else{
	            sum+=a[i];
	            t.push_back(a[i]);
	        }
	    }
        if(preSum == sum){
            if(ans.size() < t.size()){
                ans = t;
            }
        }else if(preSum < sum){
	                 ans = t;
	   }
        if(ans.size() == 0)
        ans.push_back(-1);
        return ans;
 	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends