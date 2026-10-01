class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int len = 0,maxlen = 0;
        int l = 0,r = 0;
        set<char> st;
        while(r < n){
            while(st.find(s[r]) != st.end()){
                st.erase(s[l]);
                l++;
            }
            len = r - l + 1;
            st.insert(s[r]);
            r++;
            maxlen = max(len,maxlen);
        }
        return maxlen;
    }
};