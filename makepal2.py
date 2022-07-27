
def palindrome(s):
    i = 0
    j = len(s) - 1
    while (i < j):
        if (s[i] != s[j]):
            return False
        i += 1
        j -= 1
    return True

def solve(string):
    if (palindrome(string)):
        return string
    
    zeros = 0
    ones = 0
    for i in range(len(string)):
        if (string[i] == '0'):
            zeros += 1
        else:
            ones += 1
    
    if (zeros < ones):
        string = string.replace('0', '')
        return string
    else:
        string = string.replace('1', '')
        return string


t = int(input())
while (t != 0):
    n = int(input())
    string = input()
    print(solve(string))
    t -= 1