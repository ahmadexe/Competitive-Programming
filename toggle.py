l = str(input())
s = list(l)
for i in range(0,len(s)):
    if (s[i] == s[i].lower()):
        s[i] = s[i].upper()
    else:
        s[i] = s[i].lower()

x = ""
v = x.join(s)
print(v)