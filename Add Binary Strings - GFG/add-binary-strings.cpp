//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	    // your code here
	    int sum = 0;
	    int i = A.size() - 1;
	    int j = B.size() - 1;
	    string ans = "";
	    while(i >= 0 && j >= 0){
	        if(A[i] == '1' && B[j] == '1'){
	            if(sum){
	                ans+='1';
	            }else{
	                ans+='0';
	            }
	            sum = 1;
	        }else if(A[i] == '0' && B[j] == '0'){
	            if(sum){
	                ans+='1';
	            }else{
	                ans+='0';
	            }
	            sum = 0;
	        }else{
	            if(sum){
	                ans+='0';
	                sum = 1;
	            }else{
	                ans+='1';
	                sum = 0;
	            }
	        }
	        i--;
	        j--;
	    }
	    while(i >= 0){
	        if(A[i] == '1'){
	            if(sum == 0){
	                ans+='1';
	            }else{
	                ans+='0';
	            }
	        }else{
	            if(sum){
	                ans+='1';
	            }else{
	                ans+='0';
	            }
	            sum = 0;
	        }
	        i--;
	    }
	    while(j >= 0){
	        if(B[j] == '1'){
	            if(sum == 0){
	                ans+='1';
	            }else{
	                ans+='0';
	            }
	        }else{
	            if(sum){
	                ans+='1';
	            }else{
	                ans+='0';
	            }
	            sum = 0;
	        }
	        j--;
	    }
	    if(sum){
	        ans+='1';
	    }
	    reverse(ans.begin(), ans.end());
	    while(ans.size() > 0 && ans[0] == '0'){
	        ans.erase(0,1);
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends