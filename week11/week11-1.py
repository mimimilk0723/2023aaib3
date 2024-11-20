#week11-1.py 主題hash Map set (在資料結構與演算法)教過的 hash 雜湊
table = {} #python用大括號,代表字典,也就是hash table (hash map, hash set)
table[9977341] = 9
table[4433997] = 4

print(table[9977341])
print(table[4433997])
# print(table[0]) #糟: 如果沒有這個key, 就會爆炸
if 0 not in table:  #如果沒有在裡面
  print("table[0]不存在")