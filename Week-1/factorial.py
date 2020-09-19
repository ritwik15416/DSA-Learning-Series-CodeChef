# cook your dish here
for _ in range(int(input())):
    n = int(input())
    ans,k = 0,1
    while(5**k<=n):
        ans += (n//(5**k))
        k += 1
    print(ans)
