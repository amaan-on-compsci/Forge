#include<iostream>
// #include<cmath>
// #include<algorithm>
// #include<queue>
 #include<set>
 #include<map>
// #include<utility>
// #include<limits>
// #include<bitset>
 #include<unordered_map>
// #include<vector>
 #include<string>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        // want to iterate over s and store upto that index as a substring until a char repeats (exceeds watch_count) sliding window?!
        std::unordered_map<char, int> charFrequency;
        int start = 0, maxStart = 0, maxLength = 0;
        // iterate over string and add occurences of character counts
        for(int end = 0; end < s.length(); end++)
        {
            char current = s[end];
            if(charFrequency.find(current) != charFrequency.end() && charFrequency[current] >= start
        }

        charFrequency.clear();
    }
};

int main()
{

}