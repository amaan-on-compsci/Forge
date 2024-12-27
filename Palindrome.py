class Solution:
    def isPalindrome(self, x: int) -> bool:
        num = str(x)
        if num[0] == "-":
            return False
        rev=num[::-1]
        if int(num)==int(rev):
            return True
        else:
            return False