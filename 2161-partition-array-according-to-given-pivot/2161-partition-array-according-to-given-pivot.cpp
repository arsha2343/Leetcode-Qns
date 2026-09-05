class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lesser;
        vector<int> equal;
        vector<int> greater;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] < pivot) lesser.push_back(nums[i]);
            else if(nums[i] == pivot) equal.push_back(nums[i]);
            else greater.push_back(nums[i]);
        }
        vector<int> ans;
        for(auto a:lesser){
            ans.push_back(a);
        }
        for(auto b:equal){
            ans.push_back(b);
        }
        for(auto c:greater){
            ans.push_back(c);
        }
        return ans;
    }
};