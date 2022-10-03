class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        char c = colors[0];
        int ans = 0;
        int sum = neededTime[0], maxii = neededTime[0], i = 1;
        for(; i < neededTime.size(); i++){
            if(colors[i] == c){
                maxii = max(neededTime[i], maxii);
                sum+=neededTime[i];
            }else{
                
                ans+=(sum-maxii);
                sum = neededTime[i];
                maxii = neededTime[i];
                c = colors[i];
                // cout  << c << " " << ans << " " << i << "\n";
            }
            // i++;
        }
        ans+=(sum-maxii);
        return ans;
    }
};