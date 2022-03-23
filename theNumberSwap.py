r = str(input())
num = list(r)
shift = int(input())
flag = False
if (shift < 0):
    flag = True
else:
    flag = False
if (flag == True):
    shift = abs(shift)
    k = shift % len(num)
    i = 0
    k = k - 1
    while (k < len(num)):
        temp = num[k]
        num[k] = num[i]
        num[i] = temp
        i += 1
        k += 1

if (flag == False):
    shift = abs(shift)
    k = shift % len(num)
    k = k+1
    i = len(num) - 1
    while (k >= 0):
        temp = num[k]
        num[k] = num[i]
        num[i] = temp
        i -= 1
        k -= 1

f = "".join(num)
ans = int(f)
print(ans)