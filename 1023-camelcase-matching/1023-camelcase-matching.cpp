class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> ans;
        for(auto it  : queries){
            int i = 0;
            int j = 0;
            bool flg = false;
            while(i < it.size() && j < pattern.size()){
                if(it[i]>='a' && it[i] <= 'z'){
                    if(it[i] == pattern[j]){
                        i++;
                        j++;
                    }else {
                        i++;
                    }
                }else{
                    if(it[i] != pattern[j]){
                        flg = true;
                        break;
                    }
                    i++;
                    j++;
                }
            }
            if(flg){
                ans.push_back(false);
            }else{
                if(j == pattern.size()){
                    while(i < it.size()){
                        if(it[i]>='A' && it[i] <= 'Z'){
                            break;
                        }
                        i++;
                    }
                    ans.push_back(i == it.size());
                }else{
                    ans.push_back(false);
                }
            }
        }
        return ans;
    }
};