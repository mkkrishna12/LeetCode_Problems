class Solution {
public:
    int maximum69Number (int num) {
        string nums = to_string(num);
        
        for(int pos = 0; pos < nums.size(); pos++)
        {
            if(nums[pos] == '6'){
                nums[pos] = '9';
                break;
            }
        }
        return stoi(nums);
    }
};