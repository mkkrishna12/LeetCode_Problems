class Solution {
public:
    bool checkIfPangram(string s) {
        set<char> c(s.begin(), s.end());
        return c.size() == 26;
    }
};