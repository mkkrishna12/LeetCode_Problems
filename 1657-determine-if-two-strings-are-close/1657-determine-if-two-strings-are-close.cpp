class Solution {
public:
    bool closeStrings(string word1, string word2) {
        set<char> s(word1.begin(), word1.end());
        set<char> ss(word2.begin(), word2.end());
        vector<int> a(26, 0), b(26, 0);
        
        for(char c : word1){
            a[c- 'a']++;
        }
        for(char c : word2){
            b[c- 'a']++;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i = 0; i < 26; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        if(s.size() != ss.size()){
            return false;
        }
        for(auto it = s.begin(), i = ss.begin(); it!=s.end(); it++){
            if(*it != *i){
                // cout<<*it <<" " << *i<<" ";
                return false;
            }
            i++;
        }
        
        return true;
    }
};