class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> temp;
         for(int i = 1; i <= numRows; i++){
            long long ans = 1;
            vector<int> ansrow;
            ansrow.push_back(1);
            for(int col = 1; col < i; col++){
                ans = ans * (i - col);
                ans = ans / col;
                ansrow.push_back(ans);
            }
            temp.push_back(ansrow);
         }
         return temp;
     
    }
};