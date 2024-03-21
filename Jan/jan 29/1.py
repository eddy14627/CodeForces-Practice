import builtins
ans = set()
def fun(st , visit , s) : 
    n = len(st)
    if(visit == (1<<n)-1) : 
        ans.add(s)
        return
    for i in range(n) : 
        if not (visit & 1<<i) : 
            fun(st , visit | 1<<i , s + st[i])


st = input()
# passing = ''.join(sorted(st))
# print(passing)
fun(st , 0 , "")
print(len(ans))
allstring = sorted(ans)
for s in allstring :
    print(s)
# ans.sort()
# for s in ans :
#     print(s)
