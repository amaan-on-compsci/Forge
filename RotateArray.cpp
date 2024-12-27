class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> prepend;
        if(k <= nums.size()) {
            prepend.insert(prepend.begin(), nums.end() - k, nums.end());
            nums.erase(nums.end() - k, nums.end()); 
            nums.insert(nums.begin(), prepend.begin(), prepend.end());
        } else {
            int count = 0;
            while(count != k) {
                int num = nums.back();
                nums.pop_back();
                nums.insert(nums.begin(), num);
                count++;
            } 
        }
    }
};