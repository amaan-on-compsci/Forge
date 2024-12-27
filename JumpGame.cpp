class Solution {
public:
    bool canJump(vector<int>& nums) {
        // Go backwards and ensure the next valid jump is possible
        // if no max jump is found to reach the next valid index, return false
        // next valid index is updated on the way back each time an index is added to the path chain
        int validIndex = nums.size() - 1;
        bool reachable = true;
        for(int i = nums.size() - 2; i >= 0; i--) {
            if(nums[i] + i - validIndex >= 0) {
                validIndex = i;
                reachable = true;
            } else {
                reachable = false;
            }
        }
        return reachable;
    }
};