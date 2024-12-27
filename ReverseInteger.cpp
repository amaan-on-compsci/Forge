#include<limits>

class Solution {
public:
    int reverse(int x) {
        if(x < 0)
        {
            x = abs(x);
            int reverse = 0;
            while(x > 0)
            {
                int digit = x % 10;
                x /= 10;

                if(reverse > (numeric_limits<int>::max()/10) || 
                reverse < (numeric_limits<int>::min()/10))
                {
                    return 0;
                }

                reverse = reverse * 10 + digit;
            }
            return -reverse;
        }
        else
        {
            int reverse = 0;
            while(x > 0)
            {
                int digit = x % 10;
                x /= 10;

                if(reverse > (numeric_limits<int>::max()/10) || 
                reverse  < (numeric_limits<int>::min()/10))
                {
                    return 0;
                }

                reverse = reverse  * 10 + digit;
            }
            return reverse;
        }
    }
};