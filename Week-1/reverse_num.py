# Reverse a given number

for _ in range(int(input())):
    n = int(input())
    rev = 0
    while(n>0):
        rev = (rev*10)+(n%10)
        n //= 10
    print(rev)
        
