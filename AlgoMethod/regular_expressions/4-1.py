import re

S = input()
reg = r'ru(?=r)'
T = r'ra'

replaced = re.sub(reg, T, S)
print(replaced)