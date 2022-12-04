class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int ans = INT_MAX;
        long long int sum = 0,left = 0,ind;
        for(int i : nums)
        {
            sum+=i;
        }
        for(int i=0; i<nums.size(); i++)
        {
            left+=nums[i];
            sum-=nums[i];
            int t = (left/(i+1));
            int m =(sum/(nums.size()-(i)));
            if(i!=nums.size()-1)
                m =(sum/(nums.size()-(i+1)));
            else{
                m = sum;
            }
            // cout<<m<<" "<<t<<" "/;
            if(ans > abs(m-t)){
                ans = abs(m-t);
                ind = i;
            }

            }
        return ind;
    }
};