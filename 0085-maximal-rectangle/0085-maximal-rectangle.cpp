class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        for(int i = 0; i < heights.size();i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int element = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty() ? -1: st.top();
                maxArea = max(heights[element]*(nse - pse - 1),maxArea);
            }
            st.push(i);
        }
        while(!st.empty()){
            int nse = heights.size();
            int element = st.top();
            st.pop();
            int pse = st.empty() ? -1 : st.top();
            maxArea = max(maxArea,(nse - pse - 1) * heights[element]);
        }
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m  = matrix[0].size();
        int maxArea = 0;
        vector<vector<int>> psum(n, vector<int>(m, '0'));
        for(int j = 0; j < m;j++){
            int sum = 0;
            for(int i = 0; i < n;i++){
            if(matrix[i][j] == '0') sum = 0;
            else sum++;
            psum[i][j] = sum;
            }
        }
        for(int i = 0; i < n;i++){
        maxArea = max(maxArea,largestRectangleArea(psum[i]));
        }
        return maxArea;
    }

};