class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        string word = "";
        for(char c : s){
            if(c == ' '){
                if(word != "")
                    stk.push(word);
                word = "";
            }else{
                word += c;
            }
        }
        if(word != "")
        stk.push(word);
        s = "";
        while(!stk.empty()){
            s+=stk.top();
           
            stk.pop();
            if(!stk.empty())
                 s+= " ";
        }
        return s;
    }
};