class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        queue<string> bfs;
        
        unordered_set<string> dict(bank.begin(), bank.end());
        
        int dist = 0;
        
        string acgt = "ACGT";
        
        if(!dict.count(end)) return -1;
        
        bfs.push(start);
        
        dict.insert(start); dict.insert(end);
        
        while(!bfs.empty()) {
            
            int n = bfs.size();
            
            for(int i=0; i<n; i++) {
                string str = bfs.front();
                
                bfs.pop();
                
                if(str==end) return dist;
                
                
                dict.erase(str);
                
                for(int i=0; i<str.size(); i++) {
                    char tmp = str[i];
                    for(char c: acgt) {
                        str[i] = c;
                        if(dict.count(str)) {
                            
                            bfs.push(str);
                            
                            dict.erase(str);
                        }
                    }
                    str[i] = tmp;
                }
            }
            dist++;
        }
        return -1;
        
    }
};