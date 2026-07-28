class Solution {
private:
int findmax(vector<int>& piles){
    int maxi = INT_MIN;
    for(int i = 0; i < piles.size();i++){
        maxi = max(maxi,piles[i]);
    }
    return maxi;
}
long long calchrs(vector<int>& piles, int hourly){
    long long totalhrs = 0;
    for(int i = 0; i < piles.size();i++){
        totalhrs += ceil((double)piles[i] / (double)hourly);
    }
    return totalhrs;
}
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findmax(piles);
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long totalhrs = calchrs(piles,mid);
            if(totalhrs <= h) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};