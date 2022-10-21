class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> count;
        for(int i = 0; i < nums.size(); i++)
        {
            count[nums[i] + 1].push_back(i+1);
        }
        for(auto it : count){
            for(int i=0; i<it.second.size() - 1; i++)
            {
                if(it.second[i+1]-it.second[i] <= k){
                    return true;
                }
            }
        }
        return false;
    }
};