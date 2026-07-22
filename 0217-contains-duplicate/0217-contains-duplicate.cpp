class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> hasharr;
        for(int i = 0; i< nums.size();i++){
            hasharr[nums[i]]++;
        }
        for(auto it: hasharr){
            if(it.second >=2) return true;
        }
        return false;
    }
};