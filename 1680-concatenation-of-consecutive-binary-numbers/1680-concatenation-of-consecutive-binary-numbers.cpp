class Solution {
public:
    int concatenatedBinary(int n) {
        int ans = 0, pow = 1;
        while(n>0){
            int k = n;
            while(k){
                ans = (ans + (pow*(k%2))%(long long )(1e9+7))%((long long )(1e9+7));
                pow = (pow*2)%(long long )(1e9+7);
                k/=2;
            }
            n--;
        }
        return ans;
    }
};