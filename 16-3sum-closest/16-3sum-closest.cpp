class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        
        int len = nums.size();
        
        int closet = INT_MAX , diff = INT_MAX;
        
        for(int i=0; i < len; i++)
        {
            int left = i+1 , right = len-1;
            
            while(left < right){
                
                int sum = nums[i] + nums[left] + nums[right];
                
                if(sum == target)
                    return target;
                
                if(diff > abs(target - sum))
                {
                    diff = abs(target - sum);
                    
                    closet = sum;
                }
                
                 if(sum>target) {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return closet;
    }
    
};