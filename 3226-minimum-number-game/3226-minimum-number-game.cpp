class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort the nums array
        vector<int> arr;                 // Resulting array

        for (int i = 0; i < nums.size(); i += 2) {
            int alice = nums[i];         // Alice picks the smallest
            int bob = nums[i + 1];       // Bob picks the next smallest

            arr.push_back(bob);          // Bob appends first
            arr.push_back(alice);        // Alice appends next
        }

        return arr;
    }
};
