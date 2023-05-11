import re

s = input()

repatter = re.compile(r"(dream|dreamer|erase|eraser)+")

if repatter.fullmatch(s) is None:
    print("NO")
else:
    print("YES")