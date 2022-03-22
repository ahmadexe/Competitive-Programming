def brackets(a):
    s = list(a)    
    i = 0
    j = 1
    while (j < len(s)):
        if (s[i] == ")" and s[j] == "("):
            s[i] = "R"
            s[j] = "R"
        i += 1
        j += 1
    
    x = "".join(s)
    return x.replace("R", "")

a = "()((()()))"
print(brackets(a))
