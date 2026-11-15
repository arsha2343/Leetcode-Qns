class Solution {
public:
    bool checkZeroOnes(string s) {
        int max_zero = 0;
        int max_one = 0;
        int cnt0 = 0;
        int cnt1 = 0;
        for(int i = 0; i < s.size();i++){
            if(s[i] != '1') cnt1 = 0;
            else cnt1++;
            if(s[i] != '0') cnt0 = 0;
            else cnt0++;
            max_zero = max(max_zero,cnt0);
             max_one = max(max_one,cnt1);
        }
        if(max_one > max_zero) return true;
        return false;
    }
};