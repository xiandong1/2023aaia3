class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s+s;
        int N = s2.length();
        s2.substr(1,N-1);
        return s2.substr(1,N-2).find(s) != string::npos;
    }
};