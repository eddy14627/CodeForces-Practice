def fun(target , apples , dp) : 
    n = len(apples)
    for i in range(n+1) :
        dp[i][0] = 1
    for idx in range(n) : 
        for tar in range(target , -1, -1) : 
            pick = 0
            not_pick = 0
            if tar-apples[idx] >=0 :
                pick = dp[idx+1][tar-apples[idx]]
            not_pick = dp[idx+1][tar]
            dp[idx][tar] = pick + not_pick
    return dp[n][0]

n = int(input())
appleList = input()
appleStrList = appleList.split()
apples = []
sum = 0

for apple in appleStrList : 
    apple = int(apple)
    apples.append(apple)
    sum += apple

original = sum
sum = sum//2
# print(apples)

dp = [[0 for i in range(sum+2)] for j in range(n+1)]
fun(sum , apples , dp)
res = 1e9
for i in range(sum+1) :
    if dp[n][i] :
        res = min(res , abs(i-(original-i)))
print(res)
