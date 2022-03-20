from random import shuffle

cards = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16]
check1 = []
check2 = []

tests = int(input("Test cases: "))
i = 0
while (i < tests):
    shuffle(cards)
    row1 = int(input("Enter the row: "))
    for ind,x in enumerate(cards):
        val = ind+1
        print(x, end=" ")
        if val % 4 == 0:
            print("\n") 
    index1 = (row1 - 1) * 4
    for x in range(index1, index1+4):
        check1.append(cards[x])
    print("\n")




    shuffle(cards)
    row2 = int(input("Enter the row: "))
    for ind,x in enumerate(cards):
        val = ind+1
        print(x, end=" ")
        if val % 4 == 0:
            print("\n") 
    index2 = (row2 - 1) * 4
    for x in range(index2, index2+4):
        check2.append(cards[x])
    print("\n")
    l = list(set(check1).intersection(check2))
    if (len(l) == 0):
        print("Volunteer cheated")
    elif (len(l) == 1):
        print(l[0])
    else:
        print("Bad magician")
    
    check1 = []
    check2 = []
    i += 1

    
