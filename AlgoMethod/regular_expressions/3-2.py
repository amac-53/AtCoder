import re

S = input()
reg = r'\d{3,}'

search = re.search(reg, S)
if search:
    print("Yes")
else:
    print("No")