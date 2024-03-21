def fun(n) :
    if n == 1 :
        return ["0" , "1"]
    vec = fun(n-1)
    new_vec = []
    for e in vec :
        new_vec.append("0" + e)
    for e in vec[::-1] :
        new_vec.append("1" + e)
    return new_vec

n = int(input())
vec = fun(n)
for e in vec :
    print(e)
