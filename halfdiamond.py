a = int(input("enter the size of the pattern : "))
for i in range((a-1)):
    print("* "*(i+1))
print("* "*a)
for j in range(a-1,0,-1):
    print("* "*j)