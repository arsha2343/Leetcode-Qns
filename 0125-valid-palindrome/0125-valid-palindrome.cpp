class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0;i < s.size();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i]+32;
            }
           if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))){
                s.erase(i,1);
                i--;
            }
        }
        int l = 0,r = s.size() - 1;
        while(l < r){
            if(s[l] != s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};