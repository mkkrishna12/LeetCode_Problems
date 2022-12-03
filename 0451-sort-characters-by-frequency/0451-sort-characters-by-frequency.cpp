class Solution {
public:
    string frequencySort(string s) {
        map<char, int> count;
        priority_queue<pair<int,char>> q;
        
        for(char c : s){
            count[c]++;
        }
        
        for(auto it : count){
            q.push({it.second, it.first});
        }
        
        string ans = "";
        
        while(!q.empty()){
            
            auto it = q.top();
            for(int i = 0; i < it.first; i++){
                ans+=it.second;
            }
            q.pop();
        }
        
        return ans;
    }
};