class Solution {
public:
    int candy(vector<int>& ratings) {
        // Populate candy distribution vector to initialize candy values per person.
        vector<int> candyDistribution(ratings.size(), 1);
        int minCandies = ratings.size();

        // Perform two passes, one way to increase base values with immediate neighbours
        // Second pass adjusts unfairness.

        for(int i = 0; i < ratings.size() - 1; i++) {
            if(ratings[i] < ratings[i + 1]) {
                int newCandies = candyDistribution[i] + 1 - candyDistribution[i + 1];
                candyDistribution[i + 1] = candyDistribution[i] + 1;
                minCandies += newCandies;
            } 
        }

        for(int i =  ratings.size() - 1; i > 0; i--) { 
            if(ratings[i] < ratings[i - 1] && candyDistribution[i - 1] <= candyDistribution[i]) {
                int newCandies = candyDistribution[i] + 1 - candyDistribution[i - 1];
                candyDistribution[i - 1] = candyDistribution[i] + 1;
                minCandies += newCandies;
            }
        }

    return minCandies;
    }
};