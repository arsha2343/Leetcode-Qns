class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> start;
        vector<int> endd;
        for(int i = 0;i < intervals.size();i++){
            start.push_back(intervals[i][0]);
            endd.push_back(intervals[i][1]);
        }
        sort(start.begin(),start.end());
        sort(endd.begin(),endd.end());
        int i = 0,j = 0,cnt = 0,maxcnt = 0;
        while(i < start.size()){
            if(start[i] <= endd[j]){
                cnt++;
                i++;
            }
            else {
                cnt--;
                j++;
            }
            maxcnt = max(maxcnt,cnt);
        }
        return maxcnt;
    }
};