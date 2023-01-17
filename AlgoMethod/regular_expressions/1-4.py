import re

S = input()
reg = r'cat|dog'

if re.search(reg, S):
    print("Yes")
else:
    print("No")