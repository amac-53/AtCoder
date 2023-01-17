import re

S = input()
reg = r'algo'

if re.search(reg, S):
    print("Yes")
else:
    print("No")