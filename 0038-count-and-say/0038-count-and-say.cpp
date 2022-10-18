class Solution {
public:
    
    string countAndSay(int n) {
        string s="1";
        for(int k=2; k<=n; k++)
        {
            if(s.size()==1)
            {
                s="11";
            }else{
                int cnt=1;
                string ans="";
                for(int i=1; i<s.size();i++)
                {
                    if(s[i]!=s[i-1])
                    {
                        ans+=('0'+cnt);
                        ans+=s[i-1];
                        cnt=1;
                    }else{
                        cnt++;
                    }
                };
                if(s[s.size()-1]==s[s.size()-2]){
                    ans+=('0'+cnt);
                    ans+=s[s.size()-1];
                }else{
                    
                    ans+='1';
                    ans+=s[s.size()-1];
                    
                }
                s=ans;
            }
        }
        return s;
    }
};