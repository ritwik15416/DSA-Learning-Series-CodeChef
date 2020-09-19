for _ in range(int(input())):
    act,nat = input().split(" ")
    laddu,m = 0,0
    if nat=='INDIAN':
        for _ in range(int(act)):
            l = input().split(" ")
            if l[0]=='CONTEST_WON':
                rank = int(l[1])
                if rank>=20:
                    bonus = 0
                else:
                    bonus = 20-rank
                laddu += (300+bonus)
            elif l[0]=='TOP_CONTRIBUTOR':
                laddu += 300
            elif l[0]=='BUG_FOUND':
                laddu += int(l[1])
            else:
                laddu += 50
        while(laddu>=200):
            laddu -= 200
            m += 1
        print(m)
    else:
        for _ in range(int(act)):
            l = input().split(" ")
            if l[0]=='CONTEST_WON':
                rank = int(l[1])
                if rank>=20:
                    bonus = 0
                else:
                    bonus = 20-rank
                laddu += (300+bonus)
            elif l[0]=='TOP_CONTRIBUTOR':
                laddu += 300
            elif l[0]=='BUG_FOUND':
                laddu += int(l[1])
            else:
                laddu += 50
        while(laddu>=400):
            laddu -= 400
            m += 1
        print(m)
        
        
                
            
