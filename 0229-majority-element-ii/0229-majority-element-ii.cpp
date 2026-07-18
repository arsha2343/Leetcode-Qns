class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> temp;
        for(int i = 0; i < nums.size();i++){
            if(find(temp.begin(), temp.end(), nums[i]) == temp.end()){
               int cnt = 0;
                for(int j = 0; j < nums.size();j++){
                    if(nums[j] == nums[i]){
                        cnt++;
                    }
                }
                if(cnt > nums.size()/3){
                temp.push_back(nums[i]);
                }
            }
        }
        return temp;
    }
};