import re

S = input()
reg = r'^\d{3}-\d{4}$'

search = re.search(reg, S)
if search:
    print("Yes")
else:
    print("No")