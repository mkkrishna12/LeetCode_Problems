class Solution {
public:
    bool halvesAreAlike(string s) {
        int ans = 0, n = s.size();
        
        for(int i = 0; i < n/2; i++){
            char c = s[i];
            if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'i' 
               || c == 'I' || c == 'O' || c == 'o' || c == 'U' || c == 'u'){
                ans++;
            }
            cout << c << " " << ans <<" ";
        }
        int ans2 = 0;
        
        for(int i = n/2;  i < n; i++){
            char c = s[i];
            if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'i' 
               || c == 'I' || c == 'O' || c == 'o' || c == 'U' || c == 'u'){
                ans2++;
            }
            cout << c << " " << ans <<" ";
        }
        
        return ans == ans2;
    }
};