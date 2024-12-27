#include <iostream>
#include <cmath>
// #include<algorithm>
// #include<queue>
// #include<set>
// #include<map>
// #include<utility>
#include <limits>
// #include<bitset>
// #include<unordered_map>
// #include<vector>
#include <string>

int myAtoi(std::string s)
{   // check leading whitespace, check sign, check leading
    // 0s, stop parsing at non-int character appearance
    int traverse = 0, sign = 1;
    while (traverse < s.length() && s[traverse] == ' ') // white space
    {
        traverse++;
    }
    if (traverse < s.length() && (s[traverse] == '-' || s[traverse] == '+')) // detect sign
    {
        sign = (s[traverse] == '-') ? -1 : 1;
        traverse++;
    }
    while (traverse < s.length() && s[traverse] == '0') // 0s
    {
        traverse++;
    } // parsed all unnecessary stuff, now compute values using travered
    if(traverse == s.length()) { return 0; }
    int end = traverse;
    while (s[end] >= '0' && s[end] <= '9' && end < s.length())
    {
        end++;
    } // find end of the integer sequence
    int size = end - traverse;
    int result = 0;
    while (size != 0 && s[traverse] >= '0' && s[traverse] <= '9')
    {
        int digit = (s[traverse++] - '0'); // find digit value
        if (result > ((std::numeric_limits<int>::max() - digit)/10) ||
            result < ((std::numeric_limits<int>::min() + digit)/10))
        {
            return (sign >= 0)
                       ? std::numeric_limits<int>::max()
                       : std::numeric_limits<int>::min(); // round to max in overflow scenario
        }
        result = result * 10 + digit;
        size--;
    }
    return result * sign;
}

int main()
{
    std::string test1 = "42";
    std::string test2 = "   -42";
    std::string test3 = "4193 with words";
    std::string test4 = "words and 987";
    std::string test5 = "-91283472332"; // Overflow case
    std::string test6 = "2147483648";   // Overflow case
    std::string test7 = "+123";
    std::string test8 = "00000123";
    std::string test9 = "-00000123";

    std::cout << "Test 1: \"" << test1 << "\" => " << myAtoi(test1) << std::endl;
    std::cout << "Test 2: \"" << test2 << "\" => " << myAtoi(test2) << std::endl;
    std::cout << "Test 3: \"" << test3 << "\" => " << myAtoi(test3) << std::endl;
    std::cout << "Test 4: \"" << test4 << "\" => " << myAtoi(test4) << std::endl;
    std::cout << "Test 5: \"" << test5 << "\" => " << myAtoi(test5) << std::endl;
    std::cout << "Test 6: \"" << test6 << "\" => " << myAtoi(test6) << std::endl;
    std::cout << "Test 7: \"" << test7 << "\" => " << myAtoi(test7) << std::endl;
    std::cout << "Test 8: \"" << test8 << "\" => " << myAtoi(test8) << std::endl;
    std::cout << "Test 9: \"" << test9 << "\" => " << myAtoi(test9) << std::endl;

    return 0;
}