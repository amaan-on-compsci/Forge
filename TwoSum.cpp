#include <vector>
#include <unordered_map>
#include <iostream>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numberMap;
        for(int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if(numberMap.find(complement) != numberMap.end())
            {
                return {numberMap[complement], i};
            }
            numberMap[nums[i]] = i;
        }
        return {};
    }
};