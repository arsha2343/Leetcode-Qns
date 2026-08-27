class Solution {
public:
    bool ispalindrome(string s,int start,int end){
        while(start<= end){
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    void func(int ind,string s,vector<string>& ds,vector<vector<string>>& res){
        if(ind == s.size()){
            res.push_back(ds);
            return;
        }
        for(int i = ind;i < s.size();i++){
            if(ispalindrome(s,ind,i)){
                ds.push_back(s.substr(ind,i - ind + 1));
                func(i+1,s,ds,res);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ds;
        func(0,s,ds,res);
        return res;
    }
};