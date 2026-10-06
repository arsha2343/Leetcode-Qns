class Solution {
public:
    string minWindow(string s, string t) {
        int hasharr[256] = {0};
        int l = 0,r = 0,minlen = INT_MAX,sindex = -1,cnt = 0;
        int m = t.size();
        for(int i = 0;i < m;i++){
            hasharr[t[i]]++;
        }
        while(r < s.size()){
            if(hasharr[s[r]] > 0) cnt++;
            hasharr[s[r]]--;
            while(cnt == m){
                if(r-l+1 < minlen){
                    minlen = r - l + 1;
                    sindex = l;
                }
                hasharr[s[l]]++;
                if(hasharr[s[l]] > 0) cnt--;
                l++;
            }
            r = r + 1;
        }
        return sindex == -1 ? "" : s.substr(sindex,minlen); 
    } 
};