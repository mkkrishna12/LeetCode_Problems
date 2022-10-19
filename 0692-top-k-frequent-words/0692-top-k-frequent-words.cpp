struct Comp {
        bool operator()(const pair<int,string>& a, const pair<int,string>& b) {
            if(a.first != b.first)
                return a.first<b.first;
            return a.second>b.second;
            
        }
    };
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        for(string s : words)
            mp[s]++;
        priority_queue<pair<int,string> ,vector<pair<int,string>>, Comp>q;
        for(auto it :mp)
        {
           q.push({it.second ,it.first}); 
        }
        vector<string>l;
        while(k && !q.empty())
        {
            l.push_back(q.top().second);
            k--;
            q.pop();
        }
        return l;
    }
};