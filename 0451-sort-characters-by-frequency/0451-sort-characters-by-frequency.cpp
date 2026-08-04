class Solution {
    private:
    static bool comparator(pair<int,char> p1,pair<int,char> p2){
        if(p1.first > p2.first) return true;
        if(p1.first < p2.first) return false;
        return p1.second < p2.second;
    }
public:
    string frequencySort(string s) {
       vector<pair<int,char>> freq(256);
       for(int i = 0; i < 256; i++){
        freq[i] = {0,i + '0'};
       }
       for(char ch: s){
        freq[ch - '0'].first++;
       }
       sort(freq.begin(),freq.end(),comparator);
       string ans;
       for(int i = 0; i < 256; i++){
        if(freq[i].first > 0){
            int j = freq[i].first;
            while(j>0){
                ans += freq[i].second;
                j--;
            }
        }
       }
      return ans;
    }
};