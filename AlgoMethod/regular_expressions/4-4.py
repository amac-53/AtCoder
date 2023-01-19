import re

n, y, m = map(int, input().split())
reg = r'_.+_'+ str(y).zfill(4) + str(m).zfill(2)

for _ in range(n):
    S = input()
    search = re.search(reg, S)
    if search:
        print(search.group().split('_')[1])