#week11-2.py  LeetCode 2461. Maximum Sum of....
nums = [1,1,1,2,3] #輸入資料
from collections import Counter #進階資料結構 Hash Map 用來計算出現次數
counter = Counter() #左邊小寫,右邊大寫
for num in nums:
  counter[num] += 1
print(counter) #印出統計結果