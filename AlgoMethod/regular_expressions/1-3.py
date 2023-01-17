import re

S = input()
reg = r'^a{1,5}b{10}c*$'

if re.search(reg, S):
    print("Yes")
else:
    print("No")