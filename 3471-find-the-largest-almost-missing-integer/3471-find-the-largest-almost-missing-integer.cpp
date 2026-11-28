class Solution {
public:
    int only_one(vector<int>& nums){
        unordered_map<int,int> mpp;
        for(int i = 0;i < nums.size();i++){
            mpp[nums[i]]++;
        }
        int largest = -1;
        for(auto it: mpp){
            if(it.second == 1){
                largest = max(largest,it.first);
            }
        }
        return largest;
    }
    int kIsn(vector<int> nums){
        int largest = -1;
        for(int i = 0;i < nums.size();i++){
            largest = max(largest,nums[i]);
        }
        return largest;
    }
    int func(vector<int>& nums){
        if(nums[0] == nums[nums.size() - 1]) return -1;
        bool first = true;
        bool last = true;
        for(int i = 1;i < nums.size() - 1;i++){
            if(nums[i] == nums[0]) first = false;
            if(nums[i] == nums[nums.size() - 1]) last = false;
        }
        if(first && last) return max(nums[0],nums[nums.size() - 1]);
        else if(first) return nums[0];
        else if(last) return nums[nums.size() - 1];
        else return -1;
    }
    int largestInteger(vector<int>& nums, int k) {
        if(k == 1) return only_one(nums);
        if(k == nums.size()) return kIsn(nums);
        return func(nums);
    }
};