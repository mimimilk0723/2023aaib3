///Leetcode 058
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a = s.split()
        return len(a[-1])