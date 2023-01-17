import re

S = input()
reg = r'^[a-z](-[a-z]+)*$'

search = re.search(reg, S)
if search:
    print("Yes")
else:
    print("No")