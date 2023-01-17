import re

S = input()
reg = r'\(.+\)'

search = re.search(reg, S)
if search:
    print("Yes")
else:
    print("No")