class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> convert(nums.begin(), nums.end());
        vector<int> removed(convert.begin(), convert.end());
        nums = removed;
        return nums.size();
    }
};