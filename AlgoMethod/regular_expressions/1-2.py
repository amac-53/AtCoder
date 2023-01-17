import re 

S = input()
reg = r'^metho+d$'

if re.search(reg, S):
    print("Yes")
else:
    print("No")