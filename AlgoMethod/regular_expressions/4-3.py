import re

S = input()
reg = r'algo(?!(rithm|method))\w{5,}'
search = re.search(reg, S)
if search:
    print("Yes")
else:
    print("No")