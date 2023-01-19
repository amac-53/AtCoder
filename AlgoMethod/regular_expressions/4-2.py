import re

S = input()
reg = r'asian(?=(\s\w+){5,})'
T = r'global'

print(re.sub(reg, T, S))