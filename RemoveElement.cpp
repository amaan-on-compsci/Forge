class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto pos = std::find(nums.begin(), nums.end(), val);
        while (pos != nums.end()) {
            nums.erase(pos);
            // Find again, because erasing invalidates the old iterator
            pos = std::find(nums.begin(), nums.end(), val);
        }
        
        // Return the new size of the vector
        return static_cast<int>(nums.size());
    }
};