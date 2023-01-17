import re

S = input()
reg = r'1\+1'

search = re.search(reg, S)
if search:
    print("Yes")
else:
    print("No")