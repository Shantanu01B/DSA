class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        
        while(low < high) {
            int mid = low + (high - low) / 2;
            
            long long hours = 0;
            
            // Calculate total hours needed with speed = mid
            for(int pile : piles) {
                hours += (pile + mid - 1) / mid;  // ceiling division
            }
            
            if(hours > h) {
                low = mid + 1;   // speed too slow
            } else {
                high = mid;      // try smaller speed
            }
        }
        
        return low;
    }
};