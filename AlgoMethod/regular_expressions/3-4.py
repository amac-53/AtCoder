import re

S = input()
reg = r'^\w+@\w+\.\w{1,4}$'
# reg = r'^([a-z]|\d)+@([a-z]|\d)\.([a-z]|\d){1,4}'

search = re.search(reg, S)
if search:
    print("Yes")
else:
    print("No")