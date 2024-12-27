class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        return abs(sum - (static_cast<int>(nums.size()) * (static_cast<int>(nums.size()) + 1))/2);
    }
};