def solve(string):
    power = 0
    sorted_string = "".join(sorted(string))
    for i in range(len(string)):
        val = ord(sorted_string[i]) - 97
        val += 1
        power += (val * (i+1))
    return power
    

t = int(input())
while (t != 0):
    string = input()
    print(solve(string))
    t -= 1