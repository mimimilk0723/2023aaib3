#學習計畫第4題 Easy 在一堆早草裡haystack, 找到一支針needle
#在python只要一航a.find(b)在字串a裡找到字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)